@class NSSet;
@protocol PXDisplayAssetCollection, PXStorySaliencyDataSource;

@interface PXStoryDefaultDisplayAssetCroppingContext : PXStoryBaseDisplayAssetCroppingContext

@property (readonly, nonatomic) NSSet *featuredPersonLocalIdentifiers;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) id<PXStorySaliencyDataSource> detailedSaliency;

- (id)init;
- (void).cxx_destruct;
- (id)adjustOrderedFaces:(id)a0 featuredFaceCount:(long long *)a1;
- (id)adjustOrderedFaces:(id)a0 featuredFaceCount:(long long *)a1 forFeaturedPersonWithLocalIdentifiers:(id)a2;
- (id)cropContentRectsForMultipartPanoramaAsset:(id)a0 axis:(long long)a1 cropContentsRectsApectRatio:(double)a2;
- (id)initWithAssetCollection:(id)a0 detailedSaliency:(id)a1;
- (id)orderFaces:(id)a0;

@end
