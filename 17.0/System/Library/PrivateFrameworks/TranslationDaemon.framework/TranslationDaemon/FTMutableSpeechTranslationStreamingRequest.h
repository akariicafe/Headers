@class NSObject, FTSpeechTranslationAudioPacket, FTAudioPacket, FTFinishAudio, FTLanguageDetected, FTResetServerEndpointer, FTSetEndpointerState, FTStartSpeechTranslationLoggingRequest, FTStartSpeechTranslationRequest;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableSpeechTranslationStreamingRequest : FTSpeechTranslationStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property (copy, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (copy, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (copy, nonatomic) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
