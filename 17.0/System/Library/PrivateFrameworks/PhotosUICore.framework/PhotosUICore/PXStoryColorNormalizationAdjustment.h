@class NSString, PFStoryRecipeDisplayAssetNormalization, PIColorNormalizationFilter, NSData;

@interface PXStoryColorNormalizationAdjustment : NSObject <PXGDisplayAssetAdjustment> {
    NSData *_colorCubeData;
}

@property (readonly, nonatomic) PIColorNormalizationFilter *filter;
@property (readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *normalization;
@property (nonatomic) BOOL useFalseColor;
@property (nonatomic) BOOL useColorCube;
@property (nonatomic) double intensity;
@property (readonly, nonatomic) NSString *adjustmentSummary;
@property (readonly, nonatomic) NSString *adjustmentDetails;
@property (readonly, nonatomic) BOOL allowsUnadjustedOpportunisticDelivery;
@property (readonly, nonatomic) BOOL wantsSingleHighQualityDelivery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dummyAdjustment;
+ (id)_falseColorMatrixParameters;
+ (id)autoAdjustmentForAsset:(id)a0;
+ (id)colorCubeForNormalization:(id)a0 targetColorSpace:(struct CGColorSpace { } *)a1;
+ (id)dummyNormalization;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applyToImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (long long)contentModeForProposedContentMode:(long long)a0;
- (id)initWithNormalization:(id)a0;
- (id)initWithNormalizationFilter:(id)a0;
- (BOOL)isEqualToDisplayAssetAdjustment:(id)a0;
- (struct CGSize { double x0; double x1; })requestSizeForProposedTargetSize:(struct CGSize { double x0; double x1; })a0;

@end
