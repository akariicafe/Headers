@class PXCuratedLibraryViewModel, NSString, PXCuratedLibraryStyleGuide;

@interface PXCuratedLibrarySecondaryToolbarController : PXSecondaryToolbarController <PXChangeObserver, PXSecondaryToolbarStyleGuideProvider>

@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)secondaryToolbarControllerToolbarRenderedExternally:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })secondaryToolbarControllerToolbarContentInsets:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainerView:(id)a0 viewModel:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })secondaryToolbarControllerToolbarPadding:(id)a0;
- (long long)secondaryToolbarControllerToolbarPlacement:(id)a0;
- (struct CGSize { double x0; double x1; })secondaryToolbarControllerToolbarSize:(id)a0;
- (BOOL)secondaryToolbarControllerWantsToolbarVisible:(id)a0;

@end
