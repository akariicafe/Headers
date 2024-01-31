@class NSObject, FTTranslationResponse, FTStreamingTranslationRequest;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableMtStreamingTranslationMessage : FTMtStreamingTranslationMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStreamingTranslationRequest *session_messageAsFTStreamingTranslationRequest;
@property (copy, nonatomic) FTTranslationResponse *session_messageAsFTTranslationResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end
