@class GEOMapItemPhotoOptions, NSMutableDictionary, NSString, geo_isolater, NSCache;

@interface MKPlaceCollectionImageProvider : NSObject <NSCacheDelegate>

@property (retain, nonatomic) geo_isolater *helperQueue;
@property (readonly, nonatomic) GEOMapItemPhotoOptions *optionsForCollectionCells;
@property (readonly, nonatomic) GEOMapItemPhotoOptions *optionsForCityBricks;
@property (retain, nonatomic) NSCache *gradientImagesCache;
@property (retain, nonatomic) NSCache *downloadedImagesCache;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) NSMutableDictionary *downloadOperationsPair;
@property (retain, nonatomic) NSMutableDictionary *gradientOperationsPair;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;
- (void)checkQueuesForCollectionSource:(long long)a0;
- (id)photoInfoWithPhoto:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1;
- (void)cancelAllOperationsForCompactImageSource:(long long)a0;
- (void)cancelAllOperationsForImageSource:(long long)a0;
- (void)checkQueuesForCompactCollectionSource:(long long)a0;
- (struct CGSize { double x0; double x1; })desiredSizeFromFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isJoeColorManuallyCuratedForCuratedCollection:(id)a0;
- (id)joeColorForCompactCollection:(id)a0 usingCarouselContext:(long long)a1;
- (id)joeColorForCuratedCollection:(id)a0;
- (void)loadCoverImageWithGuideLocation:(id)a0 size:(struct CGSize { double x0; double x1; })a1 usingImageSource:(long long)a2 completion:(id /* block */)a3;
- (void)loadGradientCoverImageWithCuratedCollection:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contentSizeCategory:(id)a2 usingImageSource:(long long)a3 completion:(id /* block */)a4;
- (id)photoInfoWithPhoto:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 usingOptions:(id)a2;
- (long long)photoTypeForImageSource:(long long)a0;
- (BOOL)requiresGradientOperationForSource:(long long)a0;

@end
