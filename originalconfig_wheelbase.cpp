class gm_wheeled_base: Car_F
        {
            author = "Global Mobilization";
            crew = "gm_soldier_male_g36a2_wdl";
            side = 1;
            faction = "gm_fc_ge";
            Vehicleclass = "gm_vc_prototype";
            editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_APC_tracked_03_cannon_F.jpg";
            destrType = "DestructWreck";
            armorLights = 0.001;
            enableGPS = 0;
            enableRadio = 0;
            class Components: Components
            {
                class VehicleSystemsDisplayManagerComponentLeft: gm_VehicleSystemsDisplayManagerLeft_base
                {
                };
                class VehicleSystemsDisplayManagerComponentRight: gm_VehicleSystemsDisplayManagerRight_base
                {
                };
            };
            gm_VehicleStartupAction[] = {};
            memoryPointDriverOptics[] = {"Optic_Driver_pos", "Optic_Pilot_pos"};
            memoryPointsGetInCargo[] = {"Cargo_GetIn_pos"};
            memoryPointsGetInCoDriver = "CoDriver_GetIn_pos";
            memoryPointsGetInCommander = "CommanderTurret_GetIn_pos";
            memoryPointsGetInDriver = "Driver_GetIn_pos";
            memoryPointsGetInGunner = "MainTurret_GetIn_pos";
            memoryPointsGetInCargoDir[] = {"Cargo_GetIn_dir"};
            memoryPointsGetInCoDriverDir = "CoDriver_GetIn_dir";
            memoryPointsGetInCommanderDir = "CommanderTurret_GetIn_dir";
            memoryPointsGetInDriverDir = "Driver_GetIn_dir";
            memoryPointsGetInGunnerDir = "MainTurret_GetIn_dir";
            memoryPointsGetInDriverPrecise = "Driver_GetIn_precise";
            memoryPointGun = "gun_pos";
            memoryPointMissile[] = {"Missile_Dir", "Gun_Dir"};
            memoryPointMissileDir[] = {"Missile_Pos", "Gun_Pos"};
            memoryPointCargoLight = "LightCargo";
            memoryPointLDust = "Dust_2_1";
            memoryPointRDust = "Dust_2_2";
            dustFrontLeftPos = "Dust_2_1";
            dustFrontRightPos = "Dust_2_2";
            dustBackLeftPos = "Dust_1_1";
            dustBackRightPos = "Dust_1_2";
            memoryPointTrack1L = "Track_1_1_1";
            memoryPointTrack1R = "Track_1_1_2";
            memoryPointTrack2L = "Track_1_2_1";
            memoryPointTrack2R = "Track_1_2_2";
            memoryPointTrackFLL = "Track_1_1_1";
            memoryPointTrackFLR = "Track_1_1_2";
            memoryPointTrackFRL = "Track_1_2_1";
            memoryPointTrackFRR = "Track_1_2_2";
            memoryPointTrackBLL = "Track_2_1_1";
            memoryPointTrackBLR = "Track_2_1_1";
            memoryPointTrackBRL = "Track_2_2_1";
            memoryPointTrackBRR = "Track_2_2_2";
            engineEffectSpeed = 5;
            memoryPointsLeftEngineEffect = "EngineEffect_1_1";
            memoryPointsRightEngineEffect = "EngineEffect_1_2";
            memoryPointsLeftWaterEffect = "WaterEffect_1_1";
            memoryPointsRightWaterEffect = "WaterEffect_1_2";
            bounding = "bounding";
            memoryPointSupply = "supply_pos";
            memoryPointTaskMarker = "TaskMarker_pos";
            slingLoadCargoMemoryPoints[] = {"SlingLoadCargo_1_1", "SlingLoadCargo_1_2", "SlingLoadCargo_2_1", "SlingLoadCargo_2_2"};
            slingLoadMemoryPoint = "Slingload_pos";
            selectionBrakeLights = "LightBrake";
            selectionSideLights = "LightSide";
            selectionConvoyLight = "LightConvoy";
            selectionBackLights = "LightBack";
            selectionLeftOffset = "Track_1";
            selectionRightOffset = "Track_2";
            selectionDamage = "damage";
            selectionFireAnim = "muzzleflash";
            selectionClan = "clan";
            selectionDashboard = "lightDashboard";
            selectionShowDamage = "showDamage";
            viewDriverInExternal = 1;
            viewGunnerInExternal = 1;
            viewCargoInExternal = 1;
            ViewDriverShadow = 1;
            ViewDriverShadowAmb = 1;
            ViewDriverShadowDiff = 1;
            ViewCargoShadow = 1;
            ViewCargoShadowAmb = 1;
            ViewCargoShadowDiff = 1;
            hiddenSelections[] = {"texWheel_01", "tex_01", "tex_02", "tex_03", "tex_04", "tex_05", "tex_06", "tex_07", "tex_08", "tactSign_Kp", "tactSign_Icon", "tactSign_Btl1", "tactSign_Btl2", "tactSign_Btl3", "LicensePlate", "LicensePlate_00", "LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08", "LicensePlate_09", "Insignia_01", "Insignia_02", "Insignia_formation", "Insignia_unit", "Insignia_cool", "Insignia_recon", "Insignia_hazardSign", "Insignia_nation_01", "Insignia_nation_02", "nr_1", "nr_2", "nr_3", "nr_4", "SecondaryPlate", "nothing", "SecondaryPlate_01", "SecondaryPlate_02", "SecondaryPlate_03", "SecondaryPlate_04", "SecondaryPlate_05", "SecondaryPlate_06", "SecondaryPlate_07", "SecondaryPlate_08", "Insignia_recon_02", "LicensePlate_10", "LicensePlate_11", "LicensePlate_12", "LicensePlate_13", "LicensePlate_14", "LicensePlate_15", "LicensePlate_16", "LicensePlate_17", "LicensePlate_18", "LicensePlate_19", "Insignia_flag_01", "Insignia_nation_03"};
            gm_LicensePlate = "gm_ge_army_blk";
            gm_LicensePlateSelectionPlate = "LicensePlate";
            gm_LicensePlateDefaultDigits = "Y-######";
            gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
            gm_LicensePlateSelectionSecondaryPlate = "SecondaryPlate";
            gm_LicensePlateSelectionsSecondaryDigits[] = {"SecondaryPlate_01", "SecondaryPlate_02", "SecondaryPlate_03", "SecondaryPlate_04", "SecondaryPlate_05", "SecondaryPlate_06", "SecondaryPlate_07", "SecondaryPlate_08"};
            gm_TacticalSignsDefaultPreIcon = "";
            gm_TacticalSignsFontPreIcon = "gm_din_norm_gry";
            gm_TacticalSignsSelectionsPreIcon[] = {"tactSign_Kp"};
            gm_TacticalSignsDefaultIcon = "gm_tacticalSign_none";
            gm_TacticalSignsSelectionIcon = "tactSign_Icon";
            gm_TacticalSignsDefaultPostIcon = "";
            gm_TacticalSignsFontPostIcon = "gm_din_norm_gry";
            gm_TacticalSignsSelectionsPostIcon[] = {"tactSign_Btl1", "tactSign_Btl2", "tactSign_Btl3"};
            gm_TacticalNumbersDefaultNumber = "###";
            gm_TacticalNumbersSelectionsNumbers[] = {"nr_1", "nr_2", "nr_3"};
            gm_TacticalNumbersFontNumbers = "gm_din_norm_blk_gry";
            gm_TacticalNumbersIsLicensePlate = 0;
            gm_LicensePlateIsRegistration = 0;
            gm_InsigniasDefaultMissionSmall = "gm_insignia_none";
            gm_InsigniasSelectionMissionSmall = "Insignia_01";
            gm_InsigniasDefaultMissionLarge = "gm_insignia_none";
            gm_InsigniasSelectionMissionLarge = "Insignia_02";
            gm_InsigniasDefaultRecon = "gm_insignia_none";
            gm_InsigniasSelectionRecon = "Insignia_recon";
            gm_InsigniasDefaultUnit = "gm_insignia_none";
            gm_InsigniasSelectionUnit = "Insignia_unit";
            gm_InsigniasDefaultCompany = "gm_insignia_none";
            gm_InsigniasSelectionCompany = "Insignia_cool";
            gm_InsigniasDefaultFormation = "gm_insignia_none";
            gm_InsigniasSelectionFormation = "Insignia_formation";
            gm_InsigniasDefaultHazardSign = "gm_insignia_none";
            gm_InsigniasSelectionHazardSign = "Insignia_hazardSign";
            gm_InsigniasDefaultNation = "gm_insignia_none";
            gm_InsigniasSelectionNation = "Insignia_nation_01";
            gm_InsigniasSelectionsNation[] = {"Insignia_nation_01", "Insignia_nation_02", "Insignia_nation_03"};
            gm_InsigniasDefaultFlag = "gm_insignia_none";
            gm_InsigniasSelectionFlag = "Insignia_flag_01";
            class SimpleObject
            {
                eden = 1;
                animate[] = {{"wheel_1_1_damper", 0.5}, {"wheel_1_2_damper", 0.5}, {"wheel_2_1_damper", 0.5}, {"wheel_2_2_damper", 0.5}, {"wheel_3_1_damper", 0.5}, {"wheel_3_2_damper", 0.5}, {"wheel_4_1_damper", 0.5}, {"wheel_4_2_damper", 0.5}, {"wheel_5_1_damper", 0.5}, {"wheel_5_2_damper", 0.5}, {"wheel_6_1_damper", 0.5}, {"wheel_6_2_damper", 0.5}, {"wheel_7_1_damper", 0.5}, {"wheel_7_2_damper", 0.5}, {"wheel_8_1_damper", 0.5}, {"wheel_8_2_damper", 0.5}, {"MainTurret_muzzleflash_1_1_hide_anim", 0}, {"MainTurret_muzzleflash_1_2_hide_anim", 1}};
                hide[] = {"clan", "muzzleflash", "MainTurret_coax_muzzleflash", "MachineGunTurret_01_muzzleflash", "MachineGunTurret_02_muzzleflash", "LightMainTurret_searchLight", "SquadLeaderTurret_muzzleflash", "lightFront_1_1", "lightFront_1_2", "lightFront_2_1", "lightFront_2_2", "lightBack_1_1", "lightBack_1_2", "lightBack_2_1", "lightBack_2_2", "hitPoint_lightFront_1_1", "hitPoint_lightFront_1_2", "hitPoint_lightFront_2_1", "hitPoint_lightFront_2_2", "hitPoint_lightBack_1_1", "hitPoint_lightBack_1_2", "hitPoint_lightBack_2_1", "hitPoint_lightBack_2_2", "lightsearch_1_1", "tactSign_Kp", "tactSign_Icon", "tactSign_Btl1", "tactSign_Btl2", "tactSign_Btl3", "LicensePlate", "LicensePlate_00", "LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08", "LicensePlate_09", "Insignia_01", "Insignia_02", "Insignia_formation", "Insignia_unit", "Insignia_cool", "Insignia_recon", "Insignia_hazardSign", "Insignia_nation_01", "Insignia_nation_02", "nr_1", "nr_2", "nr_3", "nr_4", "SecondaryPlate", "nothing", "SecondaryPlate_01", "SecondaryPlate_02", "SecondaryPlate_03", "SecondaryPlate_04", "SecondaryPlate_05", "SecondaryPlate_06", "SecondaryPlate_07", "SecondaryPlate_08", "Insignia_recon_02", "LicensePlate_10", "LicensePlate_11", "LicensePlate_12", "LicensePlate_13", "LicensePlate_14", "LicensePlate_15", "LicensePlate_16", "LicensePlate_17", "LicensePlate_18", "LicensePlate_19", "Insignia_flag_01", "Insignia_nation_03", "MainTurret_muzzleflash_1_1_hide", "rotor_1_1_blur", "rotor_1_2_blur", "lightfront_1_1", "lightfront_1_2", "landinglight_1_1", "landinglight_1_2", "slingloadlight_1_1", "propBlur"};
                init = "_this call gm_core_vehicles_fnc_init;";
                verticalOffsetWorld = -0.1;
            };
            driverLeftHandAnimName = "drivewheel";
            driverRightHandAnimName = "drivewheel";
            driverRightLegAnimName = "pedal_speed";
            driverLeftLegAnimName = "pedal_clutch";
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
                class Mirror_1_2
                {
                    renderTarget = "rendertarget1";
                    class CameraView1
                    {
                        pointPosition = "Mirror_1_2_pos";
                        pointDirection = "Mirror_1_2_dir";
                        renderQuality = 2;
                        renderVisionMode = 4;
                        fov = 0.7;
                    };
                };
            };
            class Reflectors
            {
                class lightFront_1_1
                {
                    color[] = {2550, 2360, 1390};
                    ambient[] = {255, 236, 139};
                    position = "lightFront_1_1_pos";
                    direction = "lightFront_1_1_dir";
                    hitpoint = "hitPoint_lightFront_1_1";
                    selection = "lightFront_1_1";
                    size = 1;
                    innerAngle = 100;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 1;
                    useFlare = 0;
                    daylight = 1;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.25;
                        hardLimitStart = 60;
                        hardLimitEnd = 120;
                    };
                };
                class lightFront_1_1_flare: lightFront_1_1
                {
                    position = "lightFront_1_1_flare_pos";
                    useFlare = 1;
                    innerAngle = 80;
                    outerAngle = 110;
                };
                class lightFront_1_2
                {
                    color[] = {2550, 2360, 1390};
                    ambient[] = {255, 236, 139};
                    position = "lightFront_1_2_pos";
                    direction = "lightFront_1_2_dir";
                    hitpoint = "hitPoint_lightFront_1_2";
                    selection = "lightFront_1_2";
                    size = 1;
                    innerAngle = 100;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 1;
                    useFlare = 0;
                    daylight = 1;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.25;
                        hardLimitStart = 60;
                        hardLimitEnd = 120;
                    };
                };
                class lightFront_1_2_flare: lightFront_1_2
                {
                    position = "lightFront_1_2_flare_pos";
                    useFlare = 1;
                    innerAngle = 80;
                    outerAngle = 110;
                };
                class lightBack_1_1
                {
                    color[] = {0.75, 0, 0};
                    ambient[] = {0.0005, 0, 0};
                    position = "lightBack_1_1_pos";
                    direction = "lightBack_1_1_dir";
                    hitpoint = "hitPoint_lightBack_1_1";
                    selection = "lightBack_1_1";
                    size = 0.1;
                    innerAngle = 100;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 3;
                    useFlare = 0;
                    daylight = 1;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.25;
                        hardLimitStart = 60;
                        hardLimitEnd = 120;
                    };
                };
                class lightBack_1_1_flare: lightBack_1_1
                {
                    position = "lightBack_1_2_pos";
                    useFlare = 1;
                };
                class lightBack_1_2
                {
                    color[] = {0.75, 0, 0};
                    ambient[] = {0.0005, 0, 0};
                    position = "lightBack_1_2_pos";
                    direction = "lightBack_1_2_dir";
                    hitpoint = "hitPoint_lightBack_1_2";
                    selection = "lightBack_1_2";
                    size = 0.1;
                    innerAngle = 100;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 3;
                    useFlare = 0;
                    daylight = 1;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.25;
                        hardLimitStart = 60;
                        hardLimitEnd = 120;
                    };
                };
                class lightBack_1_2_flare: lightBack_1_2
                {
                    position = "lightBack_1_2_pos";
                    useFlare = 1;
                };
            };
            aggregateReflectors[] = {{"lightFront_1_1", "lightFront_1_1_flare"}, {"lightFront_1_2", "lightFront_1_2_flare"}, {"lightBack_1_1", "lightBack_1_1_flare"}, {"lightBack_1_2", "lightBack_1_2_flare"}};
            gm_animationSourceOdometer = "ind_odometer_source";
            gm_animationSourceWiper = "wiper_source";
            class CommanderTurret_base: NewTurret
            {
                memoryPointGunnerOptics = "Optic_CommanderTurret_pos";
                memoryPointGunnerOutOptics = "OpticOut_CommanderTurret_pos";
                gunBeg = "CommanderTurret_Gun_dir";
                gunEnd = "CommanderTurret_Gun_pos";
                memoryPointGun = "CommanderTurret_Coax";
                selectionFireAnim = "CommanderTurret_muzzleflash";
                missileBeg = "Spice rakety";
                missileEnd = "konec rakety";
                memoryPointMissile[] = {"CommanderTurret_Gun_dir", "CommanderTurret_Missile_dir"};
                memoryPointMissileDir[] = {"CommanderTurret_Gun_pos", "CommanderTurret_Missile_pos"};
                body = "CommanderTurret_trav_anim";
                gun = "CommanderTurret_elev_anim";
                animationSourceBody = "CommanderTurret_trav_source";
                animationSourceGun = "CommanderTurret_elev_source";
                animationSourceElevation = "CommanderTurret_raise_source";
                animationSourceCamElev = "CommanderTurret_camelev_source";
                particlesPos = "CommanderTurret_Gun_dir";
                particlesDir = "CommanderTurret_Gun_pos";
                ViewGunnerShadow = 1;
                ViewGunnerShadowAmb = 1;
                ViewGunnerShadowDiff = 1;
                proxyType = "CPCommander";
                proxyIndex = 1;
                gunnerName = "Commander";
                primaryGunner = 0;
                primaryObserver = 1;
                stabilizedInAxes = 0;
                soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                minElev = -4;
                maxElev = 20;
                initElev = 0;
                minTurn = -360;
                maxTurn = 360;
                initTurn = 0;
                commanding = 2;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 0;
                gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                gunnerOutOpticsColor[] = {0, 0, 0, 1};
                gunnerOutForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                gunnerOpticsEffect[] = {};
                gunnerOutOpticsEffect[] = {};
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
                memoryPointsGetInGunner = "CommanderTurret_getin_pos";
                memoryPointsGetInGunnerDir = "CommanderTurret_getin_dir";
                turretFollowFreeLook = 2;
                startEngine = 0;
                turretinfoType = "gm_RscUnitInfo_vehicle_commander_optics";
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
                discreteDistanceInitindex = 7;
                class ViewOptics: ViewOptics
                {
                };
                class ViewGunner: ViewCargo
                {
                };
                class Components
                {
                    class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
                    {
                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
                    {
                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };
                };
            };
            class LoaderTurret_base: CommanderTurret_base
            {
                memoryPointGunnerOptics = "Optic_LoaderTurret_pos";
                memoryPointGunnerOutOptics = "OpticOut_LoaderTurret_pos";
                gunBeg = "LoaderTurret_Gun_dir";
                gunEnd = "LoaderTurret_Gun_pos";
                memoryPointGun = "LoaderTurret_Coax";
                selectionFireAnim = "LoaderTurret_muzzleflash";
                missileBeg = "Spice rakety";
                missileEnd = "konec rakety";
                memoryPointMissile[] = {"LoaderTurret_Gun_dir", "LoaderTurret_Missile_dir"};
                memoryPointMissileDir[] = {"LoaderTurret_Gun_pos", "LoaderTurret_Missile_pos"};
                body = "LoaderTurret_trav_anim";
                gun = "LoaderTurret_elev_anim";
                animationSourceBody = "LoaderTurret_trav_source";
                animationSourceGun = "LoaderTurret_elev_source";
                animationSourceElevation = "LoaderTurret_raise_source";
                animationSourceCamElev = "LoaderTurret_camelev_source";
                particlesPos = "LoaderTurret_Gun_dir";
                particlesDir = "LoaderTurret_Gun_pos";
                ViewGunnerShadow = 1;
                ViewGunnerShadowAmb = 1;
                ViewGunnerShadowDiff = 1;
                proxyType = "CPGunner";
                proxyIndex = 2;
                primaryGunner = 0;
                primaryObserver = 0;
                stabilizedInAxes = 0;
                commanding = 0;
                startEngine = 0;
                class Components
                {
                    class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
                    {
                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
                    {
                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };
                };
            };
            class MachineGunTurret_base: CommanderTurret_base
            {
                memoryPointGunnerOptics = "Optic_MachineGunTurret_pos";
                memoryPointGunnerOutOptics = "OpticOut_MachineGunTurret_pos";
                gunBeg = "MachineGunTurret_Gun_dir";
                gunEnd = "MachineGunTurret_Gun_pos";
                memoryPointGun = "MachineGunTurret_Coax";
                selectionFireAnim = "MachineGunTurret_muzzleflash";
                missileBeg = "Spice rakety";
                missileEnd = "konec rakety";
                memoryPointMissile[] = {"MachineGunTurret_Gun_dir", "MachineGunTurret_Missile_dir"};
                memoryPointMissileDir[] = {"MachineGunTurret_Gun_pos", "MachineGunTurret_Missile_pos"};
                body = "MachineGunTurret_trav_anim";
                gun = "MachineGunTurret_elev_anim";
                animationSourceBody = "MachineGunTurret_trav_source";
                animationSourceGun = "MachineGunTurret_elev_source";
                animationSourceElevation = "MachineGunTurret_raise_source";
                animationSourceCamElev = "MachineGunTurret_camelev_source";
                particlesPos = "MachineGunTurret_Gun_dir";
                particlesDir = "MachineGunTurret_Gun_pos";
                ViewGunnerShadow = 1;
                ViewGunnerShadowAmb = 1;
                ViewGunnerShadowDiff = 1;
                dontCreateAi = 1;
                cantCreateAI = 1;
                proxyType = "CPGunner";
                proxyIndex = 2;
                hasGunner = 1;
                primaryGunner = 0;
                primaryObserver = 0;
                canHideGunner = 0;
                stabilizedInAxes = 0;
                commanding = 0;
                startEngine = 0;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
                viewGunnerInExternal = 1;
                isPersonTurret = 0;
                minElev = -20;
                minOutElev = -20;
                maxElev = 60;
                maxOutElev = 60;
                initElev = 0;
                initOutElev = 0;
                minTurn = -360;
                minOutTurn = -360;
                maxTurn = 360;
                maxOutTurn = 360;
                initTurn = 0;
                initOutTurn = 0;
                turretFollowFreeLook = 0;
                maxHorizontalRotSpeed = "((360/3)/45)";
                maxVerticalRotSpeed = "((360/3)/45)";
                gunnerOutOpticsModel = "\a3\weapons_f\reticle\optics_empty.p3d";
                gunnerOpticsModel = "\a3\weapons_f\reticle\optics_empty.p3d";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 0;
                turretinfoType = "gm_RscUnitInfo_vehicle_compassOnly";
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
                discreteDistanceInitindex = 7;
                class Turrets
                {
                };
                gunnerCompartments = "Compartment100";
                class ViewGunner: ViewCargo
                {
                    initAngleX = 0;
                };
                class ViewOptics: ViewOptics
                {
                    initFov = 0.75;
                    maxFov = "0.75 * 1.6";
                    minFov = "0.75 * 0.3";
                    initAngleX = 0;
                    initAngleY = 0;
                    maxAngleX = 30;
                    maxAngleY = 100;
                    maxMoveX = 0;
                    maxMoveY = 0;
                    maxMoveZ = 0;
                    minAngleX = -30;
                    minAngleY = -100;
                    minMoveX = 0;
                    minMoveY = 0;
                    minMoveZ = 0;
                    speedZoomMaxFOV = 0;
                    speedZoomMaxSpeed = 1e+010;
                };
                class Components
                {
                    class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
                    {
                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
                    {
                        class Components
                        {
                            class EmptyDisplay
                            {
                                componentType = "EmptyDisplayComponent";
                            };
                        };
                    };
                };
            };
            radarType = 8;
            class Turrets: Turrets
            {
                class MainTurret: MainTurret
                {
                    memoryPointGunnerOptics = "Optic_MainTurret_pos";
                    memoryPointGunnerOutOptics = "OpticOut_MainTurret_pos";
                    gunBeg = "MainTurret_Gun_dir";
                    gunEnd = "MainTurret_Gun_pos";
                    memoryPointGun = "MainTurret_Coax";
                    selectionFireAnim = "MainTurret_muzzleflash";
                    missileBeg = "Spice rakety";
                    missileEnd = "konec rakety";
                    memoryPointMissile[] = {"MainTurret_Gun_dir", "MainTurret_Missile_dir"};
                    memoryPointMissileDir[] = {"MainTurret_Gun_pos", "MainTurret_Missile_pos"};
                    body = "MainTurret_trav_anim";
                    gun = "MainTurret_elev_anim";
                    animationSourceBody = "MainTurret_trav_source";
                    animationSourceGun = "MainTurret_elev_source";
                    animationSourceElevation = "MainTurret_raise_source";
                    animationSourceCamElev = "MainTurret_camelev_source";
                    particlesPos = "MainTurret_Gun_dir";
                    particlesDir = "MainTurret_Gun_pos";
                    ViewGunnerShadow = 1;
                    ViewGunnerShadowAmb = 1;
                    ViewGunnerShadowDiff = 1;
                    memoryPointsGetInGunner = "MainTurret_getin_pos";
                    memoryPointsGetInGunnerDir = "MainTurret_getin_dir";
                    class Components
                    {
                        class VehicleSystemsDisplayManagerComponentLeft: gm_VehicleSystemsDisplayManagerLeft_base
                        {
                        };
                        class VehicleSystemsDisplayManagerComponentRight: gm_VehicleSystemsDisplayManagerRight_base
                        {
                        };
                    };
                };
            };
            class Hitpoints: HitPoints
            {
                class HitHull
                {
                    material = -1;
                    name = "hitPoint_hull";
                    visual = "damage_hull";
                    armor = 1;
                    explosionShielding = 1.5;
                    minimalHit = 0;
                    passthrough = 1;
                    radius = 0.15;
                };
                class HitBody: HitBody
                {
                    material = -1;
                    name = "hitPoint_hull";
                    visual = "damage_hull";
                    armor = 1;
                    explosionShielding = 1.5;
                    minimalHit = 0;
                    passthrough = 1;
                    radius = 0.15;
                };
                class HitEngine: HitEngine
                {
                    material = -1;
                    passthrough = 0;
                    armor = 0.45;
                    name = "hitPoint_engine";
                    armorComponent = "fireGeo_engine";
                    visual = "engine";
                    minimalHit = 0.14;
                    explosionShielding = 1;
                    radius = 0.15;
                    class DestructionEffects
                    {
                        ammoExplosionEffect = "";
                        class hitEngine_effect_01
                        {
                            simulation = "particles";
                            type = "SmallWreckSmoke";
                            position = "engineSmoke_01_pos";
                            intensity = 0.5;
                            interval = 1;
                            lifeTime = 1;
                        };
                        class hitEngine_effect_02: hitEngine_effect_01
                        {
                            type = "WeaponWreckSmoke";
                            intensity = 0.5;
                            interval = 1;
                            lifeTime = 60;
                        };
                        class hitEngine_effect_03: hitEngine_effect_01
                        {
                            simulation = "sound";
                            type = "Fire";
                        };
                        class hitEngine_effect_04: hitEngine_effect_02
                        {
                            position = "engineSmoke_02_pos";
                        };
                        class hitEngine_effect_05: hitEngine_effect_02
                        {
                            position = "engineSmoke_03_pos";
                        };
                        class hitEngine_effect_06: hitEngine_effect_02
                        {
                            position = "engineSmoke_04_pos";
                        };
                    };
                };
                class HitFuel: HitFuel
                {
                    material = -1;
                    passthrough = 0;
                    armor = 0.25;
                    name = "hitPoint_fuel";
                    armorComponent = "fireGeo_fuel";
                    visual = "fuel";
                    minimalHit = 0;
                    explosionShielding = 1.5;
                    radius = 0.25;
                };
                class HitLFWheel: HitLFWheel
                {
                    name = "hitPoint_wheel_1_1";
                    armorComponent = "fireGeo_wheel_1_1";
                    visual = "wheel_1_1";
                };
                class HitRFWheel: HitRFWheel
                {
                    name = "hitPoint_wheel_1_2";
                    armorComponent = "fireGeo_wheel_1_2";
                    visual = "wheel_1_2";
                };
                class HitLF2Wheel: HitLF2Wheel
                {
                    name = "hitPoint_wheel_2_1";
                    armorComponent = "fireGeo_wheel_2_1";
                    visual = "wheel_2_1";
                };
                class HitRF2Wheel: HitRF2Wheel
                {
                    name = "hitPoint_wheel_2_2";
                    armorComponent = "fireGeo_wheel_2_2";
                    visual = "wheel_2_2";
                };
                class HitLMWheel: HitLMWheel
                {
                    name = "hitPoint_wheel_3_1";
                    armorComponent = "fireGeo_wheel_3_1";
                    visual = "wheel_3_1";
                };
                class HitRMWheel: HitRMWheel
                {
                    name = "hitPoint_wheel_3_2";
                    armorComponent = "fireGeo_wheel_3_2";
                    visual = "wheel_3_2";
                };
                class HitLBWheel: HitLBWheel
                {
                    name = "hitPoint_wheel_4_1";
                    armorComponent = "fireGeo_wheel_4_1";
                    visual = "wheel_4_1";
                };
                class HitRBWheel: HitRBWheel
                {
                    name = "hitPoint_wheel_4_2";
                    armorComponent = "fireGeo_wheel_4_2";
                    visual = "wheel_4_2";
                };
            };
            class AnimationSources: AnimationSources
            {
                class airRecPanel_01_unhide_source: gm_source_user_base
                {
                };
                class airRecPanel_02_unhide_source: gm_source_user_base
                {
                };
                class wiper_source: gm_source_user_base
                {
                };
                class mirror_source
                {
                    source = "user";
                    initPhase = 1;
                    animPeriod = 2;
                };
                class mirror_1_1_1_source: mirror_source
                {
                };
                class mirror_1_1_2_source: mirror_source
                {
                };
                class mirror_1_1_3_source: mirror_source
                {
                };
                class mirror_1_2_1_source: mirror_source
                {
                };
                class mirror_1_2_2_source: mirror_source
                {
                };
                class mirror_1_2_3_source: mirror_source
                {
                };
                class mirror_1_3_1_source: mirror_source
                {
                };
                class mirror_1_3_2_source: mirror_source
                {
                };
                class Ind_Pressure_source: gm_source_user_base
                {
                    initphase = 0.5;
                };
                class ind_odometer_source: gm_source_user_base
                {
                    animPeriod = 1000;
                };
                class ind_servicetime_source: gm_source_user_base
                {
                    animPeriod = 1000;
                };
                class switch_light_source: gm_source_switch_base
                {
                };
                class switch_wiper_source: gm_source_switch_base
                {
                };
                class LightTurnLeft_unhide_source: gm_source_user_base
                {
                };
                class LightTurnRight_unhide_source: gm_source_user_base
                {
                };
                class LightReverse_unhide_source: gm_source_user_base
                {
                };
                class beacon_01_unhide: gm_source_user_base
                {
                    source = "user";
                    animPeriod = 1e-006;
                    initPhase = 0;
                    displayname = "";
                    mass = 5;
                };
                class beacon_01_org_unhide: gm_source_user_base
                {
                    source = "user";
                    animPeriod = 1e-006;
                    initPhase = 0;
                    mass = 5;
                    forceAnimatePhase = 1;
                    forceAnimate[] = {"beacon_01_blu_unhide", 0, "beacon_01_unhide", 1, "beacon_01_blu_on", 0};
                    onPhaseChanged = "  if ((_this select 1) == 0) then                                             {                                               if (_this select 0 animationPhase 'beacon_01_blu_unhide' == 0) then                                                 {                                                   _this select 0 animate ['beacon_01_unhide',0,true];                                                     _this select 0 animate ['beacon_01_org_on',0,true];                                                     [_this select 0,'gm_beacons_org',false] call gm_core_vehicles_fnc_beaconSwitch;                                                 };                                          };                                      ";
                };
                class beacon_01_blu_unhide: gm_source_user_base
                {
                    source = "user";
                    animPeriod = 1e-006;
                    initPhase = 0;
                    mass = 5;
                    forceAnimatePhase = 1;
                    forceAnimate[] = {"beacon_01_org_unhide", 0, "beacon_01_unhide", 1, "beacon_01_org_on", 0};
                    onPhaseChanged = "  if ((_this select 1) == 0) then                                             {                                               if (_this select 0 animationPhase 'beacon_01_org_unhide' == 0) then                                                 {                                                   _this select 0 animate ['beacon_01_unhide',0,true];                                                     _this select 0 animate ['beacon_01_blu_on',0,true];                                                     [_this select 0,'gm_beacons_blu',false] call gm_core_vehicles_fnc_beaconSwitch;                                                 };                                          };                                      ";
                };
                class inWater_manual_source: gm_source_user_base
                {
                };
                class LightsMain_unhide_source: gm_source_user_base
                {
                    initPhase = 1;
                };
                class LightsMainBrake_unhide_source: gm_source_user_base
                {
                };
                class LightsBlackOutFront_unhide_source: gm_source_user_base
                {
                };
                class LightsBlackOutBack_unhide_source: gm_source_user_base
                {
                };
                class LightsBlackOutBrake_unhide_source: gm_source_user_base
                {
                };
                class LightsBlackOutConvoy_unhide_source: gm_source_user_base
                {
                };
                class LightsSearchLight_unhide_source: gm_source_user_base
                {
                };
                class Door_1_1_source: gm_source_door_base
                {
                };
                class Door_1_2_source: gm_source_door_base
                {
                };
                class Door_2_1_source: gm_source_door_base
                {
                };
                class Door_2_2_source: gm_source_door_base
                {
                };
                class window_1_1_source: gm_source_window_base
                {
                };
                class window_1_2_source: gm_source_window_base
                {
                };
                class window_2_1_source: gm_source_window_base
                {
                };
                class window_2_2_source: gm_source_window_base
                {
                };
                class HitWheel_1_1_source
                {
                    source = "Hit";
                    hitpoint = "HitLFWheel";
                    raw = 1;
                };
                class HitWheel_1_2_source: HitWheel_1_1_source
                {
                    hitpoint = "HitRFWheel";
                };
                class HitWheel_2_1_source: HitWheel_1_1_source
                {
                    hitpoint = "HitLF2Wheel";
                };
                class HitWheel_2_2_source: HitWheel_1_1_source
                {
                    hitpoint = "HitRF2Wheel";
                };
                class HitWheel_3_1_source: HitWheel_1_1_source
                {
                    hitpoint = "HitLMWheel";
                };
                class HitWheel_3_2_source: HitWheel_1_1_source
                {
                    hitpoint = "HitRMWheel";
                };
                class HitWheel_4_1_source: HitWheel_1_1_source
                {
                    hitpoint = "HitLBWheel";
                };
                class HitWheel_4_2_source: HitWheel_1_1_source
                {
                    hitpoint = "HitRBWheel";
                };
                class beacon_light_unhide_source: gm_source_user_base
                {
                };
                class beacon_mirror_source: gm_source_user_base
                {
                };
            };
            class Attributes
            {
                class gm_vehicleMarkings_LicensePlates_Plate_attribute
                {
                    displayName = "Vehicle Registration: Type";
                    tooltip = "Set Vehicle Registration Type";
                    property = "gm_vehicleMarkings_LicensePlates_Plate_attribute";
                    control = "Combo";
                    expression = "[_this,_value,0,0] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_licenseplates
                    {
                    };
                };
                class gm_vehicleMarkings_LicensePlates_Numbers_attribute
                {
                    displayName = "Vehicle Registration: Number";
                    tooltip = "*,# and $ function as wildcard.";
                    property = "gm_vehicleMarkings_LicensePlates_Numbers_attribute";
                    control = "Edit";
                    expression = "[_this,_value,0,1] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    validate = "STRING";
                    typeName = "STRING";
                };
                class gm_vehicleMarkings_tacticalSign_PreIcon_attribute
                {
                    displayName = "Tactical Sign: Pre Icon Number";
                    tooltip = "*,# and $ function as wildcard.";
                    property = "gm_vehicleMarkings_tacticalSign_PreIcon_attribute";
                    control = "Edit";
                    expression = "[_this,_value,1,0] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    validate = "STRING";
                    typeName = "STRING";
                };
                class gm_vehicleMarkings_tacticalSign_Icon_attribute
                {
                    displayName = "Tactical Sign: Icon";
                    tooltip = "Set Tactical Sign icon";
                    property = "gm_vehicleMarkings_tacticalSign_Icon_attribute";
                    control = "Combo";
                    expression = "[_this,_value,1,2] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_tacticalSigns
                    {
                    };
                };
                class gm_vehicleMarkings_tacticalSign_PostIcon_attribute
                {
                    displayName = "Tactical Sign: Post Icon Number";
                    tooltip = "*,# and $ function as wildcard.";
                    property = "gm_vehicleMarkings_tacticalSign_PostIcon_attribute";
                    control = "Edit";
                    expression = "[_this,_value,1,3] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    validate = "STRING";
                    typeName = "STRING";
                };
                class gm_vehicleMarkings_tacticalNumber_Number_attribute
                {
                    displayName = "Tactical Number: Number";
                    tooltip = "*,# and $ function as wildcard.";
                    property = "gm_vehicleMarkings_tacticalNumber_Number_attribute";
                    control = "Edit";
                    expression = "[_this,_value,2,0] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    validate = "STRING";
                    typeName = "STRING";
                };
                class gm_vehicleMarkings_tacticalNumber_Numberfont_attribute
                {
                    displayName = "Tactical Number: Font";
                    tooltip = "Sets the font used to the tactical number.";
                    property = "gm_vehicleMarkings_tacticalNumber_Numberfont_attribute";
                    control = "Combo";
                    expression = "[_this,_value,2,1] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_Fonts
                    {
                    };
                };
                class gm_vehicleMarkings_Insignias_MissionSmall_attribute
                {
                    displayName = "Insignia: Mission";
                    tooltip = "Small symbol.";
                    property = "gm_vehicleMarkings_Insignias_MissionSmall_attribute";
                    control = "Combo";
                    expression = "[_this,_value,3,0] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_MissionSmall
                    {
                    };
                };
                class gm_vehicleMarkings_Insignias_MissionLarge_attribute
                {
                    displayName = "Insignia: Mission (Large)";
                    tooltip = "Large symbol.";
                    property = "gm_vehicleMarkings_Insignias_MissionLarge_attribute";
                    control = "Combo";
                    expression = "[_this,_value,3,1] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_MissionLarge
                    {
                    };
                };
                class gm_vehicleMarkings_Insignias_Recon_attribute
                {
                    displayName = "Insignia: Marking";
                    tooltip = "ID Symbol.";
                    property = "gm_vehicleMarkings_Insignias_Marking_attribute";
                    control = "Combo";
                    expression = "[_this,_value,3,2] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_Recon
                    {
                    };
                };
                class gm_vehicleMarkings_Insignias_Unit_attribute
                {
                    displayName = "Insignia: Crest";
                    tooltip = "Battalion-specific symbol.";
                    property = "gm_vehicleMarkings_Insignias_Battalion_attribute";
                    control = "Combo";
                    expression = "[_this,_value,3,3] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_Unit
                    {
                    };
                };
                class gm_vehicleMarkings_Insignias_Company_attribute
                {
                    displayName = "Insignia: Company";
                    tooltip = "Company-specific symbol.";
                    property = "gm_vehicleMarkings_Insignias_Company_attribute";
                    control = "Combo";
                    expression = "[_this,_value,3,4] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_Company
                    {
                    };
                };
                class gm_vehicleMarkings_Insignias_Formation_attribute
                {
                    displayName = "Insignia: Formation";
                    tooltip = "Formation symbol";
                    property = "gm_vehicleMarkings_Insignias_Platoon_attribute";
                    control = "Combo";
                    expression = "[_this,_value,3,5] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_Formation
                    {
                    };
                };
                class gm_vehicleMarkings_Insignias_HazardSign_attribute
                {
                    displayName = "Hazard Markings";
                    tooltip = "Specifies the hazard markings.";
                    property = "gm_vehicleMarkings_Insignias_HazardSign_attribute";
                    control = "Combo";
                    expression = "[_this,_value,4,0] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_HazardSign
                    {
                    };
                };
                class gm_vehicleMarkings_Insignias_nation_attribute
                {
                    displayName = "Insignia: Nation";
                    tooltip = "Nation-specific symbol.";
                    property = "gm_vehicleMarkings_Insignias_nation_attribute";
                    control = "Combo";
                    expression = "[_this,_value,5,0] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_Nations
                    {
                    };
                };
                class gm_vehicleMarkings_Insignias_nationPosition_attribute
                {
                    displayName = "Insignia: Nation Position";
                    tooltip = "Position of Nation-specfic symbol";
                    property = "gm_vehicleMarkings_Insignias_nationPosition_attribute";
                    control = "Combo";
                    expression = "[_this,_value,5,1] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values
                    {
                        class gm_insignia_automatic
                        {
                            name = "Automatic";
                            value = "-1";
                            default = 1;
                        };
                        class gm_insignia_nationPosition_01
                        {
                            name = "None";
                            value = 0;
                        };
                    };
                };
                class gm_vehicleMarkings_Insignias_flag_attribute
                {
                    displayName = "Insignia: Flag";
                    tooltip = "Nation-specific flag insignia";
                    property = "gm_vehicleMarkings_Insignias_flag_attribute";
                    control = "Combo";
                    expression = "[_this,_value,5,2] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
                    defaultValue = "-1";
                    class values: gm_VehicleInsignias_flags
                    {
                    };
                };
            };
            class Sounds: Sounds
            {
                class Waternoise_ext
                {
                    sound[] = {"A3\Sounds_F\vehicles\noises\soft_driving_in_water", 0.501187, 1, 300};
                    frequency = "1";
                    volume = "(speed factor[0, 10]) * water * camPos + (speed factor[-0.1, -10]) * water * camPos";
                };
                class Waternoise_int
                {
                    sound[] = {"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int", 0.354813, 1, 100};
                    frequency = "1";
                    volume = "(speed factor[0, 10]) * water * (1-camPos)* 0.8 + (speed factor[-0.1, -10]) * water * (1-camPos) *0.8";
                };
                class TiresRockOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2", 0.794328, 1, 120};
                    frequency = "1";
                    volume = "camPos*rock*(speed factor[2, 20])";
                };
                class TiresSandOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", 0.707946, 1, 120};
                    frequency = "1";
                    volume = "camPos*sand*(speed factor[2, 20])";
                };
                class TiresGrassOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1", 0.707946, 1, 120};
                    frequency = "1";
                    volume = "camPos*grass*(speed factor[2, 20])";
                };
                class TiresMudOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", 0.707946, 1, 120};
                    frequency = "1";
                    volume = "camPos*mud*(speed factor[2, 20])";
                };
                class TiresGravelOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2", 0.707946, 1, 120};
                    frequency = "1";
                    volume = "camPos*gravel*(speed factor[2, 20])";
                };
                class TiresAsphaltOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1", 0.707946, 1, 120};
                    frequency = "1";
                    volume = "camPos*asphalt*(speed factor[2, 20])";
                };
                class NoiseOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", 0.794328, 1, 90};
                    frequency = "1";
                    volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
                };
                class TiresRockIn
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2", 0.398107, 1};
                    frequency = "1";
                    volume = "(1-camPos)*rock*(speed factor[2, 20])";
                };
                class TiresSandIn
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 0.398107, 1};
                    frequency = "1";
                    volume = "(1-camPos)*sand*(speed factor[2, 20])";
                };
                class TiresGrassIn
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1", 0.398107, 1};
                    frequency = "1";
                    volume = "(1-camPos)*grass*(speed factor[2, 20])";
                };
                class TiresMudIn
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 0.398107, 1};
                    frequency = "1";
                    volume = "(1-camPos)*mud*(speed factor[2, 20])";
                };
                class TiresGravelIn
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2", 0.398107, 1};
                    frequency = "1";
                    volume = "(1-camPos)*gravel*(speed factor[2, 20])";
                };
                class TiresAsphaltIn
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1", 0.398107, 1};
                    frequency = "1";
                    volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
                };
                class NoiseIn
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.446684, 1};
                    frequency = "1";
                    volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
                };
                class breaking_ext_road
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 0.398107, 1, 100};
                    frequency = 1;
                    volume = "engineOn*asphalt*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
                };
                class acceleration_ext_road
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.398107, 1, 100};
                    frequency = 1;
                    volume = "engineOn*asphalt*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
                };
                class turn_left_ext_road
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.398107, 1, 100};
                    frequency = 1;
                    volume = "engineOn*asphalt*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
                };
                class turn_right_ext_road
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.398107, 1, 100};
                    frequency = 1;
                    volume = "engineOn*asphalt*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
                };
                class breaking_ext_dirt
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_15_dirt_breaking", 0.398107, 1, 100};
                    frequency = 1;
                    volume = "engineOn*(1-asphalt)*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
                };
                class acceleration_ext_dirt
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", 0.398107, 1, 100};
                    frequency = 1;
                    volume = "engineOn*(1-asphalt)*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
                };
                class turn_left_ext_dirt
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_12_dirt", 0.398107, 1, 100};
                    frequency = 1;
                    volume = "engineOn*(1-asphalt)*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
                };
                class turn_right_ext_dirt
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_12_dirt", 0.398107, 1, 100};
                    frequency = 1;
                    volume = "engineOn*(1-asphalt)*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
                };
                class breaking_int_road
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 0.562341, 1};
                    frequency = 1;
                    volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
                };
                class acceleration_int_road
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.562341, 1};
                    frequency = 1;
                    volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
                };
                class turn_left_int_road
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.562341, 1};
                    frequency = 1;
                    volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
                };
                class turn_right_int_road
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.562341, 1};
                    frequency = 1;
                    volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
                };
                class breaking_int_dirt
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", 0.562341, 1};
                    frequency = 1;
                    volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
                };
                class acceleration_int_dirt
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", 0.562341, 1};
                    frequency = 1;
                    volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
                };
                class turn_left_int_dirt
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_12_dirt_int", 0.562341, 1};
                    frequency = 1;
                    volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
                };
                class turn_right_int_dirt
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_12_dirt_int", 0.562341, 1};
                    frequency = 1;
                    volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
                };
            };
            class UserActions
            {
            };
            class Eventhandlers: EventHandlers
            {
                class gm_core_vehicles_Eventhandlers
                {
                    init = "_this call gm_core_vehicles_fnc_init;";
                    respawn = "_this call gm_core_vehicles_fnc_init;";
                    getIn = "";
                    getOut = "";
                    engine = "_this call gm_core_vehicles_fnc_engine;";
                    turnIn = "";
                    turnOut = "";
                    deleted = "_this call gm_core_vehicles_fnc_deleted;";
                    killed = "_this call gm_core_vehicles_fnc_killed;";
                };
                class gm_core_vehicles_multicrewhatch
                {
                    init = "_this call gm_core_vehicles_fnc_multiCrewHatch_init";
                    turnIn = "[_this,'0'] spawn gm_core_vehicles_fnc_multiCrewHatch";
                    turnOut = "[_this,'1'] spawn gm_core_vehicles_fnc_multiCrewHatch";
                    getIn = "[_this,'2'] spawn gm_core_vehicles_fnc_multiCrewHatch";
                    seatSwitched = "[_this,'3'] spawn gm_core_vehicles_fnc_multiCrewHatch";
                };
            };
            class ViewOptics: ViewOptics
            {
                initFov = 0.75;
                minFov = 0.75;
                maxFov = 0.75;
            };
        };
        class gm_wheeled_car_base: gm_wheeled_base
        {
            editorSubcategory = "EdSubcat_Cars";
            type = 0;
            class Exhausts
            {
                class exhaust_1_1
                {
                    position = "exhaust_1_1_pos";
                    direction = "exhaust_1_1_dir";
                    effect = "ExhaustsEffect";
                };
            };
            buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1, 1, 200};
            buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1, 1, 200};
            buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1, 1, 200};
            buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1, 1, 200};
            soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
            WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
            WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
            WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
            WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
            soundWoodCrash[] = {"woodCrash0", 0.25, "woodCrash1", 0.25, "woodCrash2", 0.25, "woodCrash3", 0.25};
            armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1, 1, 200};
            armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1, 1, 200};
            armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1, 1, 200};
            armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1, 1, 200};
            soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
            Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1, 1, 200};
            Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1, 1, 200};
            Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1, 1, 200};
            Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1, 1, 200};
            soundCrashes[] = {"Crash0", 0.25, "Crash1", 0.25, "Crash2", 0.25, "Crash3", 0.25};
            class Sounds: Sounds
            {
            };
            class Turrets: Turrets
            {
            };
            class AnimationSources: AnimationSources
            {
            };
            class Attributes: Attributes
            {
            };
            class Hitpoints: Hitpoints
            {
            };
        };