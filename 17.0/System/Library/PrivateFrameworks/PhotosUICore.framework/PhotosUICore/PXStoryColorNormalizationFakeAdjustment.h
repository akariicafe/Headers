@class PFStoryRecipeDisplayAssetNormalization;

@interface PXStoryColorNormalizationFakeAdjustment : PXStoryColorNormalizationAdjustment

@property (class, readonly) PFStoryRecipeDisplayAssetNormalization *fakeNormalization;

- (id)init;
- (id)adjustmentSummary;

@end
