/*
    
    define macros taken from BWMod

*/

class CfgPatches
{
	class grad_gm_trabi
	{
		author="nomisum";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"gm_vehicles_land_wheeled_p601",
            "gm_vehicles_land_wheeled_p601_gc_civ_p601",
            "gm_vehicles_land_wheeled_p601_gc_bgs_p601"
		};
	};
};

class cfgVehicles {

    class Car_F;
    class gm_wheeled_car_base: Car_F {
        class Sounds;
        class AnimationSources;
    };

	class gm_p601_base: gm_wheeled_car_base {     

            maxSpeed = 120; // this is definitely the right max speed
            thrustDelay = 0.2; // thrust should be applied at once, only speed shouldnt be as fast
            switchTime = 1;
            latency = 1.5;
            enginePower = 26;
            // redRpm = 4200;
            // idleRpm = 600;

            class Exhausts
                {
                    class exhaust_1_1
                    {
                        position = "exhaust_1_1_pos";
                        direction = "exhaust_1_1_dir";
                        effect = "grad_gm_trabi_exhaust";
                    };
                };


            soundEngineOnInt[] = {"grad_gm_trabi\sounds\trabant_start.ogg", 0.630957, 1, 200};
            soundEngineOnExt[] = {"grad_gm_trabi\sounds\trabant_start.ogg", 0.630957, 1, 200};
            soundEngineOffInt[] = {"grad_gm_trabi\sounds\trabant_stop.ogg", 0.630957, 1, 200};
            soundEngineOffExt[] = {"grad_gm_trabi\sounds\trabant_stop.ogg", 0.630957, 1, 200};
                
            class Sounds {

                    // warp factor
                    #define FACTOR(val,from,to) (val factor[from,to])
                    // RANGE(val,   begin, band, end,   band)
                    #define RANGE(val,from,band0,to,band1) FACTOR2(val,from,(from+band0),to,(to+band1))
                    // FACTOR2(val, 0, 400, 1200,   2000)
                    #define FACTOR2(val,from0,to0,from1,to1) (FACTOR(val,from0,to0) *   FACTOR(val,to1,from1))

                    // redRpm
                    #define MAX_RPM 4200
                    // scaled   rpm to 0 - 1
                    #define RPM(rpm) (rpm/MAX_RPM)

                    // specialized FACTOR for rpm
                    #define FACTOR_RPM(from,to) FACTOR(RPM(rpm),RPM(from),RPM(to))
                    // specialized peak for rpm
                    #define FACTOR2_RPM(from0,to0,from1,to1) (FACTOR_RPM(from0,to0) *   FACTOR_RPM(to1,from1))

                    #define RPM_NONE = 0
                    #define RPM_IDLE 700
                    #define RPM_1 1500
                    #define RPM_2 2400
                    #define RPM_3 3300
                    #define RPM_4 4200

                    #define HZ_IDLE FACTOR_RPM(50,700)
                    #define HZ_RPM1 FACTOR_RPM(700,1500)
                    #define HZ_RPM2 FACTOR_RPM(1500,2400)
                    #define HZ_RPM3 FACTOR_RPM(2400,3300)
                    #define HZ_RPM4 FACTOR_RPM(3300,4200)

                    #define VOLUME_IDLE (speed factor [0, 5])
                    #define VOLUME_RPM1 (speed factor [0, 10])
                    #define VOLUME_RPM2 (speed factor [5, 30])
                    #define VOLUME_RPM3 (speed factor [20, 70])
                    #define VOLUME_RPM4 (speed factor [50, 120])
                    

                    #define VOLUME_MULTI 1.2

