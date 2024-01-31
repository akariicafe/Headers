@class FTFinishAudio, FTResetServerEndpointer, NSObject, FTSetAlternateRecognitionSausage, FTAudioPacket, FTSetRequestOrigin, FTMultiUserStartSpeechRequest, FTSetSpeechProfile, FTSetEndpointerState, FTSetSpeechContext, FTUpdateAudioInfo;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableMultiUserStreamingRequest : FTMultiUserStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTMultiUserStartSpeechRequest *contentAsFTMultiUserStartSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (copy, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (copy, nonatomic) FTSetAlternateRecognitionSausage *contentAsFTSetAlternateRecognitionSausage;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
