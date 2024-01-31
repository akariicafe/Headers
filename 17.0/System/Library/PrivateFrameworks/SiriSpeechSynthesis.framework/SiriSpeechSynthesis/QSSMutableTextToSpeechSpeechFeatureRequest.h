@class QSSTextToSpeechSpeechFeatureModelIdentifier, NSString, QSSTextToSpeechSpeechFeatureInputWave, QSSTextToSpeechSpeechFeatureInputText;

@interface QSSMutableTextToSpeechSpeechFeatureRequest : QSSTextToSpeechSpeechFeatureRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) QSSTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (copy, nonatomic) QSSTextToSpeechSpeechFeatureInputText *text;
@property (copy, nonatomic) QSSTextToSpeechSpeechFeatureInputWave *wave_data;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
