@interface SFSpeechSynthesisUtils : NSObject

+ (long long)typeFromString:(id)a0;
+ (long long)footprintFromString:(id)a0;
+ (id)typeStringFromType:(long long)a0;
+ (BOOL)isInternalBuild;
+ (id)footprintStringFromFootprint:(long long)a0;
+ (id)genderStringFromGender:(long long)a0;
+ (long long)genderFromString:(id)a0;
+ (double)absoluteTimeToSecond:(unsigned long long)a0;

@end
