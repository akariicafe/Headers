@class BSUIEmojiLabelView, NSString, MPUMarqueeView, UIColor, UIView, UIFont;

@interface MRUMarqueeLabel : UIView

@property (readonly, nonatomic) BSUIEmojiLabelView *label;
@property (retain, nonatomic) MPUMarqueeView *marqueeView;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (weak, nonatomic) UIView *animationReferenceView;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fadeEdgeInsets;
@property (nonatomic) double contentGap;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL wantsContentAwareTypesettingLanguage;
@property (nonatomic) long long sizingRule;

- (void)mt_applyVisualStyling:(id)a0;
- (void)addCoordinatedMarqueeView:(id)a0;
- (id)viewForFirstBaselineLayout;
- (void)mru_applyVisualStylingWithColor:(id)a0 alpha:(double)a1 blendMode:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
