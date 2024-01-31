@interface CSVoiceTriggerSecondPassConfigDecoder : NSObject

+ (id)getDefaultRecognizerNameForB238;
+ (id)categoryForFirstPass:(unsigned long long)a0;
+ (id)decodeConfigFileNDAPI:(id)a0 fromCategory:(id)a1;
+ (id)decodeConfigFileRecognizer:(id)a0 fromCategory:(id)a1;
+ (id)decodeConfigFrom:(id)a0 forFirstPassSource:(unsigned long long)a1;
+ (float)decodePreTriggerAudioTime:(id)a0 fromCategory:(id)a1;
+ (float)decodePrependingAudioTime:(id)a0 fromCategory:(id)a1;
+ (id)decodeQuasarCheckerResultCutOffCount:(id)a0 fromCategory:(id)a1;
+ (float)decodeTrailingAudioTime:(id)a0 fromCategory:(id)a1;
+ (BOOL)decodeUseKeywordSpotting:(id)a0 fromCategory:(id)a1;
+ (BOOL)decodeUseRecognizerCombination:(id)a0 fromCategory:(id)a1;
+ (id)decodeWearerDetectionConfig:(id)a0 fromCategory:(id)a1;
+ (BOOL)decodeuseTimeBasedTriggerLength:(id)a0 fromCategory:(id)a1;
+ (id)fetchAllVoiceTriggerSecondPassRecognizer:(id)a0;
+ (id)getDefaultRecognizerForB238;

@end
