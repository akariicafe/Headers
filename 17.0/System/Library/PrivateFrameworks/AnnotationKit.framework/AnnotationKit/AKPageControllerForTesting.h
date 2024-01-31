@class AKLayerPresentationManager, AKController, AKGeometryHelper, UIView, AKPageModelController;

@interface AKPageControllerForTesting : AKPageController

@property (retain) AKController *testingController;
@property unsigned long long testingPageIndex;
@property (retain) AKPageModelController *testingPageModelController;
@property (retain) AKLayerPresentationManager *testingLayerPresentationManager;
@property (retain) AKGeometryHelper *testingGeometryHelper;
@property (retain) UIView *testingOverlayView;

- (id)controller;
- (id)init;
- (id)overlayView;
- (void).cxx_destruct;
- (unsigned long long)pageIndex;
- (struct CGPoint { double x0; double x1; })convertPointFromModelToOverlay:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointFromOverlayToModel:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromModelToOverlay:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromOverlayToModel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)geometryHelper;
- (id)layerPresentationManager;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPageRect;
- (double)modelBaseScaleFactor;
- (id)pageModelController;

@end
