class CfgCloudlets {
    class Default;
    class grad_gm_trabi_exhaust_cloudlet: Default {
        interval = "(0.05 - 0.0497 * intensity)/4";
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = "4 * (engineOn interpolate [0,1,3.5,1])";
        moveVelocity[] = {"speedX * 2", "speedY * 2", "speedZ / 4"};
        rotationVelocity=1;
        weight = 1.5;
        volume = 1;
        rubbing = 0.40000001;
        size[] = {0.03,0.04,0.07,0.40000001,0.60000002,0.75,0.85000002,0.92000002,1};
        sizeCoef = "1.75 * (engineOn interpolate [0,2,4,2])";
        color[] = {
            {0.54*2,0.6*2,0.74*2,0.2},
            {0.54/1,0.6/1,0.74/1,0.079999998},
            {0.54/1.5,0.6/1.5,0.74/1.5,0.04},
            {0.54/1.5,0.6/1.5,0.74/1.5,0.02},
            {0.54/1.5,0.6/1.5,0.74/1.5,0.0099999998},
            {0.54/1.5,0.6/1.5,0.74/1.5,0.0040000002},
            {0.54/1.5,0.6/1.5,0.74/1.5,0.0020000001},
            {0.54/1.5,0.6/1.5,0.74/1.5,0.001}
        };
        colorCoef[] = {
            0.54,
            0.6,
            0.74,
            "(intensity * 1.3 * engineOn) + (1 * (1 - engineOn))"
        };
        animationSpeed[] = {2,1};
        animationSpeedCoef = 0.9;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.15000001;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.1;
        lifeTimeVar = 0.18000001;
        position[] = {
            "positionX",
            "positionY",
            "positionZ"
        };
        positionVar[] = {0.050000001,0.050000001,0.050000001};
        MoveVelocityVar[] = {0.40000001,0.40000001,0.40000001};
        rotationVelocityVar = 20;
        sizeVar = 0.1;
        colorVar[] = {0,0,0,0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        bounceOnSurface = 0.1;
        bounceOnSurfaceVar = 0.1;
    };
};

class grad_gm_trabi_exhaust {
    class ExhaustsEffect01 {
        simulation = "particles";
        type = "grad_gm_trabi_exhaust_cloudlet";
    };
    class ExhaustsEffectRefract01 {
        simulation="particles";
        type="ExhaustSmokeBigRefract";
    };
    class ExhaustsEffectWater01{
        simulation="particles";
        type="ExhaustSmokeBigWater1";
        qualityLevel=2;
    };
    class ExhaustsEffectWater01Med {
        simulation="particles";
        type="ExhaustSmokeBigWater1";
        qualityLevel=1;
    };
    class ExhaustsEffectWater02 {
        simulation="particles";
        type="ExhaustSmokeBigWater2";
        qualityLevel=2;
    };
    class ExhaustsEffectWater02Med {
        simulation="particles";
        type="ExhaustSmokeBigWater2";
        qualityLevel=1;
    };
};
