@class MKMultiPartAttributedString, _MKMultiPartLabelMetrics, NSString, UIFont, UIColor, UITextView, NSDictionary;

@interface MKMultiPartLabel : UIView {
    UITextView *_textView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousBounds;
    NSDictionary *_cachedTextAttributes;
    NSDictionary *_lastAppliedNonColorAttributes;
}

@property (retain, nonatomic) _MKMultiPartLabelMetrics *data;
@property (retain, nonatomic) MKMultiPartAttributedString *multiPartString;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textInset;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

+ (id)_formattedStringsCache;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_textAttributes;
- (void)setContentCompressionResistancePriority:(float)a0 forAxis:(long long)a1;
- (void)setContentHuggingPriority:(float)a0 forAxis:(long long)a1;
- (void)_updateStrings;
- (id)_addDefaultAttributesToAttributedString:(id)a0;
- (id)_attributedAdjustedMultiPartStringFromString:(id)a0;
- (void)_setupTextView;
- (void)_updateColorsForCurrentState;
- (void)_updateTextViewTextAndInvalidateLayout:(id)a0;

@end
