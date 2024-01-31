@class NSString;

@interface PXPhotosExternalSecondaryToolbarController : PXSecondaryToolbarController <PXSecondaryToolbarStyleGuideProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerView:(id)a0;
- (BOOL)secondaryToolbarControllerToolbarRenderedExternally:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })secondaryToolbarControllerToolbarContentInsets:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })secondaryToolbarControllerToolbarPadding:(id)a0;
- (long long)secondaryToolbarControllerToolbarPlacement:(id)a0;
- (struct CGSize { double x0; double x1; })secondaryToolbarControllerToolbarSize:(id)a0;
- (BOOL)secondaryToolbarControllerWantsToolbarVisible:(id)a0;

@end
