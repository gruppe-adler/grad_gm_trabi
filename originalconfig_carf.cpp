class Car_F: Car
        {
            author = "Bohemia Interactive";
            mapSize = 16;
            _generalMacro = "Car_F";
            occludeSoundsWhenIn = 0;
            obstructSoundsWhenIn = 0;
            secondaryExplosion = -10;
            fuelExplosionPower = 3;
            dammageHalf[] = {};
            dammageFull[] = {};
            armor = 30;
            armorStructural = 4;
            explosionShielding = 1;
            minTotalDamageThreshold = 0.01;
            crewCrashProtection = 2.75;
            crewExplosionProtection = 0.8;
            class HitPoints
            {
                class HitRGlass
                {
                    armor = 0.2;
                    material = -1;
                    name = "sklo predni P";
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitLGlass
                {
                    armor = 0.2;
                    material = -1;
                    name = "sklo predni L";
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass1
                {
                    armor = 0.1;
                    material = -1;
                    name = "glass1";
                    visual = "glass1";
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass2
                {
                    armor = 0.1;
                    material = -1;
                    name = "glass2";
                    visual = "glass2";
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass3
                {
                    armor = 0.1;
                    material = -1;
                    name = "glass3";
                    visual = "glass3";
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass4
                {
                    armor = 0.1;
                    material = -1;
                    name = "glass4";
                    visual = "glass4";
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass5
                {
                    armor = 0.1;
                    material = -1;
                    name = "glass5";
                    visual = "glass5";
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass6
                {
                    armor = 0.1;
                    material = -1;
                    name = "glass6";
                    visual = "glass6";
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitBody
                {
                    armor = 1;
                    material = -1;
                    name = "karoserie";
                    visual = "zbytek";
                    passThrough = 1;
                    explosionShielding = 1.5;
                };
                class HitFuel
                {
                    armor = 0.5;
                    material = -1;
                    name = "palivo";
                    visual = "-";
                    passThrough = 0.1;
                    explosionShielding = 1.5;
                };
                class HitLFWheel
                {
                    armor = 0.2;
                    material = -1;
                    name = "wheel_1_1_steering";
                    visual = "-";
                    passThrough = 0.3;
                    explosionShielding = 4;
                };
                class HitLBWheel
                {
                    armor = 0.2;
                    material = -1;
                    name = "wheel_1_4_steering";
                    visual = "-";
                    passThrough = 0.3;
                    explosionShielding = 4;
                };
                class HitLMWheel
                {
                    armor = 0.2;
                    material = -1;
                    name = "wheel_1_3_steering";
                    visual = "-";
                    passThrough = 0.3;
                    explosionShielding = 4;
                };
                class HitLF2Wheel
                {
                    armor = 0.2;
                    material = -1;
                    name = "wheel_1_2_steering";
                    visual = "-";
                    passThrough = 0.3;
                    explosionShielding = 4;
                };
                class HitRFWheel
                {
                    armor = 0.2;
                    material = -1;
                    name = "wheel_2_1_steering";
                    visual = "-";
                    passThrough = 0.3;
                    explosionShielding = 4;
                };
                class HitRBWheel
                {
                    armor = 0.2;
                    material = -1;
                    name = "wheel_2_4_steering";
                    visual = "-";
                    passThrough = 0.3;
                    explosionShielding = 4;
                };
                class HitRMWheel
                {
                    armor = 0.2;
                    material = -1;
                    name = "wheel_2_3_steering";
                    visual = "-";
                    passThrough = 0.3;
                    explosionShielding = 4;
                };
                class HitRF2Wheel
                {
                    armor = 0.2;
                    material = -1;
                    name = "wheel_2_2_steering";
                    visual = "-";
                    passThrough = 0.3;
                    explosionShielding = 4;
                };
                class HitEngine
                {
                    armor = 0.5;
                    material = -1;
                    name = "motor";
                    visual = "";
                    passThrough = 0.5;
                    explosionShielding = 0.5;
                };
                class HitHull
                {
                    armor = 1.5;
                    material = -1;
                    name = "palivo";
                    visual = "";
                    passThrough = 0.5;
                    explosionShielding = 8;
                    minimalHit = 0.1;
                };
            };
            getInAction = "GetInLow";
            getOutAction = "GetOutLow";
            cargoGetInAction[] = {"GetInLow"};
            cargoGetOutAction[] = {"GetOutLow"};
            gunnerHasFlares = 0;
            turnCoef = 2;
            steerAheadSimul = 0.5;
            steerAheadPlan = 0.35;
            predictTurnPlan = 2;
            predictTurnSimul = 1.5;
            terrainCoef = 2;
            maxFordingDepth = 0.5;
            waterResistance = 1;
            epeImpulseDamageCoef = 15;
            accelAidForceYOffset = -1;
            driverCanSee = "1 + 2 + 4 + 8 + 32";
            gunnerCanSee = "1 + 2 + 4 + 8 + 32";
            commanderCanSee = "1 + 2 + 4 + 8 + 32";
            class PlayerSteeringCoefficients
            {
                turnIncreaseConst = 1;
                turnIncreaseLinear = 1;
                turnIncreaseTime = 0;
                turnDecreaseConst = 5;
                turnDecreaseLinear = 0;
                turnDecreaseTime = 0;
                maxTurnHundred = 1;
            };
            class ViewPilot: ViewPilot
            {
                initFov = 0.9;
                minFov = 0.25;
                maxFov = 1.25;
                initAngleX = 0;
                initAngleY = 0;
                minAngleX = -65;
                maxAngleX = 85;
                minAngleY = -150;
                maxAngleY = 150;
                minMoveX = -0.2;
                maxMoveX = 0.2;
                minMoveY = -0.1;
                maxMoveY = 0.1;
                minMoveZ = -0.1;
                maxMoveZ = 0.2;
            };
            headGforceLeaningFactor[] = {0.01, 0.01, 0.015};
            class NewTurret: NewTurret
            {
            };
            class Turrets
            {
                class MainTurret: NewTurret
                {
                    stabilizedInAxes = 4;
                    outGunnerMayFire = 1;
                    memoryPointGun = "machinegun";
                    body = "";
                    gun = "";
                    gunnerAction = "ManActTestDriverOut";
                    gunnerGetInAction = "GetInLow";
                    gunnerGetOutAction = "GetOutLow";
                    gunBeg = "usti hlavne";
                    gunEnd = "konec hlavne";
                    soundServo[] = {"A3\sounds_f\dummysound", 0.316228, 1, 15};
                    minElev = -5;
                    maxElev = 40;
                    minTurn = -360;
                    maxTurn = 360;
                    gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                    primaryGunner = 1;
                    enableManualFire = 0;
                    gunnerForceOptics = 0;
                    startEngine = 0;
                    class HitPoints
                    {
                        class HitTurret
                        {
                            armor = 0.8;
                            material = -1;
                            name = "vez";
                            visual = "vez";
                            passThrough = 0.5;
                            explosionShielding = 0.4;
                        };
                        class HitGun
                        {
                            armor = 0.4;
                            material = -1;
                            name = "zbran";
                            visual = "zbran";
                            passThrough = 0;
                            explosionShielding = 0.2;
                        };
                    };
                    class ViewOptics: ViewOptics
                    {
                    };
                    class ViewGunner: ViewGunner
                    {
                    };
                    class Components
                    {
                    };
                    disableSoundAttenuation = 0;
                };
            };
            driverLeftHandAnimName = "drivewheel";
            driverRightHandAnimName = "drivewheel";
            driverLeftLegAnimName = "";
            driverRightLegAnimName = "pedal_thrust";
            holdOffroadFormation = 1;
            waterLeakiness = 10;
            class NVGMarkers
            {
                class NVGMarker01
                {
                    name = "nvg_marker";
                    color[] = {0.03, 0.003, 0.003, 1};
                    ambient[] = {0.003, 0.0003, 0.0003, 1};
                    brightness = 0.001;
                    blinking = 1;
                };
            };
            viewCargoShadowDiff = 1;
            viewCargoShadowAmb = 1;
            accuracy = 0.25;
            audible = 5;
            weapons[] = {"CarHorn"};
            magazines[] = {};
            threat[] = {0, 0, 0};
            insideSoundCoef = 0.9;
            soundEnviron[] = {"", 0.000562341, 1};
            soundCrash[] = {"A3\sounds_f\dummysound", 1, 1};
            extCameraPosition[] = {0.5, 2, -10};
            soundGear[] = {"", 1e-005, 1};
            collisionEffect = "collisionEffect";
            hideUnitInfo = 0;
            class AnimationSources
            {
                class HitLFWheel
                {
                    source = "Hit";
                    hitpoint = "HitLFWheel";
                    raw = 1;
                };
                class HitRFWheel: HitLFWheel
                {
                    hitpoint = "HitRFWheel";
                };
                class HitLBWheel: HitLFWheel
                {
                    hitpoint = "HitLF2Wheel";
                };
                class HitRBWheel: HitLFWheel
                {
                    hitpoint = "HitRF2Wheel";
                };
                class HitLF2Wheel: HitLFWheel
                {
                    hitpoint = "HitLBWheel";
                };
                class HitRF2Wheel: HitLFWheel
                {
                    hitpoint = "HitRBWheel";
                };
                class HitLMWheel: HitLFWheel
                {
                    hitpoint = "HitLMWheel";
                };
                class HitRMWheel: HitLFWheel
                {
                    hitpoint = "HitRMWheel";
                };
                class HitGlass1
                {
                    source = "Hit";
                    hitpoint = "HitGlass1";
                    raw = 1;
                };
                class HitGlass2: HitGlass1
                {
                    hitpoint = "HitGlass2";
                };
                class HitGlass3: HitGlass1
                {
                    hitpoint = "HitGlass3";
                };
                class HitGlass4: HitGlass1
                {
                    hitpoint = "HitGlass4";
                };
                class HitGlass5: HitGlass1
                {
                    hitpoint = "HitGlass5";
                };
                class HitGlass6: HitGlass1
                {
                    hitpoint = "HitGlass6";
                };
            };
            class EventHandlers: DefaultEventHandlers
            {
            };
            htMin = 60;
            htMax = 1800;
            afMax = 100;
            mfMax = 80;
            mFact = 1;
            tBody = 150;
            transportMaxWeapons = 12;
            transportMaxMagazines = 64;
            transportMaxBackpacks = 12;
            maximumLoad = 2000;
            supplyRadius = -1;
            memoryPointSupply = "doplnovani";
            class TransportBackpacks
            {
            };
            class TransportMagazines
            {
            };
            class TransportWeapons
            {
            };
            class TransportItems
            {
                class _xx_FirstAidKit
                {
                    name = "FirstAidKit";
                    count = 1;
                };
            };
            brakeTorque = 6000;
            longStiff = 15000;
            latStiffX = 2000;
            latStiffY = 18000;
            wheelMask = "wheel_X_X";
            class Exhausts
            {
                class Exhaust1
                {
                    position = "exhaust";
                    direction = "exhaust_dir";
                    effect = "ExhaustsEffect";
                };
            };
            class Reflectors
            {
                class Left
                {
                    color[] = {1900, 1800, 1700};
                    ambient[] = {5, 5, 5};
                    position = "Light_L";
                    direction = "Light_L_end";
                    hitpoint = "Light_L";
                    selection = "Light_L";
                    size = 1;
                    innerAngle = 100;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 1;
                    useFlare = 0;
                    dayLight = 0;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.25;
                        hardLimitStart = 30;
                        hardLimitEnd = 60;
                    };
                };
                class Right: Left
                {
                    position = "Light_R";
                    direction = "Light_R_end";
                    hitpoint = "Light_R";
                    selection = "Light_R";
                };
                class Right2: Right
                {
                    position = "light_R_flare";
                    useFlare = 1;
                };
                class Left2: Left
                {
                    position = "light_L_flare";
                    useFlare = 1;
                };
            };
            aggregateReflectors[] = {{"Left", "Right", "Left2", "Right2"}};
            numberPhysicalWheels = 4;
            camShakeCoef = 0.2;
            maxGForce = 3;
            class camShakeGForce
            {
                power = 2;
                frequency = 60;
                distance = 0;
                minSpeed = 60;
            };
            class Components: Components
            {
            };
        };
        class Truck_F: Car_F
        {
            author = "Bohemia Interactive";
            class SpeechVariants
            {
                class Default
                {
                    speechSingular[] = {"veh_vehicle_truck_s"};
                    speechPlural[] = {"veh_vehicle_truck_p"};
                };
            };
            textSingular = "truck";
            textPlural = "trucks";
            nameSound = "veh_vehicle_truck_s";
            _generalMacro = "Truck_F";
            fuelExplosionPower = 5;
            displayName = "Truck";
            supplyRadius = 2.5;
            audible = 9;
            turnCoef = 5;
            brakeDistance = 10;
            terrainCoef = 2.5;
            class HitPoints: HitPoints
            {
            };
            epeImpulseDamageCoef = 15;
            crewCrashProtection = 2.65;
            crewExplosionProtection = 0.8;
            maximumLoad = 3000;
            transportMaxBackpacks = 64;
            transportMaxMagazines = 256;
            transportMaxWeapons = 64;
            class PlayerSteeringCoefficients
            {
                turnIncreaseConst = 0.5;
                turnIncreaseLinear = 1;
                turnIncreaseTime = 0;
                turnDecreaseConst = 5;
                turnDecreaseLinear = 0;
                turnDecreaseTime = 0;
                maxTurnHundred = 1;
            };
            class TransportBackpacks
            {
            };
            class TransportMagazines
            {
            };
            class TransportWeapons
            {
            };
            class TransportItems
            {
                class _xx_FirstAidKit
                {
                    name = "FirstAidKit";
                    count = 10;
                };
            };
            numberPhysicalWheels = 6;
            unitInfoType = "RscUnitInfoNoWeapon";
            class Exhausts
            {
                class Exhaust1
                {
                    position = "exhaust";
                    direction = "exhaust_dir";
                    effect = "ExhaustEffectHEMTT";
                };
            };
            class Turrets: Turrets
            {
                class ViewGunner
                {
                };
            };
        };
        class Van_01_base_F: Truck_F
        {
            attenuationEffectType = "CarAttenuation";
            soundGetIn[] = {"A3\Sounds_F\vehicles2\soft\Van_01\Van_01_Enter", 0.446684, 1};
            soundGetOut[] = {"A3\Sounds_F\vehicles2\soft\Van_01\Van_01_Exit", 0.446684, 1, 40};
            soundDammage[] = {"", 0.562341, 1};
            soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\soft\Van_01\Van_01_Engine_Int_Start", 0.707946, 1};
            soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\soft\Van_01\Van_01_Engine_Int_Stop", 0.562341, 1};
            soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\soft\Van_01\Van_01_Engine_Ext_Stop", 1.99526, 1, 50};
            soundEngineOnExt[] = {"A3\Sounds_F\vehicles2\soft\Van_01\Van_01_Engine_Ext_Start", 1.99526, 1, 50};
            buildCrash0[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01", 1.99526, 1, 75};
            buildCrash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02", 1.99526, 1, 75};
            buildCrash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03", 1.99526, 1, 75};
            buildCrash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04", 1.99526, 1, 75};
            buildCrash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05", 1.99526, 1, 75};
            buildCrash5[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06", 1.99526, 1, 75};
            buildCrash6[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07", 1.99526, 1, 75};
            buildCrash7[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08", 1.99526, 1, 75};
            soundBuildingCrash[] = {"buildCrash0", 0.125, "buildCrash1", 0.125, "buildCrash2", 0.125, "buildCrash3", 0.125, "buildCrash4", 0.125, "buildCrash5", 0.125, "buildCrash6", 0.125, "buildCrash7", 0.125};
            WoodCrash0[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01", 1.99526, 1, 75};
            WoodCrash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02", 1.99526, 1, 75};
            WoodCrash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03", 1.99526, 1, 75};
            WoodCrash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04", 1.99526, 1, 75};
            WoodCrash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05", 1.99526, 1, 75};
            WoodCrash5[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06", 1.99526, 1, 75};
            WoodCrash6[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07", 1.99526, 1, 75};
            WoodCrash7[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08", 1.99526, 1, 75};
            soundWoodCrash[] = {"woodCrash0", 0.125, "woodCrash1", 0.125, "woodCrash2", 0.125, "woodCrash3", 0.125, "woodCrash4", 0.125, "woodCrash5", 0.125, "woodCrash6", 0.125, "woodCrash7", 0.125};
            armorCrash0[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01", 1.99526, 1, 75};
            armorCrash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02", 1.99526, 1, 75};
            armorCrash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03", 1.99526, 1, 75};
            armorCrash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04", 1.99526, 1, 75};
            armorCrash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05", 1.99526, 1, 75};
            armorCrash5[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06", 1.99526, 1, 75};
            armorCrash6[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07", 1.99526, 1, 75};
            armorCrash7[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08", 1.99526, 1, 75};
            soundArmorCrash[] = {"ArmorCrash0", 0.125, "ArmorCrash1", 0.125, "ArmorCrash2", 0.125, "ArmorCrash3", 0.125, "ArmorCrash4", 0.125, "ArmorCrash5", 0.125, "ArmorCrash6", 0.125, "ArmorCrash7", 0.125};
            Crash0[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01", 1.99526, 1, 75};
            Crash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02", 1.99526, 1, 75};
            Crash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03", 1.99526, 1, 75};
            Crash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04", 1.99526, 1, 75};
            Crash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05", 1.99526, 1, 75};
            Crash5[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06", 1.99526, 1, 75};
            Crash6[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07", 1.99526, 1, 75};
            Crash7[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08", 1.99526, 1, 75};
            soundCrashes[] = {"Crash0", 0.125, "Crash1", 0.125, "Crash2", 0.125, "Crash3", 0.125, "Crash4", 0.125, "Crash5", 0.125, "Crash6", 0.125, "Crash7", 0.125};
            BushCrash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01", 0.630957, 1, 50};
            BushCrash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02", 0.630957, 1, 50};
            BushCrash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03", 0.630957, 1, 50};
            BushCrash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03", 0.630957, 0.8, 50};
            soundBushCrash[] = {"BushCrash1", 0.25, "BushCrash2", 0.25, "BushCrash3", 0.25, "BushCrash4", 0.25};
            class Sounds
            {
                soundSetsInt[] = {"Van_01_Engine_RPM0_INT_SoundSet", "Van_01_Engine_RPM1_INT_SoundSet", "Van_01_Engine_RPM2_INT_SoundSet", "Van_01_Engine_RPM3_INT_SoundSet", "Van_01_Engine_RPM4_INT_SoundSet", "Van_01_Rattling_INT_SoundSet", "Van_01_Stress_INT_SoundSet", "Van_01_Rain_INT_SoundSet", "Van_01_Tires_Rock_Fast_INT_SoundSet", "Van_01_Tires_Grass_Fast_INT_SoundSet", "Van_01_Tires_Sand_Fast_INT_SoundSet", "Van_01_Tires_Gravel_Fast_INT_SoundSet", "Van_01_Tires_Mud_Fast_INT_SoundSet", "Van_01_Tires_Asphalt_Fast_INT_SoundSet", "Van_01_Tires_Water_Fast_INT_SoundSet", "Van_01_Tires_Rock_Slow_INT_SoundSet", "Van_01_Tires_Grass_Slow_INT_SoundSet", "Van_01_Tires_Sand_Slow_INT_SoundSet", "Van_01_Tires_Gravel_Slow_INT_SoundSet", "Van_01_Tires_Mud_Slow_INT_SoundSet", "Van_01_Tires_Asphalt_Slow_INT_SoundSet", "Van_01_Tires_Water_Slow_INT_SoundSet", "Van_01_Tires_Turn_Hard_INT_SoundSet", "Van_01_Tires_Turn_Soft_INT_SoundSet", "Van_01_Tires_Brake_Hard_INT_SoundSet", "Van_01_Tires_Brake_Soft_INT_SoundSet", ""};
                soundSetsExt[] = {"Van_01_Engine_RPM0_EXT_SoundSet", "Van_01_Engine_RPM1_EXT_SoundSet", "Van_01_Engine_RPM2_EXT_SoundSet", "Van_01_Engine_RPM3_EXT_SoundSet", "Van_01_Engine_RPM4_EXT_SoundSet", "Van_01_Rattling_EXT_SoundSet", "Van_01_Stress_EXT_SoundSet", "Van_01_Rain_EXT_SoundSet", "Van_01_Tires_Rock_Fast_EXT_SoundSet", "Van_01_Tires_Grass_Fast_EXT_SoundSet", "Van_01_Tires_Sand_Fast_EXT_SoundSet", "Van_01_Tires_Gravel_Fast_EXT_SoundSet", "Van_01_Tires_Mud_Fast_EXT_SoundSet", "Van_01_Tires_Asphalt_Fast_EXT_SoundSet", "Van_01_Tires_Water_Fast_EXT_SoundSet", "Van_01_Tires_Rock_Slow_EXT_SoundSet", "Van_01_Tires_Grass_Slow_EXT_SoundSet", "Van_01_Tires_Sand_Slow_EXT_SoundSet", "Van_01_Tires_Gravel_Slow_EXT_SoundSet", "Van_01_Tires_Mud_Slow_EXT_SoundSet", "Van_01_Tires_Asphalt_Slow_EXT_SoundSet", "Van_01_Tires_Water_Slow_EXT_SoundSet", "Van_01_Tires_Turn_Hard_EXT_SoundSet", "Van_01_Tires_Turn_Soft_EXT_SoundSet", "Van_01_Tires_Brake_Hard_EXT_SoundSet", "Van_01_Tires_Brake_Soft_EXT_SoundSet", ""};
            };
            features = "Randomization: Yes, 2 skins, disabled by: this setVariable [""""BIS_enableRandomization"""",false];                     <br />Specific skin may be set by: this setVariable [""""color"""",X]; (the number ranges from 0 to 1)                      <br />Camo selections: 2 - cabin and rear                       <br />Script door sources: None                     <br />Script animations: None                       <br />Executed scripts: \A3\soft_f_gamma\van_01\scripts\randomize_colour.sqf, \A3\soft_f_gamma\van_01\scripts\clock.sqf                         <br />Firing from vehicles: No                      <br />Slingload: Slingloadable                      <br />Cargo proxy indexes: 1 and 2";
            author = "Bohemia Interactive";
            mapSize = 7.59;
            _generalMacro = "Van_01_base_F";
            editorSubcategory = "EdSubcat_Cars";
            class Library
            {
                libTextDesc = "The civilian 4x4 truck is a highly customizable truck with off-road capabilities preferred by the civilian population. It builds on retro design, but utilizes a modern engine and electronics. Most common truck setups are boxed, cistern and pick-up set.";
            };
            cost = 50000;
            threat[] = {0, 0, 0};
            transportSoldier = 2;
            memoryPointTaskMarker = "TaskMarker_1_pos";
            slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
            showNVGCargo[] = {0, 1};
            soundAttenuationCargo[] = {1, 0};
            maxFordingDepth = -0.1;
            class TransportItems
            {
                class _xx_FirstAidKit
                {
                    name = "FirstAidKit";
                    count = 2;
                };
            };
            armor = 80;
            armorLights = 0.01;
            hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
            class AnimationSources: AnimationSources
            {
                class Hide
                {
                    source = "user";
                    animPeriod = 1;
                    initPhase = 0;
                };
                class Hide_Dashboard
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 0.01;
                };
            };
            class EventHandlers: EventHandlers
            {
                postinit = "if (local (_this select 0)) then {[(_this select 0), """""""", [], false] call bis_fnc_initVehicle;};";
            };
            class Turrets
            {
            };
            class HitPoints: HitPoints
            {
                class HitLFWheel: HitLFWheel
                {
                    radius = 0.2;
                    visual = "wheel_1_1_damage";
                    armorComponent = "wheel_1_1_hide";
                    armor = -120;
                    minimalHit = -0.00833333;
                    explosionShielding = 4;
                    passThrough = 0;
                };
                class HitLF2Wheel: HitLF2Wheel
                {
                    radius = 0.2;
                    visual = "wheel_1_2_damage";
                    armorComponent = "wheel_1_2_hide";
                    armor = -120;
                    minimalHit = -0.00833333;
                    explosionShielding = 4;
                    passThrough = 0;
                };
                class HitRFWheel: HitRFWheel
                {
                    radius = 0.2;
                    visual = "wheel_2_1_damage";
                    armorComponent = "wheel_2_1_hide";
                    armor = -120;
                    minimalHit = -0.00833333;
                    explosionShielding = 4;
                    passThrough = 0;
                };
                class HitRF2Wheel: HitRF2Wheel
                {
                    radius = 0.2;
                    visual = "wheel_2_2_damage";
                    armorComponent = "wheel_2_2_hide";
                    armor = -120;
                    minimalHit = -0.00833333;
                    explosionShielding = 4;
                    passThrough = 0;
                };
                class HitFuelTank: HitFuel
                {
                    name = "fueltank";
                    explosionShielding = 2;
                };
                class HitFuel: HitFuelTank
                {
                    name = "palivo";
                    depends = "HitFuelTank";
                };
                class HitEngine: HitEngine
                {
                    name = "engine";
                };
                class HitGlass1: HitGlass1
                {
                    armor = 0.05;
                };
                class HitGlass2: HitGlass2
                {
                    armor = 0.05;
                };
                class HitGlass3: HitGlass3
                {
                    armor = 0.05;
                };
                class HitGlass4: HitGlass4
                {
                    armor = 0.05;
                };
            };
            wheelDamageThreshold = 0.0416667;
            wheelDamageRadiusCoef = 0.7;
            wheelDestroyRadiusCoef = 0.35;
            driverAction = "driver_Van_01";
            cargoAction[] = {"passenger_VAN_codriver01", "passenger_VAN_codriver02"};
            hideWeaponsCargo = 1;
            cargoIsCoDriver[] = {1, 1};
            getInAction = "GetInLow";
            getOutAction = "GetOutMedium";
            cargoGetInAction[] = {"GetInLow"};
            cargoGetOutAction[] = {"GetOutMedium"};
            thrustDelay = 1;
            brakeIdleSpeed = 0.87;
            maxSpeed = 115;
            fuelCapacity = 18;
            wheelCircumference = 2.689;
            antiRollbarForceCoef = 0.5;
            antiRollbarForceLimit = 5;
            antiRollbarSpeedMin = 10;
            antiRollbarSpeedMax = 80;
            idleRpm = 850;
            redRpm = 3500;
            engineLosses = 30;
            transmissionLosses = 1000;
            class complexGearbox
            {
                GearboxRatios[] = {"R1", -3.8, "N", 0, "D1", 5.37, "D2", 2.573, "D3", 1.491, "D4", 1.132, "D5", 0.845};
                TransmissionRatios[] = {"High", 4.137};
                gearBoxMode = "auto";
                moveOffGear = 1;
                driveString = "D";
                neutralString = "N";
                reverseString = "R";
            };
            simulation = "carx";
            dampersBumpCoef = 0.3;
            differentialType = "all_open";
            frontRearSplit = 0.5;
            frontBias = 1.3;
            rearBias = 1.3;
            centreBias = 1.3;
            clutchStrength = 25;
            enginePower = 170;
            maxOmega = 360;
            peakTorque = 550;
            dampingRateFullThrottle = 0.08;
            dampingRateZeroThrottleClutchEngaged = 0.35;
            dampingRateZeroThrottleClutchDisengaged = 0.15;
            torqueCurve[] = {{0, 0}, {0.278, 0.5}, {0.35, 0.75}, {0.461, 1}, {0.6, 0.95}, {0.7, 0.85}, {0.95, 0.75}, {1, 0.3}};
            changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95};
            switchTime = 0.41;
            latency = 2;
            class Wheels
            {
                class LF
                {
                    side = "left";
                    suspTravelDirection[] = {-0.125, -1, 0};
                    boneName = "wheel_1_1_damper";
                    steering = 1;
                    center = "wheel_1_1_axis";
                    boundary = "dustFrontLeft";
                    width = "0.24";
                    mass = 30;
                    MOI = 10.9;
                    dampingRate = 0.5;
                    maxBrakeTorque = 6000;
                    maxHandBrakeTorque = 0;
                    suspForceAppPointOffset = "wheel_1_1_axis";
                    tireForceAppPointOffset = "wheel_1_1_axis";
                    maxCompression = 0.1;
                    maxDroop = 0.15;
                    sprungMass = 350;
                    springStrength = 43750;
                    springDamperRate = 8200;
                    longitudinalStiffnessPerUnitGravity = 100000;
                    latStiffX = 25;
                    latStiffY = 12000;
                    frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
                };
                class LR: LF
                {
                    boneName = "wheel_1_2_damper";
                    steering = 0;
                    center = "wheel_1_2_axis";
                    boundary = "dustBackLeft";
                    suspForceAppPointOffset = "wheel_1_2_axis";
                    tireForceAppPointOffset = "wheel_1_2_axis";
                    maxHandBrakeTorque = 9000;
                    sprungMass = 850;
                    springStrength = 48750;
                    springDamperRate = 10600;
                };
                class RF: LF
                {
                    side = "right";
                    suspTravelDirection[] = {0.125, -1, 0};
                    boneName = "wheel_2_1_damper";
                    center = "wheel_2_1_axis";
                    boundary = "dustFrontRight";
                    suspForceAppPointOffset = "wheel_2_1_axis";
                    tireForceAppPointOffset = "wheel_2_1_axis";
                };
                class RR: RF
                {
                    boneName = "wheel_2_2_damper";
                    steering = 0;
                    center = "wheel_2_2_axis";
                    boundary = "dustBackRight";
                    suspForceAppPointOffset = "wheel_2_2_axis";
                    tireForceAppPointOffset = "wheel_2_2_axis";
                    maxHandBrakeTorque = 9000;
                    sprungMass = 850;
                    springStrength = 48750;
                    springDamperRate = 10600;
                };
            };
            class RenderTargets
            {
                class mirrorL1
                {
                    renderTarget = "rendertarget1";
                    class CameraView1
                    {
                        pointPosition = "PIP1_pos";
                        pointDirection = "PIP1_dir";
                        renderVisionMode = 4;
                        renderQuality = 2;
                        fov = 0.7;
                    };
                    BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
                };
                class mirrorR1
                {
                    renderTarget = "rendertarget2";
                    class CameraView1
                    {
                        pointPosition = "PIP2_pos";
                        pointDirection = "PIP2_dir";
                        renderVisionMode = 4;
                        renderQuality = 2;
                        fov = 0.7;
                    };
                    BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
                };
                class mirrorR2
                {
                    renderTarget = "rendertarget3";
                    class CameraView
                    {
                        pointPosition = "PIP3_pos";
                        pointDirection = "PIP3_dir";
                        renderVisionMode = 4;
                        renderQuality = 2;
                        fov = 0.7;
                    };
                    BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
                };
            };
            extCameraPosition[] = {0, 2.5, -8};
            camShakeCoef = 0.8;
            class Exhausts
            {
                class Exhaust1
                {
                    position = "exhaust";
                    direction = "exhaust_dir";
                    effect = "ExhaustsEffect";
                };
            };
            class Reflectors
            {
                class Left
                {
                    color[] = {130, 130, 220};
                    ambient[] = {5, 5, 7};
                    position = "Light_L";
                    direction = "Light_L_end";
                    hitpoint = "Light_L";
                    selection = "Light_L";
                    size = 1;
                    innerAngle = 30;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 100;
                    useFlare = 0;
                    dayLight = 0;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.05;
                        hardLimitStart = 50;
                        hardLimitEnd = 80;
                    };
                };
                class Right: Left
                {
                    position = "Light_R";
                    direction = "Light_R_end";
                    hitpoint = "Light_R";
                    selection = "Light_R";
                };
                class Right2: Right
                {
                    position = "light_R_flare";
                    useFlare = 1;
                };
                class Left2: Left
                {
                    position = "light_L_flare";
                    useFlare = 1;
                };
                class Right3: Right2
                {
                    position = "light_R_flare2";
                    flareSize = 0.3;
                    selection = "Light_R2";
                };
                class Left3: Left2
                {
                    position = "light_L_flare2";
                    flareSize = 0.3;
                    selection = "Light_L2";
                };
            };
            aggregateReflectors[] = {{"Left", "Right", "Left2", "Right2", "Left3", "Right3"}};
            class Damage
            {
                tex[] = {};
                mat[] = {"A3\soft_f_gamma\van_01\Data\van_01_ext.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_ext_damage.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_ext_destruct.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_base.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_base_damage.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_base_destruct.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_board.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_board_damage.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_board_destruct.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_base_VP.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_base_damage.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_base_destruct.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_board_VP.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_board_damage.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_int_board_destruct.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_tank.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_tank_damage.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_tank_destruct.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_adds.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_adds_damage.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_adds_destruct.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_glass.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_glass_damage.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_glass_damage.rvmat", "A3\data_f\Glass_veh.rvmat", "A3\data_f\Glass_veh_damage.rvmat", "A3\data_f\Glass_veh_damage.rvmat", "A3\soft_f_gamma\van_01\Data\van_01_glass_int.rvmat", "A3\data_f\Glass_veh_damage.rvmat", "A3\data_f\Glass_veh_damage.rvmat"};
            };
            numberPhysicalWheels = 4;
            class MFD
            {
                class AirplaneHUD
                {
                    topLeft = "HUD_top_left";
                    topRight = "HUD_top_right";
                    bottomLeft = "HUD_bottom_left";
                    borderLeft = 0;
                    borderRight = 0;
                    borderTop = 0;
                    borderBottom = 0;
                    color[] = {0.15, 0.15, 1, 1};
                    enableParallax = 0;
                    class Bones
                    {
                    };
                    class Draw
                    {
                        color[] = {"202/255", "133/255", "99/255"};
                        alpha = 1;
                        class ClockHour
                        {
                            type = "text";
                            source = "ClockHour";
                            sourceScale = 12;
                            sourceLength = 2;
                            sourceOffset = -0.5;
                            align = "right";
                            scale = 2;
                            pos[] = {{0.05, 0}, 1};
                            right[] = {{0.4, 0}, 1};
                            down[] = {{0.05, 1}, 1};
                        };
                        class ClockMinute
                        {
                            type = "text";
                            source = "ClockMinute";
                            sourceScale = 60;
                            sourceLength = 2;
                            sourceOffset = -0.5;
                            align = "right";
                            scale = 2;
                            pos[] = {{0.55, 0}, 1};
                            right[] = {{0.9, 0}, 1};
                            down[] = {{0.55, 1}, 1};
                        };
                    };
                };
            };
        };
        class Hatchback_01_base_F: Car_F
        {
            attenuationEffectType = "CarAttenuation";
            soundGetIn[] = {"A3\Sounds_F\vehicles2\soft\Hatchback_01\Hatchback_01_Exit", 0.446684, 1};
            soundGetOut[] = {"A3\Sounds_F\vehicles2\soft\Hatchback_01\Hatchback_01_Exit", 0.446684, 1, 40};
            soundDammage[] = {"", 0.562341, 1};
            soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\soft\Hatchback_01\Hatchback_01_Engine_Int_Start", 0.707946, 1};
            soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\soft\Hatchback_01\Hatchback_01_Engine_Int_Stop", 0.707946, 1};
            soundEngineOnExt[] = {"A3\Sounds_F\vehicles2\soft\Hatchback_01\Hatchback_01_Engine_Ext_Start", 1.99526, 1, 50};
            soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\soft\Hatchback_01\Hatchback_01_Engine_Ext_Stop", 1.99526, 1, 50};
            buildCrash0[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01", 1.99526, 1, 75};
            buildCrash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02", 1.99526, 1, 75};
            buildCrash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03", 1.99526, 1, 75};
            buildCrash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04", 1.99526, 1, 75};
            buildCrash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05", 1.99526, 1, 75};
            buildCrash5[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06", 1.99526, 1, 75};
            buildCrash6[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07", 1.99526, 1, 75};
            buildCrash7[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08", 1.99526, 1, 75};
            soundBuildingCrash[] = {"buildCrash0", 0.125, "buildCrash1", 0.125, "buildCrash2", 0.125, "buildCrash3", 0.125, "buildCrash4", 0.125, "buildCrash5", 0.125, "buildCrash6", 0.125, "buildCrash7", 0.125};
            WoodCrash0[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01", 1.99526, 1, 75};
            WoodCrash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02", 1.99526, 1, 75};
            WoodCrash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03", 1.99526, 1, 75};
            WoodCrash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04", 1.99526, 1, 75};
            WoodCrash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05", 1.99526, 1, 75};
            WoodCrash5[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06", 1.99526, 1, 75};
            WoodCrash6[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07", 1.99526, 1, 75};
            WoodCrash7[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08", 1.99526, 1, 75};
            soundWoodCrash[] = {"woodCrash0", 0.125, "woodCrash1", 0.125, "woodCrash2", 0.125, "woodCrash3", 0.125, "woodCrash4", 0.125, "woodCrash5", 0.125, "woodCrash6", 0.125, "woodCrash7", 0.125};
            armorCrash0[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01", 1.99526, 1, 75};
            armorCrash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02", 1.99526, 1, 75};
            armorCrash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03", 1.99526, 1, 75};
            armorCrash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04", 1.99526, 1, 75};
            armorCrash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05", 1.99526, 1, 75};
            armorCrash5[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06", 1.99526, 1, 75};
            armorCrash6[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07", 1.99526, 1, 75};
            armorCrash7[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08", 1.99526, 1, 75};
            soundArmorCrash[] = {"ArmorCrash0", 0.125, "ArmorCrash1", 0.125, "ArmorCrash2", 0.125, "ArmorCrash3", 0.125, "ArmorCrash4", 0.125, "ArmorCrash5", 0.125, "ArmorCrash6", 0.125, "ArmorCrash7", 0.125};
            Crash0[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01", 1.99526, 1, 75};
            Crash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02", 1.99526, 1, 75};
            Crash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03", 1.99526, 1, 75};
            Crash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04", 1.99526, 1, 75};
            Crash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05", 1.99526, 1, 75};
            Crash5[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06", 1.99526, 1, 75};
            Crash6[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07", 1.99526, 1, 75};
            Crash7[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08", 1.99526, 1, 75};
            soundCrashes[] = {"Crash0", 0.125, "Crash1", 0.125, "Crash2", 0.125, "Crash3", 0.125, "Crash4", 0.125, "Crash5", 0.125, "Crash6", 0.125, "Crash7", 0.125};
            BushCrash1[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01", 0.630957, 1, 50};
            BushCrash2[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02", 0.630957, 1, 50};
            BushCrash3[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03", 0.630957, 1, 50};
            BushCrash4[] = {"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03", 0.630957, 0.8, 50};
            soundBushCrash[] = {"BushCrash1", 0.25, "BushCrash2", 0.25, "BushCrash3", 0.25, "BushCrash4", 0.25};
            class Sounds
            {
                soundSetsInt[] = {"Hatchback_01_Engine_RPM0_INT_SoundSet", "Hatchback_01_Engine_RPM1_INT_SoundSet", "Hatchback_01_Engine_RPM2_INT_SoundSet", "Hatchback_01_Engine_RPM3_INT_SoundSet", "Hatchback_01_Engine_RPM4_INT_SoundSet", "Hatchback_01_Rattling_INT_SoundSet", "Hatchback_01_Stress_INT_SoundSet", "Hatchback_01_Rain_INT_SoundSet", "Hatchback_01_Tires_Rock_Fast_INT_SoundSet", "Hatchback_01_Tires_Grass_Fast_INT_SoundSet", "Hatchback_01_Tires_Sand_Fast_INT_SoundSet", "Hatchback_01_Tires_Gravel_Fast_INT_SoundSet", "Hatchback_01_Tires_Mud_Fast_INT_SoundSet", "Hatchback_01_Tires_Asphalt_Fast_INT_SoundSet", "Hatchback_01_Tires_Water_Fast_INT_SoundSet", "Hatchback_01_Tires_Rock_Slow_INT_SoundSet", "Hatchback_01_Tires_Grass_Slow_INT_SoundSet", "Hatchback_01_Tires_Sand_Slow_INT_SoundSet", "Hatchback_01_Tires_Gravel_Slow_INT_SoundSet", "Hatchback_01_Tires_Mud_Slow_INT_SoundSet", "Hatchback_01_Tires_Asphalt_Slow_INT_SoundSet", "Hatchback_01_Tires_Water_Slow_INT_SoundSet", "Hatchback_01_Tires_Turn_Hard_INT_SoundSet", "Hatchback_01_Tires_Turn_Soft_INT_SoundSet", "Hatchback_01_Tires_Brake_Hard_INT_SoundSet", "Hatchback_01_Tires_Brake_Soft_INT_SoundSet"};
                soundSetsExt[] = {"Hatchback_01_Engine_RPM0_EXT_SoundSet", "Hatchback_01_Engine_RPM1_EXT_SoundSet", "Hatchback_01_Engine_RPM2_EXT_SoundSet", "Hatchback_01_Engine_RPM3_EXT_SoundSet", "Hatchback_01_Engine_RPM4_EXT_SoundSet", "Hatchback_01_Rain_EXT_SoundSet", "Hatchback_01_Tires_Rock_Fast_EXT_SoundSet", "Hatchback_01_Tires_Grass_Fast_EXT_SoundSet", "Hatchback_01_Tires_Sand_Fast_EXT_SoundSet", "Hatchback_01_Tires_Gravel_Fast_EXT_SoundSet", "Hatchback_01_Tires_Mud_Fast_EXT_SoundSet", "Hatchback_01_Tires_Asphalt_Fast_EXT_SoundSet", "Hatchback_01_Tires_Water_Fast_EXT_SoundSet", "Hatchback_01_Tires_Rock_Slow_EXT_SoundSet", "Hatchback_01_Tires_Grass_Slow_EXT_SoundSet", "Hatchback_01_Tires_Sand_Slow_EXT_SoundSet", "Hatchback_01_Tires_Gravel_Slow_EXT_SoundSet", "Hatchback_01_Tires_Mud_Slow_EXT_SoundSet", "Hatchback_01_Tires_Asphalt_Slow_EXT_SoundSet", "Hatchback_01_Tires_Water_Slow_EXT_SoundSet", "Hatchback_01_Tires_Turn_Hard_EXT_SoundSet", "Hatchback_01_Tires_Turn_Soft_EXT_SoundSet", "Hatchback_01_Tires_Brake_Hard_EXT_SoundSet", "Hatchback_01_Tires_Brake_Soft_EXT_SoundSet"};
            };
            author = "Bohemia Interactive";
            mapSize = 5.33;
            _generalMacro = "Hatchback_01_base_F";
            model = "\A3\soft_f_gamma\Hatchback_01\Hatchback_01_F";
            picture = "\A3\soft_f_gamma\Hatchback_01\Data\UI\car_CA.paa";
            editorSubcategory = "EdSubcat_Cars";
            Icon = "\A3\soft_f_gamma\Hatchback_01\Data\UI\map_car_CA.paa";
            memoryPointTaskMarker = "TaskMarker_1_pos";
            slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
            unitInfoType = "RscUnitInfoNoWeapon";
            displayName = "Hatchback";
            class Library
            {
                libTextDesc = "A four-seat hatchback car mass-produced in the Far East to satisfy increasing demand for family cars. Economical operation, enhanced safety and a roomy trunk made these cars widely popular in the whole of Europe. Also comes in a sporty version.";
            };
            htMin = 600;
            htMax = 1800;
            afMax = 100;
            mfMax = 20;
            mFact = 0;
            tBody = 0;
            hiddenSelections[] = {"camo1"};
            acceleration = 15;
            maxFordingDepth = -0.35;
            class PlayerSteeringCoefficients
            {
                turnIncreaseConst = 1;
                turnIncreaseLinear = 3;
                turnIncreaseTime = 0;
                turnDecreaseConst = 2;
                turnDecreaseLinear = 8;
                turnDecreaseTime = 0;
                maxTurnHundred = 1;
            };
            class Components: Components
            {
                class AICarSteeringComponent: AICarSteeringComponent
                {
                    steeringPIDWeights[] = {8.5, 0.003, 0.4};
                    maxWheelAngleDiff = 0.1;
                    forwardAngleCoef = 4;
                };
            };
            fireResistance = 5;
            armor = 30;
            armorLights = 0.01;
            cost = 50000;
            transportMaxBackpacks = 0;
            transportSoldier = 3;
            class TransportItems
            {
                class _xx_FirstAidKit
                {
                    name = "FirstAidKit";
                    count = 4;
                };
            };
            class Turrets
            {
            };
            class HitPoints: HitPoints
            {
                class HitLFWheel: HitLFWheel
                {
                    radius = 0.25;
                    visual = "wheel_1_1_damage";
                    armorComponent = "wheel_1_1_hide";
                    armor = -80;
                    minimalHit = 0;
                    explosionShielding = 4;
                    passThrough = 0;
                };
                class HitLF2Wheel: HitLF2Wheel
                {
                    radius = 0.25;
                    visual = "wheel_1_2_damage";
                    armorComponent = "wheel_1_2_hide";
                    armor = -80;
                    minimalHit = 0;
                    explosionShielding = 4;
                    passThrough = 0;
                };
                class HitRFWheel: HitRFWheel
                {
                    radius = 0.25;
                    visual = "wheel_2_1_damage";
                    armorComponent = "wheel_2_1_hide";
                    armor = -80;
                    minimalHit = 0;
                    explosionShielding = 4;
                    passThrough = 0;
                };
                class HitRF2Wheel: HitRF2Wheel
                {
                    radius = 0.25;
                    visual = "wheel_2_2_damage";
                    armorComponent = "wheel_2_2_hide";
                    armor = -80;
                    minimalHit = 0;
                    explosionShielding = 4;
                    passThrough = 0;
                };
                class HitFuel: HitFuel
                {
                    name = "fuel";
                };
                class HitEngine: HitEngine
                {
                    name = "engine";
                };
                class HitBody: HitBody
                {
                    visual = "camo1";
                    passThrough = 0.6;
                };
                class HitGlass1: HitGlass1
                {
                    armor = 0.25;
                };
                class HitGlass2: HitGlass2
                {
                    armor = 0.25;
                };
                class HitGlass3: HitGlass3
                {
                    armor = 0.25;
                };
                class HitGlass4: HitGlass4
                {
                    armor = 0.25;
                };
            };
            wheelDamageThreshold = 0.025;
            wheelDamageRadiusCoef = 0.9;
            wheelDestroyRadiusCoef = 0.6;
            driverAction = "driver_offroad01";
            cargoAction[] = {"passenger_low01", "passenger_generic01_leanleft", "passenger_generic01_foldhands"};
            getInAction = "GetInLow";
            getOutAction = "GetOutLow";
            cargoGetInAction[] = {"GetInLow"};
            cargoGetOutAction[] = {"GetOutLow"};
            extCameraPosition[] = {0, 2, -7.8};
            camShakeCoef = 0.8;
            class RenderTargets
            {
                class LeftMirror
                {
                    renderTarget = "rendertarget0";
                    class CameraView1
                    {
                        pointPosition = "PIP0_pos";
                        pointDirection = "PIP0_dir";
                        renderQuality = 2;
                        renderVisionMode = 0;
                        fov = 0.7;
                    };
                };
                class RearCam
                {
                    renderTarget = "rendertarget1";
                    class CameraView1
                    {
                        pointPosition = "PIP1_pos";
                        pointDirection = "PIP1_dir";
                        renderQuality = 2;
                        renderVisionMode = 0;
                        fov = 0.7;
                    };
                };
                class FrontCam
                {
                    renderTarget = "rendertarget2";
                    class CameraView1
                    {
                        pointPosition = "PIP2_pos";
                        pointDirection = "PIP2_dir";
                        renderQuality = 2;
                        renderVisionMode = 0;
                        fov = 0.7;
                    };
                };
            };
            simulation = "CarX";
            fuelCapacity = 16;
            brakeIdleSpeed = 1.94444;
            thrustDelay = 0.5;
            turnCoef = 2.6;
            terrainCoef = 4.5;
            wheelCircumference = 2.233;
            maxSpeed = 190;
            normalSpeedForwardCoef = 0.473684;
            slowSpeedForwardCoef = 0.263158;
            accelAidForceCoef = 2;
            accelAidForceYOffset = -1;
            accelAidForceSpd = 2.2;
            enginePower = 103;
            maxOmega = 733.038;
            minOmega = 83.7758;
            idleRpm = 800;
            redRpm = 7000;
            peakTorque = 174;
            torqueCurve[] = {{0.114286, 0.804598}, {0.142857, 0.827586}, {0.314286, 0.948276}, {0.442857, 0.971264}, {0.614286, 1}, {0.771429, 0.982759}, {0.857143, 0.965517}, {1, 0.862069}};
            engineMOI = 0.6;
            dampingRateFullThrottle = 0.1;
            dampingRateZeroThrottleClutchEngaged = 0.16;
            dampingRateZeroThrottleClutchDisengaged = 0.08;
            clutchStrength = 9;
            latency = 1;
            switchTime = 0.5;
            differentialType = "front_open";
            changeGearType = "rpmratio";
            changeGearOmegaRatios[] = {1, 0.142857, 0.117143, 0.142857, 0.714286, 0.121429, 0.714286, 0.357143, 0.671429, 0.357143, 0.642857, 0.371429, 0.642857, 0.4, 1, 0.428571};
            class complexGearbox
            {
                GearboxRatios[] = {"R1", -3.2, "N", 0, "D1", 3.6, "D2", 2.2, "D3", 1.35, "D4", 1.05, "D5", 0.85, "D6", 0.75};
                TransmissionRatios[] = {"High", 6};
                gearBoxMode = "full-auto";
                moveOffGear = 1;
                driveString = "D";
                neutralString = "N";
                reverseString = "R";
            };
            dampersBumpCoef = 3;
            antiRollbarForceCoef = 3;
            antiRollbarForceLimit = 2;
            antiRollbarSpeedMin = 0;
            antiRollbarSpeedMax = 100;
            class Wheels
            {
                class LF
                {
                    side = "left";
                    suspTravelDirection[] = {-0.125, -1, 0};
                    boneName = "wheel_1_1_damper";
                    center = "wheel_1_1_axis";
                    boundary = "wheel_1_1_bound";
                    suspForceAppPointOffset = "wheel_1_1_axis";
                    tireForceAppPointOffset = "wheel_1_1_axis";
                    steering = 1;
                    width = 0.2;
                    mass = 20;
                    MOI = 1.13677;
                    dampingRate = 0.2;
                    dampingRateDamaged = 1;
                    dampingRateDestroyed = 1000;
                    maxDroop = 0.0915;
                    maxCompression = 0.0915;
                    sprungMass = 340;
                    springStrength = 31500;
                    springDamperRate = 5500;
                    maxBrakeTorque = 2700;
                    maxHandBrakeTorque = 0;
                    latStiffX = 2;
                    latStiffY = 28.6479;
                    longitudinalStiffnessPerUnitGravity = 5000;
                    frictionVsSlipGraph[] = {{0, 0.85}, {0.1, 1.4}, {0.6, 0.9}};
                };
                class LR: LF
                {
                    boneName = "wheel_1_2_damper";
                    center = "wheel_1_2_axis";
                    boundary = "wheel_1_2_bound";
                    suspForceAppPointOffset = "wheel_1_2_axis";
                    tireForceAppPointOffset = "wheel_1_2_axis";
                    steering = 0;
                    sprungMass = 245;
                    maxBrakeTorque = 2000;
                    maxHandBrakeTorque = 2000;
                    latStiffY = 25.7831;
                    frictionVsSlipGraph[] = {{0, 0.75}, {0.12, 1.2}, {0.6, 0.9}};
                };
                class RF: LF
                {
                    side = "right";
                    suspTravelDirection[] = {0.125, -1, 0};
                    boneName = "wheel_2_1_damper";
                    center = "wheel_2_1_axis";
                    boundary = "wheel_2_1_bound";
                    suspForceAppPointOffset = "wheel_2_1_axis";
                    tireForceAppPointOffset = "wheel_2_1_axis";
                    sprungMass = 340;
                };
                class RR: RF
                {
                    boneName = "wheel_2_2_damper";
                    center = "wheel_2_2_axis";
                    boundary = "wheel_2_2_bound";
                    suspForceAppPointOffset = "wheel_2_2_axis";
                    tireForceAppPointOffset = "wheel_2_2_axis";
                    steering = 0;
                    sprungMass = 245;
                    maxBrakeTorque = 3000;
                    maxHandBrakeTorque = 2000;
                    latStiffY = 25.7831;
                    frictionVsSlipGraph[] = {{0, 0.75}, {0.12, 1.2}, {0.6, 0.9}};
                };
            };
            class TextureSources
            {
                class Beige
                {
                    displayName = "Beige";
                    author = "Bohemia Interactive";
                    textures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};
                    factions[] = {"CIV_F"};
                };
                class Green
                {
                    displayName = "Green";
                    author = "Bohemia Interactive";
                    textures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};
                    factions[] = {"CIV_F"};
                };
                class Blue
                {
                    displayName = "Blue";
                    author = "Bohemia Interactive";
                    textures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};
                    factions[] = {"CIV_F"};
                };
                class Bluecustom
                {
                    displayName = "Blue Custom";
                    author = "Bohemia Interactive";
                    textures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};
                    factions[] = {"CIV_F"};
                };
                class Beigecustom
                {
                    displayName = "Beige Custom";
                    author = "Bohemia Interactive";
                    textures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};
                    factions[] = {"CIV_F"};
                };
                class Yellow
                {
                    displayName = "Yellow";
                    author = "Bohemia Interactive";
                    textures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};
                    factions[] = {"CIV_F"};
                };
                class Grey
                {
                    displayName = "Grey";
                    author = "Bohemia Interactive";
                    textures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};
                    factions[] = {"CIV_F"};
                };
                class Black
                {
                    displayName = "Black";
                    author = "Bohemia Interactive";
                    textures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};
                    factions[] = {"CIV_F"};
                };
                class Dark
                {
                    displayName = "Dark";
                    author = "Bohemia Interactive";
                    textures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};
                    factions[] = {"CIV_F"};
                };
            };
            animationList[] = {};
            textureList[] = {"Beige", 1, "Green", 1, "Blue", 1, "Bluecustom", 1, "Beigecustom", 1, "Yellow", 1, "Grey", 1, "Black", 1, "Dark", 1};
            class MFD
            {
                class Dashboard
                {
                    topLeft = "MFD_1_TL";
                    topRight = "MFD_1_TR";
                    bottomLeft = "MFD_1_BL";
                    borderLeft = 0;
                    borderRight = 0;
                    borderTop = 0;
                    borderBottom = 0;
                    color[] = {0.15, 0.15, 1, 1};
                    enableParallax = 0;
                    class Bones
                    {
                    };
                    class Draw
                    {
                        color[] = {0.05, 1, 0.05};
                        alpha = 1;
                        condition = "on";
                        class SpeedStatic
                        {
                            type = "text";
                            source = "static";
                            text = "KM/H";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.74, 0.59}, 1};
                            right[] = {{0.8, 0.59}, 1};
                            down[] = {{0.74, 0.65}, 1};
                        };
                        class Speed
                        {
                            type = "text";
                            source = "speed";
                            sourceScale = 3.6;
                            sourceLength = 1;
                            align = "left";
                            scale = 2;
                            pos[] = {{0.71, 0.46}, 1};
                            right[] = {{0.95, 0.46}, 1};
                            down[] = {{0.71, 0.7}, 1};
                        };
                    };
                };
            };
            class Damage
            {
                tex[] = {};
                mat[] = {"A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_destruct.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_mlod.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_destruct.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_intbase.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_intbase_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_intbase_destruct.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_intbase_mlod.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_intbase_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_intbase_destruct.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_intbase_lod1.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_intbase_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_intbase_destruct.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_INTboard.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_INTboard_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_INTboard_destruct.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_INTboard_LOD1.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_INTboard_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_INTboard_destruct.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_INTboard_mlod.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_INTboard_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_INTboard_destruct.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_wheel_rim.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_destruct.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_wheel_rubber.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_destruct.rvmat", "A3\data_f\glass_veh_int.rvmat", "A3\data_f\Glass_veh_damage.rvmat", "A3\data_f\Glass_veh_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_glass_window_mlod.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_glass_window_damage.rvmat", "A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_glass_window_damage.rvmat", "A3\data_f\glass_veh.rvmat", "A3\data_f\Glass_veh_damage.rvmat", "A3\data_f\Glass_veh_damage.rvmat"};
            };
            class Exhausts
            {
                class Exhaust1
                {
                    position = "exhaust";
                    direction = "exhaust_dir";
                    effect = "ExhaustsEffect";
                };
                class Exhaust2
                {
                    position = "exhaust2_pos";
                    direction = "exhaust2_dir";
                    effect = "ExhaustsEffect";
                };
            };
            class Reflectors
            {
                class LightCarHeadL01
                {
                    color[] = {1.9, 1.8, 1.7};
                    ambient[] = {5, 5, 5};
                    position = "LightCarHeadL01";
                    direction = "LightCarHeadL01_end";
                    hitpoint = "Light_L";
                    selection = "Light_L";
                    size = 1;
                    innerAngle = 30;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 100;
                    useFlare = 1;
                    dayLight = 0;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.05;
                        hardLimitStart = 50;
                        hardLimitEnd = 80;
                    };
                };
                class LightCarHeadL02: LightCarHeadL01
                {
                    position = "LightCarHeadL02";
                    direction = "LightCarHeadL02_end";
                    FlareSize = 0.5;
                };
                class LightCarHeadR01: LightCarHeadL01
                {
                    position = "LightCarHeadR01";
                    direction = "LightCarHeadR01_end";
                    hitpoint = "Light_R";
                    selection = "Light_R";
                };
                class LightCarHeadR02: LightCarHeadR01
                {
                    position = "LightCarHeadR02";
                    direction = "LightCarHeadR02_end";
                    FlareSize = 0.5;
                };
            };
            aggregateReflectors[] = {{"LightCarHeadL01", "LightCarHeadL02"}, {"LightCarHeadR01", "LightCarHeadR02"}};
        };