                    class siren_ext
                    {
                        sound[] = {"gm\gm_sounds\data\gm_gc_police_siren_01_ext", 1, 1, 800};
                        frequency = "1";
                        volume = "0.7 * CustomSoundController1";
                    };
                    class Idle_ext
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_idle.ogg", 0.562341, 1, 200};
                        frequency = 1;
                        volume = engineOn * camPos * VOLUME_IDLE;
                    };
                    class engine_01_ext
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_down.ogg", 0.562341, 1, 200};
                        frequency = 1;
                        volume = engineOn * camPos * VOLUME_RPM1;
                    };
                    class engine_02_ext
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_load.ogg", 0.562341, 1, 200};
                        frequency = 1;
                        volume = engineOn * camPos * VOLUME_RPM2;
                    };
                    class engine_03_ext
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run.ogg", 0.562341, 1, 200};
                        frequency = 1;
                        volume = engineOn * camPos * VOLUME_RPM3;
                    };
                    class engine_04_ext
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg", 0.562341, 1, 200};
                        frequency = 1;
                        volume = engineOn * camPos * VOLUME_RPM4;
                    };

                    // only 4 gears, i dont want to have those, but deleting doesnt seem to work properly
                    class engine_05_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM4*0.2;
                        volume = 0;
                    };

                    class engine_06_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM4*0.2;
                        volume = 0;
                    };

                    class engine_07_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM4*0.2;
                        volume = 0;
                    };


                    class thrust_01_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_down.ogg",1,1,350};
                        frequency = "0.3 + (rpm factor [600, 1500]) * 0.8";
                         volume = 0;
                    };
                    class thrust_02_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_load.ogg",1,1,350};
                        frequency = "0.3 + (rpm factor [1300, 2400]) * 0.8";
                         volume = 0;
                    };
                    class thrust_03_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run.ogg",1,1,350};
                        frequency = "0.3 + (rpm factor [2200, 3400]) * 0.8";
                         volume = 0;
                    };
                    class thrust_04_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg",1,1,350};
                        frequency = "0.3 + (rpm factor [3200, 4200]) * 0.8";
                         volume = 0;
                    };

                    // only 4 gears, i dont want to have those, but deleting doesnt seem to work properly
                    class thrust_05_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg",0.5*VOLUME_MULTI,0.9,350};
                        frequency = 0.9 + HZ_RPM4*0.3;
                        volume = 0;
                    };
                    class thrust_06_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg",0.5*VOLUME_MULTI,0.9,350};
                        frequency = 0.9 + HZ_RPM4*0.3;
                        volume = 0;
                    };
                    class thrust_07_ext {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg",0.5*VOLUME_MULTI,0.9,350};
                        frequency = 0.9 + HZ_RPM4*0.3;
                        volume = 0;
                    };



                    class Idle_int
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_idle.ogg", 0.562341, 1, 200};
                        frequency = 0.9 + HZ_IDLE*0.1;
                        volume = engineOn*(1-camPos)*(VOLUME_IDLE*0.3);
                    };
                    class engine_01_int
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_load.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM1*0.2;
                        volume = engineOn*(1-camPos)*(VOLUME_RPM1*0.3);
                    };
                    class engine_02_int
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM2*0.2;
                        volume = engineOn*(1-camPos)*(VOLUME_RPM2*0.3);
                    };
                    class engine_03_int
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM3*0.2;
                        volume = engineOn*(1-camPos)*(VOLUME_RPM3*0.3);
                    };
                    class engine_04_int
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM4*0.2;
                        volume = engineOn*(1-camPos)*(VOLUME_RPM4*0.3);
                    };

                    // only 4 gears, i dont want to have those, but deleting doesnt seem to work properly
                    class engine_05_int
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM4*0.2;
                        volume = 0;
                    };
                    class engine_06_int
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM4*0.2;
                        volume = 0;
                    };
                    class engine_07_int
                    {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg", 0.562341, 1, 200};
                        frequency = 0.8 + HZ_RPM4*0.2;
                        volume = 0;
                    };

                    class thrust_01_int {
                        sound[] = {"grad_gm_trabi\sounds\trabant_run2.ogg",1,1};
                        frequency = "0.3 + (rpm factor [3200, 4200]) * 0.8";
                        volume = engineOn * (1-camPos) * thrust *  (rpm factor[3200,4200]);
                    };

                };
        };

        
        class gm_gc_civ_p601_base: gm_p601_base {
              
        };
        class gm_gc_civ_p601: gm_gc_civ_p601_base {
              
        };
        class gm_gc_dp_p601: gm_p601_base {};
        
        class gm_p601_patrol_base: gm_p601_base {};
        class gm_gc_pol_p601: gm_p601_patrol_base {};
};

#include "CfgEventHandlers.hpp"
#include "CfgCloudlets.hpp"