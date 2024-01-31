@class PXMemoryCustomUserAssetsEdit;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

@interface PXStoryRecipeAssetEdits : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) PXMemoryCustomUserAssetsEdit *customUserAssetsEdit;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> userCuratedAssets;
@property (readonly, nonatomic) struct { long long kind; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } specificDurationInfo; } overallDurationInfo;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithCustomUserAssets:(id)a0;
- (id)copyWithKeyAsset:(id)a0;
- (id)copyWithOverallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a0 userCuratedAssets:(id)a1;
- (id)initWithKeyAsset:(id)a0 overallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a1 userCuratedAssets:(id)a2 customUserAssetsEdit:(id)a3;

@end
