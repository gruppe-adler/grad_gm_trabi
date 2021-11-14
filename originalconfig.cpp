class gm_p601_base: gm_wheeled_car_base
        {
            displayName = "P601";
            displayNameShort = "Car";
            gm_TacticalNumbersDefaultNumber = "";
            model = "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_p601";
            picture = "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\ui\picture_gm_p601_ca";
            maxFordingDepth = -0.419651;
            cost = 1000;
            threat[] = {0, 0, 0};
            extCameraPosition[] = {0, 2, -6};
            icon = "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\ui\map_gm_p601_ca";
            nameSound = "gm_vehname_trabant_s";
            class SpeechVariants
            {
                class Default
                {
                    speechPlural[] = {"gm_vehname_trabant_s"};
                    speechSingular[] = {"gm_vehname_trabant_s"};
                };
            };
            headAimDown = 10;
            driverAction = "gm_p601_driver_01";
            driverInAction = "gm_p601_driver_01";
            gm_VehicleStartupAction[] = {"gm_startEngine", 0.8};
            cargoAction[] = {"gm_p601_cargo_02", "gm_p601_cargo_03", "gm_p601_cargo_04"};
            hideWeaponsCargo = 1;
            hideWeaponsDriver = 1;
            getInAction = "GetInLow";
            getOutAction = "GetOutLow";
            cargoGetInAction[] = {"GetInLow"};
            cargoGetOutAction[] = {"GetOutLow"};
            driverDoor = "door_1_1_source";
            cargoDoors[] = {"door_1_2_source", "door_1_2_source", "door_1_1_source", "door_2_1_source"};
            memoryPointsGetInDriver = "door_1_1_GetIn_pos";
            memoryPointsGetInDriverDir = "door_1_1_GetIn_dir";
            memoryPointsGetInCargo[] = {"door_1_2_GetIn_pos", "door_1_1_GetIn_pos", "door_1_1_GetIn_pos", "door_2_1_GetIn_pos"};
            memoryPointsGetInCargoDir[] = {"door_1_2_GetIn_dir", "door_1_1_GetIn_dir", "door_1_1_GetIn_dir", "door_2_1_GetIn_dir"};
            gm_hasOdoMeter = 1;
            driverCompartments = "Compartment1";
            transportSoldier = 4;
            cargoProxyIndexes[] = {1, 2, 3, 4};
            hideProxyInCombat = 0;
            canHideDriver = -1;
            forceHideDriver = 0;
            attenuationEffectType = "CarAttenuation";
            soundGetIn[] = {"", 0.562341, 1};
            soundGetOut[] = {"", 0.562341, 1, 20};
            soundEngineOnInt[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_engineon_int", 0.630957, 1, 200};
            soundEngineOnExt[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_engineon_ext", 0.630957, 1, 200};
            soundEngineOffInt[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_enginestop_int", 0.630957, 1, 200};
            soundEngineOffExt[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_enginestop_ext", 0.630957, 1, 200};
            class Sounds: Sounds
            {
                class siren_ext
                {
                    sound[] = {"gm\gm_sounds\data\gm_gc_police_siren_01_ext", 1, 1, 800};
                    frequency = "1";
                    volume = "0.7 * CustomSoundController1";
                };
                class engine_01_ext
                {
                    sound[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_engine_01_ext", 0.562341, 1, 200};
                    frequency = "2 * (randomizer*0.05+0.45)+(0.5*(rpm/3000))";
                    volume = "engineOn*camPos*(((rpm/3000) factor[(10/  3000),(50/  3000)]) *   ((rpm/3000) factor[(300/    3000),(400/ 3000)]))";
                };
                class engine_03_ext
                {
                    sound[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_engine_03_ext", 0.630957, 1, 280};
                    frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/3000))";
                    volume = "engineOn*camPos*(((rpm/3000) factor[(420/ 3000),(320/ 3000)]) *   ((rpm/3000) factor[(500/    3000),(600/ 3000)]))";
                };
                class engine_07_ext
                {
                    sound[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_engine_07_ext", 0.794328, 0.8, 400};
                    frequency = "(randomizer*0.05+0.15)+(0.85*(rpm/3000))";
                    volume = "engineOn*camPos*((rpm/3000) factor[(550/  3000),0.35])";
                };
                class engine_01_int
                {
                    sound[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_engine_01_int", 0.562341, 1, 200};
                    frequency = "2 * (randomizer*0.05+0.45)+(0.5*(rpm/3000))";
                    volume = "engineOn*(1-camPos)*(((rpm/3000) factor[(10/  3000),(50/  3000)]) *   ((rpm/3000) factor[(300/    3000),(400/ 3000)]))";
                };
                class engine_03_int
                {
                    sound[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_engine_03_int", 0.630957, 1, 280};
                    frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/3000))";
                    volume = "engineOn*(((rpm/3000) factor[(420/    3000),(320/ 3000)]) *   ((rpm/3000) factor[(500/    3000),(600/ 3000)]))";
                };
                class engine_07_int
                {
                    sound[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\sounds\gm_p601_engine_07_int", 0.794328, 0.8, 400};
                    frequency = "(randomizer*0.05+0.15)+(0.85*(rpm/3000))";
                    volume = "engineOn*(1-camPos)*((rpm/3000) factor[(550/  3000),0.35])";
                };
            };
            fuelCapacity = 12;
            waterLeakiness = 2.5;
            normalSpeedForwardCoef = 0.75;
            turnCoef = 3;
            simulation = "carx";
            canFloat = 0;
            waterAngularDampingCoef = 10;
            waterPPInVehicle = 0;
            waterResistanceCoef = 0.5;
            engineShiftY = 0.5;
            enginePower = 25; // 19.2;
            torqueCurve[] = {{"(0)", 0}, {"1/7", 0.5}, {"2/7", 0.8}, {"3/7", 0.95}, {"4/7", 1}, {"5/7", 0.98}, {"6/7", 0.7}, {1, 0}};
            maxSpeed = 100;
            maxOmega = 439.6;
            redRpm = 4200;
            idleRpm = 600;
            peakTorque = 155.979;
            wheelCircumference = 1.85888;
            class complexGearbox
            {
                GearboxRatios[] = {"R1", -7.381, "N", 0, "D1", 3.909, "D2", 2.277, "D3", 1.458, "D4", 1.086};
                TransmissionRatios[] = {"High", 5.286};
                gearBoxMode = "auto";
                moveOffGear = 1;
                driveString = "D";
                neutralString = "N";
                reverseString = "R";
                gearUpMaxCoef = 0.95;
                gearDownMaxCoef = 0.85;
                gearUpMinCoef = 0.65;
                gearDownMinCoef = 0.55;
                transmissionDelay = 2;
            };
            thrustDelay = 0.5;
            brakeIdleSpeed = 1.78;
            differentialType = "all_limited";
            frontRearSplit = 0.5;
            frontBias = 1.3;
            rearBias = 1.3;
            centreBias = 1.3;
            clutchStrength = 55;
            dampingRateFullThrottle = 0.08;
            dampingRateZeroThrottleClutchEngaged = 0.35;
            dampingRateZeroThrottleClutchDisengaged = 0.35;
            switchTime = 0.51;
            latency = 1.5;
            numberPhysicalWheels = 4;
            terrainCoef = 3;
            dampersBumpCoef = 6;
            antiRollbarForceCoef = 0;
            antiRollbarForceLimit = 5;
            antiRollbarSpeedMin = 0;
            antiRollbarSpeedMax = 20;
            accelAidForceCoef = 2;
            accelAidForceYOffset = -2;
            accelAidForceSpd = 24;
            class Wheels
            {
                class wheel_1_1: gm_wheel_base
                {
                    boneName = "wheel_1_1";
                    center = "wheel_1_1_axis";
                    boundary = "wheel_1_1_bound";
                    suspForceAppPointOffset = "wheel_1_1_axis";
                    tireForceAppPointOffset = "wheel_1_1_axis";
                    side = "left";
                    steering = 1;
                    sprungMass = 140;
                    springStrength = 11340;
                    springDamperRate = 2268;
                    MOI = 0.43808;
                    mass = 10;
                    width = "0.2";
                    maxBrakeTorque = 200;
                    maxHandBrakeTorque = 0;
                    maxCompression = 0.15;
                    mMaxDroop = 0.25;
                    longitudinalStiffnessPerUnitGravity = 10000;
                };
                class wheel_1_2: wheel_1_1
                {
                    boneName = "wheel_1_2";
                    center = "wheel_1_2_axis";
                    boundary = "wheel_1_2_bound";
                    suspForceAppPointOffset = "wheel_1_2_axis";
                    tireForceAppPointOffset = "wheel_1_2_axis";
                    side = "right";
                    steering = 1;
                };
                class wheel_2_1: wheel_1_1
                {
                    boneName = "wheel_2_1";
                    center = "wheel_2_1_axis";
                    boundary = "wheel_2_1_bound";
                    suspForceAppPointOffset = "wheel_2_1_axis";
                    tireForceAppPointOffset = "wheel_2_1_axis";
                    side = "left";
                    steering = 0;
                    maxHandBrakeTorque = 27500;
                };
                class wheel_2_2: wheel_1_2
                {
                    boneName = "wheel_2_2";
                    center = "wheel_2_2_axis";
                    boundary = "wheel_2_2_bound";
                    suspForceAppPointOffset = "wheel_2_2_axis";
                    tireForceAppPointOffset = "wheel_2_2_axis";
                    side = "right";
                    steering = 0;
                    maxHandBrakeTorque = 27500;
                };
            };
            class AnimationSources: AnimationSources
            {
                class door_1_1_source: Door_1_1_source
                {
                    animPeriod = 0.66666;
                };
                class door_1_2_source: Door_1_2_source
                {
                    animPeriod = 0.66666;
                };
                class door_2_1_source: Door_2_1_source
                {
                    animPeriod = 0.66666;
                };
                class HitGlass_0_1_source
                {
                    source = "Hit";
                    hitpoint = "HitGlass_0_1";
                    raw = 1;
                };
                class HitGlass_0_2_source: HitGlass_0_1_source
                {
                    hitpoint = "HitGlass_0_2";
                };
                class HitGlass_1_1_source: HitGlass_0_1_source
                {
                    hitpoint = "HitGlass_1_1";
                };
                class HitGlass_1_2_source: HitGlass_1_1_source
                {
                    hitpoint = "HitGlass_1_2";
                };
                class HitGlass_2_1_source: HitGlass_0_1_source
                {
                    hitpoint = "HitGlass_2_1";
                };
                class HitGlass_2_2_source: HitGlass_2_1_source
                {
                    hitpoint = "HitGlass_2_2";
                };
            };
            class RenderTargets
            {
                class Mirror_1_1
                {
                    renderTarget = "rendertarget0";
                    class CameraView1
                    {
                        pointPosition = "Mirror_1_1_pos";
                        pointDirection = "Mirror_1_1_dir";
                        renderQuality = 2;
                        renderVisionMode = 4;
                        fov = 0.7;
                    };
                };
            };
            armor = 40;
            armorStructural = 6;
            armorLights = 0.1;
            crewExplosionProtection = 0.99;
            damageResistance = 0.00719;
            class Damage
            {
                tex[] = {};
                mat[] = {"gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_shiny.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_shiny_noti.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_glass_01_int.rvmat", "a3\data_f\glass_veh_damage2.rvmat", "a3\data_f\glass_veh_damage2.rvmat", "gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_glass_01_ext.rvmat", "a3\data_f\glass_veh_damage2.rvmat", "a3\data_f\glass_veh_damage2.rvmat"};
            };
            class Hitpoints: Hitpoints
            {
                class HitBody: HitBody
                {
                };
                class HitFuel: HitFuel
                {
                };
                class HitEngine: HitEngine
                {
                };
                class HitLFWheel: HitLFWheel
                {
                    armor = 0.5;
                    minimalHit = 0.02;
                    explosionShielding = 4;
                    radius = 0.33;
                };
                class HitRFWheel: HitRFWheel
                {
                    armor = 0.5;
                    minimalHit = 0.02;
                    explosionShielding = 4;
                    radius = 0.33;
                };
                class HitLF2Wheel: HitLF2Wheel
                {
                    armor = 0.5;
                    minimalHit = 0.02;
                    explosionShielding = 4;
                    radius = 0.33;
                };
                class HitRF2Wheel: HitRF2Wheel
                {
                    armor = 0.5;
                    minimalHit = 0.02;
                    explosionShielding = 4;
                    radius = 0.33;
                };
                class HitLMWheel: HitLMWheel
                {
                    armor = 0.5;
                    minimalHit = 0.02;
                    explosionShielding = 4;
                    radius = 0.33;
                };
                class HitRMWheel: HitRMWheel
                {
                    armor = 0.5;
                    minimalHit = 0.02;
                    explosionShielding = 4;
                    radius = 0.33;
                };
                class HitGlass_0_1
                {
                    name = "hitPoint_glass_0_1";
                    visual = "glass_0_1";
                    convexComponent = "fireGeo_glass_0_1";
                    armor = 0.1;
                    radius = 0.25;
                    material = -1;
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass_0_2
                {
                    name = "hitPoint_glass_0_2";
                    visual = "glass_0_2";
                    convexComponent = "fireGeo_glass_0_2";
                    armor = 0.1;
                    radius = 0.25;
                    material = -1;
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass_1_1
                {
                    name = "hitPoint_glass_1_1";
                    visual = "glass_1_1";
                    convexComponent = "fireGeo_glass_1_1";
                    armor = 0.07;
                    radius = 0.25;
                    material = -1;
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass_1_2
                {
                    name = "hitPoint_glass_1_2";
                    visual = "glass_1_2";
                    convexComponent = "fireGeo_glass_1_2";
                    armor = 0.07;
                    radius = 0.25;
                    material = -1;
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass_2_1
                {
                    name = "hitPoint_glass_2_1";
                    visual = "glass_2_1";
                    convexComponent = "fireGeo_glass_2_1";
                    armor = 0.07;
                    radius = 0.25;
                    material = -1;
                    passThrough = 0;
                    explosionShielding = 2;
                };
                class HitGlass_2_2
                {
                    name = "hitPoint_glass_2_2";
                    visual = "glass_2_2";
                    convexComponent = "fireGeo_glass_2_2";
                    armor = 0.07;
                    radius = 0.25;
                    material = -1;
                    passThrough = 0;
                    explosionShielding = 2;
                };
            };
            class Attributes: Attributes
            {
                class gm_vehicleMarkings_LicensePlates_Plate_attribute: gm_vehicleMarkings_LicensePlates_Plate_attribute
                {
                };
                class gm_vehicleMarkings_LicensePlates_Numbers_attribute: gm_vehicleMarkings_LicensePlates_Numbers_attribute
                {
                };
                class gm_vehicleMarkings_tacticalNumber_Number_attribute: gm_vehicleMarkings_tacticalNumber_Number_attribute
                {
                };
                class gm_vehicleMarkings_tacticalNumber_Numberfont_attribute: gm_vehicleMarkings_tacticalNumber_Numberfont_attribute
                {
                };
                class gm_vehicleMarkings_Insignias_MissionSmall_attribute: gm_vehicleMarkings_Insignias_MissionSmall_attribute
                {
                };
                class gm_vehicleMarkings_Insignias_MissionLarge_attribute: gm_vehicleMarkings_Insignias_MissionLarge_attribute
                {
                };
                class gm_vehicleMarkings_Insignias_Recon_attribute: gm_vehicleMarkings_Insignias_Recon_attribute
                {
                };
                class gm_vehicleMarkings_Insignias_Unit_attribute: gm_vehicleMarkings_Insignias_Unit_attribute
                {
                };
                class gm_vehicleMarkings_Insignias_Company_attribute: gm_vehicleMarkings_Insignias_Company_attribute
                {
                };
                class gm_vehicleMarkings_Insignias_Formation_attribute: gm_vehicleMarkings_Insignias_Formation_attribute
                {
                };
                class gm_vehicleMarkings_Insignias_nation_attribute: gm_vehicleMarkings_Insignias_nation_attribute
                {
                };
            };
            class TextureSources
            {
                class gm_gc_wiesengruen_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Meadowgreen";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_wiesengruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_wiesengruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_wiesengruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_wiesengruen_co.paa"};
                };
                class gm_gc_alfarot_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Alfared";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alfarot_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alfarot_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alfarot_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alfarot_co.paa"};
                };
                class gm_gc_aquamarineblau_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Aquamarine";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_aquamarineblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_aquamarineblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_aquamarineblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_aquamarineblau_co.paa"};
                };
                class gm_gc_bahamagelb_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Bahamayellow";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_bahamagelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_bahamagelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_bahamagelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_bahamagelb_co.paa"};
                };
                class gm_gc_baligelb_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Baliyellow";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_baligelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_baligelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_baligelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_baligelb_co.paa"};
                };
                class gm_gc_champagnerbeige_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Champaignbeige";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_champagnerbeige_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_champagnerbeige_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_champagnerbeige_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_champagnerbeige_co.paa"};
                };
                class gm_gc_geranienrot_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Geraniumred";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_geranienrot_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_geranienrot_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_geranienrot_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_geranienrot_co.paa"};
                };
                class gm_gc_goldbeige_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Goldbeige";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_goldbeige_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_goldbeige_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_goldbeige_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_goldbeige_co.paa"};
                };
                class gm_gc_hanfbeige_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Hempbeige";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_hanfbeige_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_hanfbeige_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_hanfbeige_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_hanfbeige_co.paa"};
                };
                class gm_gc_kosmosblau_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Kosmosblue";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kosmosblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kosmosblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kosmosblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kosmosblau_co.paa"};
                };
                class gm_gc_kristallblau_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Crystalblue";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa"};
                };
                class gm_gc_monsumgelb_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Monsoonyellow";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_monsumgelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_monsumgelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_monsumgelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_monsumgelb_co.paa"};
                };
                class gm_gc_nilbraun_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Nilbrown";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_nilbraun_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_nilbraun_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_nilbraun_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_nilbraun_co.paa"};
                };
                class gm_gc_panamagruen_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Panamagreen";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_panamagruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_panamagruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_panamagruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_panamagruen_co.paa"};
                };
                class gm_gc_perlweiss_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Pearlwhite";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_perlweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_perlweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_perlweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_perlweiss_co.paa"};
                };
                class gm_gc_sommergelb_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Summeryellow";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_sommergelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_sommergelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_sommergelb_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_sommergelb_co.paa"};
                };
                class gm_gc_togaweiss_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Togawhite";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_togaweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_togaweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_togaweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_togaweiss_co.paa"};
                };
                class gm_gc_pastellweiss_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Pastelwhite";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa"};
                };
                class gm_gc_alaskagrau_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Alaskagrey";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alaskagrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alaskagrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alaskagrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alaskagrau_co.paa"};
                };
                class gm_gc_taigagruen_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Taigagreen";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_taigagruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_taigagruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_taigagruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_taigagruen_co.paa"};
                };
                class gm_gc_delphingrau_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Dolphingrey";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa"};
                };
                class gm_gc_neptunblau_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Neptunblue";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_neptunblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_neptunblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_neptunblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_neptunblau_co.paa"};
                };
                class gm_gc_persischorange_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Persianorange";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_persischorange_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_persischorange_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_persischorange_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_persischorange_co.paa"};
                };
                class gm_gc_cliffgruen_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Cliffgreen";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa"};
                };
                class gm_gc_biberbraun_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Beaverbraun";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_biberbraun_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_biberbraun_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_biberbraun_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_biberbraun_co.paa"};
                };
                class gm_gc_marmorweiss_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Marblewhite";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_marmorweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_marmorweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_marmorweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_marmorweiss_co.paa"};
                };
                class gm_gc_pastellbraun_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Pastelbrown";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellbraun_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellbraun_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellbraun_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellbraun_co.paa"};
                };
                class gm_gc_pastellgruen_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Pastelgreen";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellgruen_co.paa"};
                };
                class gm_gc_pastellblau_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Pastellblue";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellblau_co.paa"};
                };
                class gm_gc_silbergrau_civ: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Silvergrey";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_silbergrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_silbergrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_silbergrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_silbergrau_co.paa"};
                };
                class gm_gc_delphingrau__alfarot: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Dolphingrey-Alfared";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alfarot_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_alfarot_co.paa"};
                };
                class gm_gc_delphingrau__cliffgruen: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Dolphingrey-Cliffgreen";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa"};
                };
                class gm_gc_cliffgruen__delphingrau: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Cliffgreen-Dolphingrey";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa"};
                };
                class gm_gc_delphingrau__kristallblau: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Dolphingrey-Crystalblue";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa"};
                };
                class gm_gc_kristallblau__delphingrau: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Crystalblue-Dolphingrey";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa"};
                };
                class gm_gc_pastellweiss__cliffgruen: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Pastelwhite-Cliffgreen";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa"};
                };
                class gm_gc_cliffgruen__pastellweiss: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Cliffgreen-Pastelwhite";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_cliffgruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa"};
                };
                class gm_gc_pastellweiss__kristallblau: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Pastelwhite-Crystalblue";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa"};
                };
                class gm_gc_kristallblau__pastellweiss: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Crystalblue-Pastelwhite";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_pastellweiss_co.paa"};
                };
                class gm_gc_marmorweiss__kristallblau: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Marblewhite-Crystalblue";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_marmorweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_marmorweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa"};
                };
                class gm_gc_kristallblau__marmorweiss: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Crystalblue-Marblewhite";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_marmorweiss_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_kristallblau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_marmorweiss_co.paa"};
                };
                class gm_gc_delphingrau__panamagruen: gm_texturesource_base
                {
                    factions[] = {"gm_fc_gc_civ"};
                    displayname = "Dolphingrey-Panamagreen";
                    textures[] = {"\gm\gm_core\gm_core_wheels\105_58_R_13\data\gm_105_58_R_13_sachsenring_01_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_panamagruen_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_delphingrau_co.paa", "\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_panamagruen_co.paa"};
                };
            };
        };