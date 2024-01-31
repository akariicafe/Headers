@class PXDayAssetsSectionBodyLayoutSpec, PXAssetsSectionBodyAllPhotosGridLayoutSpec, PXDayAssetsSectionHeaderLayoutSpec;

@interface PXDayAssetsSectionConfigurator : PXAssetsSectionConfigurator {
    PXDayAssetsSectionHeaderLayoutSpec *_floatingHeaderSpec;
    PXAssetsSectionBodyAllPhotosGridLayoutSpec *_allPhotosGridBodySpec;
    PXDayAssetsSectionBodyLayoutSpec *_daysBodySpec;
}

- (struct CGSize { double x0; double x1; })estimatedSizeOfSectionForAssetCollection:(id)a0 isCurated:(BOOL)a1 numberOfAssets:(long long)a2 referenceSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithExtendedTraitCollection:(id)a0 assetsSectionLayoutSpec:(id)a1;
- (void)configureAssetSectionLayout:(id)a0;
- (id)_bodySpecForBodyStyle:(long long)a0 zoomLevel:(long long)a1;
- (void)_getHeaderAndBodyStylesForAssetCollection:(id)a0 isCurated:(BOOL)a1 zoomLevel:(long long)a2 headerStyle:(long long *)a3 bodyStyle:(long long *)a4;
- (void).cxx_destruct;
- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;
- (void)_configureSelectAllButtonOfSectionLayout:(id)a0;

@end
