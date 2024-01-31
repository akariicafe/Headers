@class NSCache, NSString, NSArray, NTKInterpolatedColorPalette, UIView, NTKMonochromeModel, NTKFaceViewController, NTKGradientComposedView, NTKFace;

@interface NTKWhistlerSubdialsFaceView : NTKFaceView <NTKRichComplicationRectangularBaseViewDelegate, CLKMonochromeFilterProvider> {
    UIView *_timeViewContainerView;
    double _paletteTritiumFraction;
}

@property unsigned long long backgroundStyle;
@property (retain) NTKGradientComposedView *composedView;
@property (retain) NTKInterpolatedColorPalette *editingComplicationsPalette;
@property (readonly, nonatomic) NTKMonochromeModel *topFilterProvider;
@property (readonly, nonatomic) NTKMonochromeModel *centerFilterProvider;
@property (readonly, nonatomic) NTKMonochromeModel *bottomFilterProvider;
@property double monochromeFraction;
@property double scaleFactor;
@property double tintedFraction;
@property (readonly, nonatomic) NSCache *backgroundSwatchesCache;
@property (readonly, nonatomic) NSCache *styleSwatchesCache;
@property (readonly, nonatomic) NTKFace *swatchesFace;
@property (readonly, nonatomic) NTKFaceViewController *swatchesFaceViewController;
@property (readonly, nonatomic) NSArray *complicationPlaceholderViews;
@property (readonly, nonatomic) BOOL showGossamerUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_removeDialView;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyColorsFromPalette:(id)a0;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (void)_applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)_cleanupAfterEditing;
- (double)_complicationAlphaForEditMode:(long long)a0;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (id)_filterProviderForSlot:(id)a0;
- (double)_horizontalPaddingForStatusBar;
- (BOOL)_isAnalog;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (id)_paletteApplyingTritiumFractionToPalette:(id)a0;
- (void)_prepareForEditing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_relativeKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_renderDialSwatchImageForStyle:(unsigned long long)a0 colorOption:(id)a1;
- (void)_setupDialView;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (double)_timeViewAlphaForEditMode:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timeViewFrameRelativeToFaceView;
- (void)_unloadSnapshotContentViews;
- (double)_verticalPaddingForStatusBar;
- (BOOL)_wantsStatusBarIconShadow;
- (id)createFaceColorPalette;
- (id)dialView;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)loadComplicationPlaceholderViews;
- (void)rectangularViewDidBecomeInteractive:(id)a0;
- (void)rectangularViewDidEndInteractive:(id)a0;
- (void)updateMonochromeColorForRichComplicationView:(id)a0;
- (void)updateWithColorPalette:(id)a0;

@end
