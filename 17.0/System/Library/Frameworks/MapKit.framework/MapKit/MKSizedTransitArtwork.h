@class MKArtworkDataSourceCache, NSString;
@protocol GEOTransitArtworkDataSource;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource>

@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly, nonatomic) long long shieldSize;
@property (readonly, nonatomic) long long fallbackShieldSize;
@property (retain, nonatomic) MKArtworkDataSourceCache *artworkCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)badgeImageToDisplayWithScreenScale:(double)a0 nightMode:(BOOL)a1;
- (id)imageToDisplayWithScreenScale:(double)a0 nightMode:(BOOL)a1;
- (id)initWithArtwork:(id)a0 shieldSize:(long long)a1;
- (id)initWithArtwork:(id)a0 shieldSize:(long long)a1 artworkCache:(id)a2;
- (id)initWithArtwork:(id)a0 shieldSize:(long long)a1 fallbackShieldSize:(long long)a2 artworkCache:(id)a3;
- (BOOL)isEqualToTransitArtworkViewMode:(id)a0;

@end
