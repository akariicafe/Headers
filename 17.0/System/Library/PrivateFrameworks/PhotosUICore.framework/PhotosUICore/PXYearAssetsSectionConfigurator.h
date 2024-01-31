@class PXYearAssetsSkimmingSectionHeaderLayoutSpec, PXYearAssetsSectionHeaderLayoutSpec;

@interface PXYearAssetsSectionConfigurator : PXCuratedLibraryCardSectionConfigurator {
    PXYearAssetsSkimmingSectionHeaderLayoutSpec *_skimmingHeaderSpec;
    PXYearAssetsSectionHeaderLayoutSpec *_normalHeaderSpec;
}

- (id)initWithExtendedTraitCollection:(id)a0 assetsSectionLayoutSpec:(id)a1;
- (void)configureAssetSectionLayout:(id)a0;
- (void).cxx_destruct;
- (id)createCardSpecWithExtendedTraitCollection:(id)a0;
- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;

@end
