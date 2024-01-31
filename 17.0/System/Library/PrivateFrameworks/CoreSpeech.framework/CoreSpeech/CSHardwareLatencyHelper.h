@interface CSHardwareLatencyHelper : NSObject

+ (id)sharedInstance;

- (id)_adjustmentSecondsFromLatencyInfo:(id)a0 error:(id *)a1;
- (id)_hardwareLatenciesUsingStreamHandle:(unsigned long long)a0 andVoiceController:(id)a1;
- (id)_hardwareLatencyAdjustmentSeconds:(id)a0 hwLatencyType:(unsigned long long)a1 error:(id *)a2;
- (id)_hardwareLatencyAdjustmentSecondsUsingStreamHandle:(unsigned long long)a0 andVoiceController:(id)a1;
- (BOOL)_valuesAreMinimalyValidForInfoDictionary:(id)a0 type:(unsigned long long)a1;
- (BOOL)addHWLatencyToOption:(id)a0 withCorrection:(double)a1 streamHandle:(unsigned long long)a2 voiceController:(id)a3;

@end
