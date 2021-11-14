class CfgCloudlets {
    class Default;
    class grad_gm_trabi_exhaust_cloudlet: Default {
        interval = "(0.05 - 0.0497 * intensity)/2";
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
        lifeTime = "2 * (engineOn interpolate [0,1,3.5,1])";
        moveVelocity[] = {
            "speedX * 6",
            "speedY * 6",
            "speedZ * 6"
        };
        rotationVelocity=1;
        weight = 1.15;
        volume = 1;
        rubbing = 0.40000001;
        size[] = {0.1,0.40000001,0.60000002,0.75,0.85000002,0.92000002,1};
        sizeCoef = "1.75 * (engineOn interpolate [0,2,4,2])";
        color[] = {
            {0.54,0.6,0.74,0.1},
            {0.30000001,0.30000001,0.30000001,0.079999998},
            {0.30000001,0.30000001,0.30000001,0.039999999},
            {0.30000001,0.30000001,0.30000001,0.02},
            {0.30000001,0.30000001,0.30000001,0.0099999998},
            {0.30000001,0.30000001,0.30000001,0.0040000002},
            {0.30000001,0.30000001,0.30000001,0.0020000001},
            {0.30000001,0.30000001,0.30000001,0.001}
        };
        colorCoef[] = {
            0.30000001,
            0.30000001,
            0.30000001,
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
