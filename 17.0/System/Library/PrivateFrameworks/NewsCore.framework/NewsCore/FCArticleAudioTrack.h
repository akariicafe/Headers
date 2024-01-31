@class FCContentArchive, FCAVAsset;

@interface FCArticleAudioTrack : NSObject <NSCopying, FCContentArchivable>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) FCAVAsset *asset;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double embeddedUpsellStartTime;
@property (readonly, nonatomic) double embeddedUpsellEndTime;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (id)init;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0 asset:(id)a1 duration:(double)a2 embeddedUpsellStartTime:(double)a3 embeddedUpsellEndTime:(double)a4;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 asset:(id)a1 duration:(double)a2;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
