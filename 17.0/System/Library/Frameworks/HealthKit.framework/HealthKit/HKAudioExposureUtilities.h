@interface HKAudioExposureUtilities : NSObject

+ (id)_classificationValueWithLEQ:(double)a0 duration:(double)a1 days:(long long)a2;
+ (double)_rounded:(double)a0;
+ (unsigned long long)classifyLEQ:(id)a0 forDuration:(double)a1 overDays:(long long)a2;
+ (id)computeLEQFromAudioExposureValues:(id)a0;
+ (id)localizedDisplayNameForClassification:(unsigned long long)a0;
+ (id)localizedDisplayNameForClassification:(unsigned long long)a0 isEmbedded:(BOOL)a1;
+ (double)maximumDurationInSecondsForLEQ:(double)a0 days:(long long)a1;

@end
