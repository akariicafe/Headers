@class FTCancelRequest, FTFinishAudio, FTAudioPacket, NSObject, FTStartPronGuessRequest;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutablePronGuessStreamingRequest : FTPronGuessStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartPronGuessRequest *contentAsFTStartPronGuessRequest;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTCancelRequest *contentAsFTCancelRequest;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
