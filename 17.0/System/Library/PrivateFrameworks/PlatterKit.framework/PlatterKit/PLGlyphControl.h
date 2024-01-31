@class NSString, UIImageView, UIImage, NSArray, MTVisualStylingProvider, MTMaterialView;

@interface PLGlyphControl : UIControl <MTMaterialGrouping, MTVisualStylingRequiring> {
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (readonly, nonatomic, getter=_glyphView) UIImageView *glyphView;
@property (readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView;
@property (retain, nonatomic, getter=_glyphView) UIImageView *glyphView;
@property (retain, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView;
@property (copy, nonatomic) UIImage *glyph;
@property (readonly, nonatomic) long long materialRecipe;
@property (nonatomic) long long visualStyle;
@property (nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (id)dismissControlWithMaterialRecipe:(long long)a0;

- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setHighlighted:(BOOL)a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)_handleTouchUpInsideWithEvent:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_removeAllVisualStyling;
- (double)_cornerRadius;
- (void).cxx_destruct;
- (void)_updateVisualStylingOfView:(id)a0;
- (void)_configureGlyphViewIfNecessaryWithImage:(id)a0;
- (void)layoutSubviews;
- (void)_configureMaterialViewIfNecessary:(id *)a0 positioningAtIndex:(unsigned long long)a1;
- (void)_sendActionsForEvents:(unsigned long long)a0 withEvent:(id)a1;
- (void)_removeVisualStylingOfView:(id)a0;
- (void)_updateAllVisualStyling;
- (id)initWithMaterialRecipe:(long long)a0;
- (void)_updateGlyphViewVisualStyling;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
