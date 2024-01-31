@class NSDate, NSString, CLKUIColoringLabel, UIView, CLKDevice, UIImageView, CLKUICurvedColoringLabel, UIColor;
@protocol CDComplicationDisplayObserver, CDComplicationImageView, CLKMonochromeFilterProvider, NTKUtilityFlatComplicationViewDelegate;

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView <CLKMonochromeFilterProvider, NTKUtilityFlatComplicationView, CLKMonochromeComplicationView> {
    CLKUICurvedColoringLabel *_curvedLabel;
    UIImageView *_curvedHighlightView;
    CLKUIColoringLabel *_activeLabel;
}

@property (nonatomic) double circleRadius;
@property (nonatomic) double maxAngularWidth;
@property (retain, nonatomic) UIView<CDComplicationImageView> *imageView;
@property (retain, nonatomic) CLKUIColoringLabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKUtilityFlatComplicationViewDelegate> delegate;
@property (readonly, nonatomic) double textWidthInRadians;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIColor *accentColor;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double foregroundImageAlpha;
@property (nonatomic) BOOL useRoundedFontDesign;
@property (nonatomic) double fontWeight;
@property (nonatomic) double fontSize;
@property (nonatomic) BOOL usesLegibility;
@property (nonatomic) BOOL useAlternativePunctuation;
@property (nonatomic) unsigned long long placement;
@property (nonatomic) BOOL shouldUseBackgroundPlatter;
@property (nonatomic) BOOL alwaysEnforcePlatterInset;
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) BOOL useBlockyHighlightCorners;
@property (nonatomic) BOOL shouldScaleAndFadeWhenHighlighting;
@property (nonatomic) double editingRotationAngle;
@property (nonatomic) BOOL suppressesInternalColorOverrides;
@property (weak, nonatomic) id<CDComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

+ (void)circleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 interior:(BOOL *)a3 forPlacement:(unsigned long long)a4 forDevice:(id)a5;
+ (BOOL)handlesComplicationTemplate:(id)a0;

- (unsigned long long)imagePlacement;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_backgroundPlatterImage;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)a0;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)a0;
- (BOOL)_shouldLayoutWithImageView;
- (void)_updateContentForMaxSizeChange;
- (void)_updateForTemplateChange;
- (void)_updateHighlightViewCornerRadius;
- (void)_updateLabelMaxWidth;
- (double)_widthThatFits;
- (struct CGSize { double x0; double x1; })boundingSizeOfCurrentComplicationTemplate;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)filtersForView:(id)a0 style:(long long)a1;
- (id)filtersForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (void)setTextWidthInRadians:(double)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)updateTextWidthIfNeeded;

@end
