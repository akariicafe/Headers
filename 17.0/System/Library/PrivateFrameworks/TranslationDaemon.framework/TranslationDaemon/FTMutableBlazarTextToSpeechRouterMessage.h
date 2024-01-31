@class FTTextToSpeechResponse, FTTextToSpeechRequest, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableBlazarTextToSpeechRouterMessage : FTBlazarTextToSpeechRouterMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTTextToSpeechRequest *session_messageAsFTTextToSpeechRequest;
@property (copy, nonatomic) FTTextToSpeechResponse *session_messageAsFTTextToSpeechResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end
