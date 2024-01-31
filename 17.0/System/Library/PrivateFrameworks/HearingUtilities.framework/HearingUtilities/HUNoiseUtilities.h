@interface HUNoiseUtilities : NSObject

+ (double)attenuationFor298WithExposure:(double)a0 andListeningState:(long long)a1;
+ (double)attenuationFor515WithExposure:(double)a0 andListeningState:(long long)a1;
+ (double)attenuationFor698WithExposure:(double)a0 andListeningState:(long long)a1;
+ (double)attenuationForExposure:(double)a0 deviceType:(long long)a1 andListeningState:(long long)a2;

@end
