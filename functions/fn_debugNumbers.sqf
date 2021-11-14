[{
    hintSilent format ["
        RPM     %1 <br/>
        THRUST  %2", 
    vehicle player getSoundController "rpm", 
    vehicle player getSoundController "thrust"
    ];
}, 0, []] call CBA_fnc_addPerFrameHandler;


["debugRPM", "OnEachFrame", {
    hintSilent format ["
        RPM     %1 <br/>
        THRUST  %2", 
    vehicle player getSoundController "rpm", 
    vehicle player getSoundController "thrust"
    ];
}] call BIS_fnc_addStackedEventHandler;