@class UIColor, UIFont, UIVisualEffectView, UIView, CABasicAnimation;

@interface VKImageAnalysisButton : UIButton <UITraitChangeObservable>

@property (readonly, nonatomic) UIView *_backgroundView;
@property (readonly, nonatomic) UIView *_selectedBackgroundView;
@property (retain, nonatomic) UIView *_selectedBackgroundColorView;
@property (retain, nonatomic) UIVisualEffectView *_selectedBackgroundVisualEffectView;
@property (retain, nonatomic) UIVisualEffectView *_backgroundVisualEffectView;
@property (nonatomic) double _highlightedGlyphScaleFactor;
@property (retain, nonatomic) CABasicAnimation *_highlightedGlyphAnimation;
@property (nonatomic) BOOL didManuallySetBackgroundDiameter;
@property (retain, nonatomic) id traitChangeObserver;
@property (nonatomic) double glyphRotation;
@property (retain, nonatomic) UIColor *cameraModeBackgroundColor;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long glyphConfiguration;
@property (nonatomic) unsigned long long function;
@property (nonatomic) BOOL prefersDarkGlyphWhenSelected;
@property (nonatomic) double backgroundDiameter;
@property (nonatomic) BOOL supportsDynamicType;
@property (retain, nonatomic) UIFont *customSymbolFont;

- (void)setupForFunction:(unsigned long long)a0;
- (void)setHighlightedGlyphScaleFactor:(double)a0 animation:(id)a1;
- (id)_selectedIndicatorViewWithImage:(id)a0;
- (void)_updateForTraitCollection;
- (void)_updateBackgroundColors;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_glyphTransformForRotation:(double)a0 highlighted:(BOOL)a1;
- (void)setMaximumContentSizeCategory:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (double)_selectedIndicatorAlpha;
- (void)_commonVKImageAnalysisButtonInitialization;
- (void)_updateGlyph;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
