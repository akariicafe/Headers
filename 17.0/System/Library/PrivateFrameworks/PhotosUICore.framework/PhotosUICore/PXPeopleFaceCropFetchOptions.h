@class PHFace, NSString, PHAsset, PHPhotoLibrary, PHPerson;

@interface PXPeopleFaceCropFetchOptions : NSObject

@property (class, readonly, nonatomic) long long recommendedCornerStyleForCurrentAppConfiguration;

@property (readonly, nonatomic) struct CGSize { double width; double height; } clientTargetSize;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PHFace *face;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetPixelSize;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) long long cropFactor;
@property (nonatomic) long long cornerStyle;
@property (nonatomic) BOOL wantsFlippedContentsRect;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) BOOL isSynchronous;
@property (nonatomic) BOOL shouldCacheResult;
@property (nonatomic) BOOL wantsSmallFaceRect;
@property (nonatomic) BOOL useLowMemoryMode;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSString *cacheKey;

+ (id)_cropFactorStringForCropFactor:(long long)a0;
+ (id)_cornerStyleStringForCornerStyle:(long long)a0;
+ (id)_deliveryModeStringForDeliveryMode:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInitWithPerson:(id)a0 face:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 displayScale:(double)a3;
- (BOOL)areFetchParametersEqualtoFetchParametersOfOptions:(id)a0;
- (id)initWithFace:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2;
- (id)initWithPerson:(id)a0 face:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 displayScale:(double)a3;
- (id)initWithPerson:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2;

@end
