@class FTLanguageDetectionResponse, FTStartLanguageDetectionRequest, FTAudioPacket, FTFinishAudio, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableSlsLanguageDetectionMessage : FTSlsLanguageDetectionMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartLanguageDetectionRequest *session_messageAsFTStartLanguageDetectionRequest;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetectionResponse *session_messageAsFTLanguageDetectionResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end
