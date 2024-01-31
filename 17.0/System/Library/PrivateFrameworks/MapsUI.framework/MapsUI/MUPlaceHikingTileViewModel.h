@class NSString, GEOTrail;

@interface MUPlaceHikingTileViewModel : NSObject <MUPlaceTileViewModel>

@property (retain, nonatomic) GEOTrail *geoTrail;
@property (nonatomic) int hikingItemType;
@property (readonly, nonatomic) NSString *tileName;
@property (readonly, nonatomic) unsigned long long expectedNumberOfFooterLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)fetchBadgeIconWithCompletion:(id /* block */)a0;
- (void)fetchFallbackIconWithCompletion:(id /* block */)a0;
- (void)fetchImageTilewWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)footerAttributedStringForFont:(id)a0;
- (id)initWithGEOTrail:(id)a0 hikingItemType:(int)a1;
- (id)subtitleAttributedStringForFont:(id)a0;

@end
