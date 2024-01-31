@class NSString;

@interface PXStorySmartGradientAdjustment : NSObject <PXGDisplayAssetAdjustment>

@property (nonatomic) BOOL useSmartColor;
@property (nonatomic) BOOL useSimpleBlur;
@property (nonatomic) double simpleBlurRadius;
@property (nonatomic) double simpleBlurExposure;
@property (nonatomic) BOOL simpleBlurRepeatEdges;
@property (nonatomic) double simpleBlurEdgeStretch;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedSourceRect;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) BOOL allowsUnadjustedOpportunisticDelivery;
@property (readonly, nonatomic) BOOL wantsSingleHighQualityDelivery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applyToImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (long long)contentModeForProposedContentMode:(long long)a0;
- (BOOL)isEqualToDisplayAssetAdjustment:(id)a0;
- (struct CGSize { double x0; double x1; })requestSizeForProposedTargetSize:(struct CGSize { double x0; double x1; })a0;

@end
