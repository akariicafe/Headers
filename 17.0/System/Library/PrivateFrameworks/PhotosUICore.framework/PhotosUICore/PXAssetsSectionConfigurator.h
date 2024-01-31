@class PXAssetsSectionLayoutSpec;

@interface PXAssetsSectionConfigurator : NSObject {
    PXAssetsSectionLayoutSpec *_assetsSectionLayoutSpec;
}

@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) PXAssetsSectionLayoutSpec *assetsSectionLayoutSpec;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInsets;

- (struct CGSize { double x0; double x1; })estimatedSizeOfSectionForAssetCollection:(id)a0 isCurated:(BOOL)a1 numberOfAssets:(long long)a2 referenceSize:(struct CGSize { double x0; double x1; })a3;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)a0 assetsSectionLayoutSpec:(id)a1;
- (void)configureAssetSectionLayout:(id)a0;
- (id)updatedHeaderLayout:(id)a0 withHeaderStyle:(long long)a1 forAssetSectionLayout:(id)a2;
- (BOOL)supportsAspectRatioToggle;
- (void).cxx_destruct;
- (long long)numberOfZoomStepsWithDataSource:(id)a0;
- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;
- (long long)initialZoomStep;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrameForAssetSectionLayout:(id)a0;

@end
