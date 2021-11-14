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
			"gm_p601_base"
		};
	};
};

class cfgVehicles {

    class gm_wheeled_car_base;
	class gm_p601_base: gm_wheeled_car_base;

    class Sounds;

    class Exhausts
            {
                class exhaust_1_1
                {
                    position = "exhaust_1_1_pos";
                    direction = "exhaust_1_1_dir";
                    effect = "grad_gm_trabi_exhaust";
                };
            };
            
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

};

#include <CfgEventHandlers.hpp>