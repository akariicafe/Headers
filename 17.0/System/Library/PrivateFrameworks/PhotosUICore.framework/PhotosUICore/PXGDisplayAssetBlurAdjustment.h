@class NSString;

@interface PXGDisplayAssetBlurAdjustment : NSObject <PXGDisplayAssetAdjustment>

@property (readonly, nonatomic) double blurRadius;
@property (readonly, nonatomic) double darkeningOverlayOpacity;
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
- (id)initWithBlurRadius:(double)a0 darkeningOverlayOpacity:(double)a1;
- (BOOL)isEqualToDisplayAssetAdjustment:(id)a0;
- (struct CGSize { double x0; double x1; })requestSizeForProposedTargetSize:(struct CGSize { double x0; double x1; })a0;

@end
