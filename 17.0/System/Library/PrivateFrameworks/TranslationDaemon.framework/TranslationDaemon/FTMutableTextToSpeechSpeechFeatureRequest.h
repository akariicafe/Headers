@class NSString, NSArray, FTTextToSpeechSpeechFeatureInputText, FTTextToSpeechSpeechFeatureInputWave, FTTextToSpeechSpeechFeatureModelIdentifier;

@interface FTMutableTextToSpeechSpeechFeatureRequest : FTTextToSpeechSpeechFeatureRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputText *text;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;
@property (copy, nonatomic) NSArray *lexicon;
@property (nonatomic) BOOL support_homograph;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
