params ["_car"];

[{
    params ["_args", "_handle"];
    _args params ["_car"];

    if (isNull _car) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };
    if (!alive _car) exitWith {};

    if (engineOn _car) then {
        if (random 10 > 9) then {
            [_car] call grad_gm_trabi_fnc_misfireLocal;
        };
    };
}, 1, [_car]] call CBA_fnc_addPerFrameHandler;