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
 * "ammoItem"              <STRING> - ammo item classname
 * "ammoItemTracer"        <STRING> - tracer ammo item classname
 * "ammoItemQuickLoader"   <STRING> - quickloader ammo item classname
 * "convertMag"            <ARRAY of STRING> - classnames the empty magazine can be converted into
 * "count"                 <NUMBER> - maximum ammo count of the magazine
 * "isRepackable"          <BOOL> - is magazine repackable
 * "picture"               <STRING> - magazine's picture
 * "useBelt"               <BOOL> - does magazine use belts
 *
 * Example:
 * ["30Rnd_65x39_caseless_mag"] call cvo_ammo_logistics_core_fnc_getMagazineData
 *
 * Public: No
 */

params [["_magClass", "", [""]]];

if (_magClass == "") exitWith {
      createHashMapFromArray [
         ["ammoDataClass", ""], ["ammoItem", ""], ["ammoItemTracer", ""], ["ammoItemQuickLoader", ""],
         ["convertMag", []], ["displayName", ""], ["count", 0], ["isRepackable", false], ["picture", ""],
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
      ["ammoItem", getText (_ammoConfig >> "item")],
      ["ammoItemTracer", getText (_ammoConfig >> "itemTracer")],
      ["ammoItemQuickLoader", getText (_ammoConfig >> "itemQuickLoader")],
      ["convertMag", getArray (_ammoConfig >> "convertMag")],
      ["count", getNumber (configFile >> "CfgMagazines" >> _magClass >> "count")],
      ["displayName", getText (configFile >> "CfgMagazines" >> _magClass >> "displayName")],
      ["isRepackable", _isRepackable],
      ["picture",getText (configFile >> "CfgMagazines" >> _magClass >> "picture")],
      ["useBelt", ((getNumber (configFile >> "CfgMagazines" >> _magClass >> "useBelt")) == 1)]
   ];

   GVAR(magazineCache) set [_magClass, _magData];
};

_magData
