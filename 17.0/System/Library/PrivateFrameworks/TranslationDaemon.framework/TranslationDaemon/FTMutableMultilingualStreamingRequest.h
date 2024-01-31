@class NSObject, FTStartMultilingualSpeechRequest, FTAudioPacket, FTFinishAudio, FTSetRequestOrigin, FTSetSpeechProfile, FTUpdateAudioInfo, FTSetSpeechContext, FTLanguageDetected;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableMultilingualStreamingRequest : FTMultilingualStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartMultilingualSpeechRequest *contentAsFTStartMultilingualSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
