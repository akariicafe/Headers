@class NSObject, FTPartialTextToSpeechStreamingResponse, FTBeginTextToSpeechStreamingResponse, FTStartTextToSpeechStreamingRequest, FTFinalTextToSpeechStreamingResponse;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableBlazarTextToSpeechRouterStreamingMessage : FTBlazarTextToSpeechRouterStreamingMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartTextToSpeechStreamingRequest *session_messageAsFTStartTextToSpeechStreamingRequest;
@property (copy, nonatomic) FTBeginTextToSpeechStreamingResponse *session_messageAsFTBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTPartialTextToSpeechStreamingResponse *session_messageAsFTPartialTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTFinalTextToSpeechStreamingResponse *session_messageAsFTFinalTextToSpeechStreamingResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end
