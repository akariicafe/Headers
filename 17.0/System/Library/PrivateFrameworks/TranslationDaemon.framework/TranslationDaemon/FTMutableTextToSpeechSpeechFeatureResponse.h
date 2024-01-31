@class NSString, NSArray;

@interface FTMutableTextToSpeechSpeechFeatureResponse : FTTextToSpeechSpeechFeatureResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSArray *features;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
