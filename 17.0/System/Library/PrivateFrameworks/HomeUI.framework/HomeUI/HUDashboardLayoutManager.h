@interface HUDashboardLayoutManager : HUCollectionLayoutManager {
    void /* unknown type, empty encoding */ adaptiveTileDragInteractionLayouts;
    void /* unknown type, empty encoding */ hoveringGridPosition;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)generateCameraLayoutOptionsFor:(id)a0;
- (id)buildCamerasMosaicSectionFor:(id)a0 layoutEnvironment:(id)a1 cameraLayoutOptions:(id)a2;
- (id)buildNowPlayingSectionFor:(id)a0 sectionIdentifier:(id)a1 :(id)a2;
- (id)buildResponsiveGridCamerasSectionFor:(id)a0 layoutEnvironment:(id)a1 cameraLayoutOptions:(id)a2;
- (id)buildSectionWithIdentifier:(id)a0 context:(id)a1 layoutEnvironment:(id)a2;
- (id)configurationWithContext:(id)a0 traitCollection:(id)a1;
- (struct HUGridSize { long long x0; long long x1; })favoritesSectionGridSize;
- (BOOL)isAdaptiveTileStyleInSectionIdentifier:(id)a0 context:(id)a1;
- (void)registerSectionDecorationViewsWithLayout:(id)a0;

@end
