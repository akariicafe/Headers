@class NSString, PXExtendedTraitCollection;

@interface PXCuratedLibraryStyleGuide : PXObservable <PXChangeObserver>

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic) double lateralMargin;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long secondaryToolbarPlacement;
@property (nonatomic) struct CGSize { double width; double height; } secondaryToolbarSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } secondaryToolbarContentInsets;
@property (nonatomic) long long toggleAspectFitButtonPlacement;
@property (nonatomic) long long zoomButtonsButtonPlacement;
@property (nonatomic) BOOL secondaryToolbarRenderedExternally;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } secondaryToolbarPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_update;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidate;
- (id)initWithExtendedTraitCollection:(id)a0;
- (void).cxx_destruct;

@end
