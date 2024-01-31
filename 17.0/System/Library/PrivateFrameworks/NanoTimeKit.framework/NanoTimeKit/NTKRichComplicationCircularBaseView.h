@class UIColor, UIView;

@interface NTKRichComplicationCircularBaseView : CDRichComplicationTemplateView <NTKRichComplicationCircularView> {
    double _editingRotationInDegree;
}

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *framingView;
@property (nonatomic) long long position;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic) BOOL accentedAlternateBackground;

+ (id)viewWithLegacyComplicationType:(unsigned long long)a0;
+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (id)keylineImageWithFilled:(BOOL)a0 forDevice:(id)a1;
+ (id)keylineImageWithFilled:(BOOL)a0 wide:(BOOL)a1 expanded:(BOOL)a2 forDevice:(id)a3;
+ (id)keylineViewForDevice:(id)a0;
+ (id)keylineViewForDevice:(id)a0 wide:(BOOL)a1 expanded:(BOOL)a2;
+ (id)layoutRuleForState:(long long)a0 viewCenterInFaceBounds:(struct CGPoint { double x0; double x1; })a1 position:(long long)a2 editingAdjustment:(long long)a3 wide:(BOOL)a4 forDevice:(id)a5;
+ (id)layoutRuleForState:(long long)a0 viewCenterInFaceBounds:(struct CGPoint { double x0; double x1; })a1 position:(long long)a2 forDevice:(id)a3;
+ (BOOL)supportsComplicationFamily:(long long)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForState:(long long)a0;
+ (void)updateCustomDataAnimationFromEarlierView:(id)a0 laterView:(id)a1 isForward:(BOOL)a2 animationType:(unsigned long long)a3 animationDuration:(double)a4 animationFraction:(float)a5;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (unsigned long long)_adjustFontSizeForLabel:(id)a0 fontWeight:(double)a1 possibleMaxWidths:(id)a2 possibleFontSizes:(id)a3;
- (double)_contentDiameter;
- (id)_createAndAddColoringLabel;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)a0 direction:(long long)a1 position:(long long)a2 type:(long long)a3;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)a0 direction:(long long)a1 position:(long long)a2;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;
- (void)_updatePlatterColor;
- (void)makeBackgroundTransparent;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
