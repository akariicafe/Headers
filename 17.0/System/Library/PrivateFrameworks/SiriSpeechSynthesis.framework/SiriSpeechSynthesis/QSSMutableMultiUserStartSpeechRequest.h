@class QSSStartSpeechRequest, NSArray, NSString;

@interface QSSMutableMultiUserStartSpeechRequest : QSSMultiUserStartSpeechRequest

@property (copy, nonatomic) QSSStartSpeechRequest *start_speech_request;
@property (copy, nonatomic) NSArray *user_parameters;
@property (copy, nonatomic) NSString *primary_speech_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
