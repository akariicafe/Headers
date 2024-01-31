@interface SNAudioFormatUtils : NSObject

+ (void)assertAudioStreamAnalyzerSupportsFormat:(id)a0;
+ (BOOL)checkFormatIsLinearPCM:(id)a0;
+ (BOOL)checkFormatIsValid:(id)a0;
+ (BOOL)validateAudioStreamAnalyzerSupportsFormat:(id)a0 error:(id *)a1;
+ (BOOL)validateFormatIsLinearPCM:(id)a0 error:(id *)a1;
+ (BOOL)validateFormatIsValid:(id)a0 error:(id *)a1;

- (id)init;

@end
