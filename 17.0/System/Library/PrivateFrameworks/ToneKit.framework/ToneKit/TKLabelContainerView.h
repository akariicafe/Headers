@class UIFont, NSString, UIColor, UILabel;

@interface TKLabelContainerView : UIView {
    UILabel *_label;
}

@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *labelTextColor;
@property (retain, nonatomic) UIColor *labelShadowColor;
@property (nonatomic) struct UIOffset { double x0; double x1; } labelShadowOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelPaddingInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
