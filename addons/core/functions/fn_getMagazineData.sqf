#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Returns the magazine data. The data is cached per magazine.
 *
 * Arguments:
 * 0: Magazine classname <STRING>
 *
 * Return value:
 * Magazine data <HASHMAP>
 * Keys:
 * "ammoDataClass"         <STRING> - CVO_Magazines class that was resolved
 * "ammoBasic"             <STRING> - ammo ammoBasic classname
 * "ammoTracer"            <STRING> - tracer ammo ammoBasic classname
 * "quickloader"           <STRING> - quickloader ammo ammoBasic classname
 * "magazines"             <ARRAY of STRING> - classnames the empty magazine can be converted into
 * "count"                 <NUMBER> - maximum ammo count of the magazine
 * "isRepackable"          <BOOL> - is magazine repackable
 * "picture"               <STRING> - magazine's picture
 * "useBelt"               <BOOL> - does magazine use belts
 *
 * Example:
 * ["30Rnd_65x39_caseless_mag"] call cvo_redmag_core_fnc_getMagazineData
 *
 * Public: No
 */

params [["_magClass", "", [""]]];

if (_magClass == "") exitWith {
      createHashMapFromArray [
         ["ammoDataClass", ""], ["ammoBasic", ""], ["ammoTracer", ""], ["quickloader", ""],
         ["magazines", []], ["displayName", ""], ["count", 0], ["isRepackable", false], ["picture", ""],
         ["useBelt", false]
      ]
};

if (isNil QGVAR(magazineCache)) then {
   GVAR(magazineCache) = createHashMap;
};

private _magData = (GVAR(magazineCache) get _magClass);

if (isNil "_magData") then {
   (_magClass call BIS_fnc_itemType) params [["_category", ""], ["_type", ""]];

   private _isRepackable  = _category == "Magazine" && {_type in ["Bullet", "ShotgunShell"]};

   private _ref = getText (configFile >> "CfgMagazines" >> _magClass >> QPVAR(magazineData));
   private _ammoConfig = configNull;

   if (_ref != "") then {
      _ammoConfig = configFile >> "CVO_Magazines" >> _ref;
   };

   if (!isClass _ammoConfig) then {
      _ammoConfig = configFile >> "CVO_Magazines" >> QGVARMAG(Default);
   };

   _magData = createHashMapFromArray [
      ["ammoDataClass", configName _ammoConfig],
      ["ammoBasic", getText (_ammoConfig >> "ammoBasic")],
      ["ammoTracer", getText (_ammoConfig >> "ammoTracer")],
      ["quickloader", getText (_ammoConfig >> "quickloader")],
      ["magazines", getArray (_ammoConfig >> "magazines")],
      ["useBelt", ((getNumber (_ammoConfig >> "useBelt")) == 1)],
      ["isRepackable", _isRepackable],
      ["count", getNumber (configFile >> "CfgMagazines" >> _magClass >> "count")],
      ["displayName", getText (configFile >> "CfgMagazines" >> _magClass >> "displayName")],
      ["picture",getText (configFile >> "CfgMagazines" >> _magClass >> "picture")]
   ];

   GVAR(magazineCache) set [_magClass, _magData];
};

_magData
