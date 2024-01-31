@interface HUAudioWaveformUtilities : NSObject

+ (float)progressForTime:(double)a0 duration:(double)a1;
+ (double)disabledWaveformWidth:(double)a0 forProgress:(float)a1;
+ (double)floatToScreenScale:(double)a0;
+ (id)waveformImageforPowerLevels:(const double *)a0 powerLevelsCount:(unsigned long long)a1 color:(id)a2;

@end
