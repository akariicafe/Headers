@class NSMutableDictionary;

@interface HFAccessorySettingFormatterFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *formattersForKey;

+ (id)defaultFactory;
+ (id)_announceEnabledFormatter;
+ (id)_audioAnalysisEnabledFormatter;
+ (id)_doorbellChimeEnabledFormatter;
+ (id)_siriFormatter;
+ (id)_siriOutputVoiceFormatter;
+ (id)_siriPersonalRequestsFormatter;
+ (id)_siriRecognitionLanguageFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)formatterForKey:(id)a0;
- (id)_buildFormatterForKey:(id)a0;
- (id)formatterForKey:(id)a0 copy:(BOOL)a1;

@end
