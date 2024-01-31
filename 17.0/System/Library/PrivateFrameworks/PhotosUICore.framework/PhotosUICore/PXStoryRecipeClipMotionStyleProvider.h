@class PXStoryConfiguration, PFStoryAutoEditFrequencyTable, PFStoryAutoEditConfiguration;
@protocol PFRandomNumberGenerator;

@interface PXStoryRecipeClipMotionStyleProvider : NSObject {
    PFStoryAutoEditFrequencyTable *_frequencyTable;
    PFStoryAutoEditFrequencyTable *_diptychFrequencyTable;
    PFStoryAutoEditFrequencyTable *_triptychFrequencyTable;
    id<PFRandomNumberGenerator> _randomNumberGenerator;
}

@property (readonly, nonatomic) PFStoryAutoEditConfiguration *configuration;
@property (readonly, nonatomic) PXStoryConfiguration *storyConfiguration;

- (id)init;
- (void).cxx_destruct;
- (long long)_nextMotionStyleForDisplayAssetCount:(long long)a0 excluding:(id)a1;
- (id)initWithConfiguration:(id)a0 colorGradeCategory:(id)a1 songPace:(long long)a2 randomNumberGenerator:(id)a3 storyConfiguration:(id)a4;
- (struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })nextMotionInfoForDisplayAssetCount:(long long)a0 displayAssets:(id)a1;
- (struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })nextMotionInfoForDisplayAssetCount:(long long)a0 displayAssets:(id)a1 excluding:(id)a2;
- (struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })nextMotionInfoForModuleExcludingMomentMotion:(long long)a0 previousModuleMotion:(long long)a1 displayAssets:(id)a2;
- (void)provideMotionStylesForMomentClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withClipCatalog:(id)a1 usingBlock:(id /* block */)a2;
- (struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })updatedMotionForPortraitAspectAsset:(id)a0 motionInfo:(struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })a1;

@end
