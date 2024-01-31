@class NSString, NSArray, NSMutableDictionary, MTCoreMaterialVisualStylingProvider;

@interface _MTStaticVisualStylingMaterialView : MTMaterialView <MTCoreMaterialVisualStylingProviderObserving, MTVisualStylingRequiring> {
    NSString *_recipeName;
    NSMutableDictionary *_visualStyleCategoriesToCoreMaterialProviders;
    MTCoreMaterialVisualStylingProvider *_contentVisualStylingProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (Class)layerClass;

- (BOOL)isBlurEnabled;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setZoomEnabled:(BOOL)a0;
- (BOOL)isZoomEnabled;
- (id)_materialLayer;
- (void)setCaptureOnly:(BOOL)a0;
- (void)setRecipe:(long long)a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setBlurEnabled:(BOOL)a0;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)a0;
- (BOOL)shouldCrossfade;
- (BOOL)ignoresScreenClip;
- (id)recipeName;
- (void)didMoveToSuperview;
- (void)setContentReplacedWithSnapshot:(BOOL)a0;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)a0;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (void)_invalidateContentVisualStyling;
- (id)_initWithCoreMaterialRecipe:(id)a0 fromBundle:(id)a1 options:(unsigned long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;
- (void)_updateContentVisualStylingWithProvider:(id)a0;
- (void)_updateContentVisualStylingIfNecessary;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (void)setShouldCrossfade:(BOOL)a0;
- (void)setBackdropScaleAdjustment:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)a0;
- (id /* block */)backdropScaleAdjustment;
- (void)_setCoreMaterialVisualStylingProvider:(id)a0 ForCategory:(id)a1;
- (void)setIgnoresScreenClip:(BOOL)a0;
- (void)layoutSubviews;
- (void)setRecipeName:(id)a0;
- (void)_updateCoreMaterialVisualStylingProviders;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (BOOL)isCaptureOnly;
- (BOOL)isContentReplacedWithSnapshot;

@end
