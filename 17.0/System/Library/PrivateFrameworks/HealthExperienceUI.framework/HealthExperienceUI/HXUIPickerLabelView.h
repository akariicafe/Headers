@class UIColor, NSString, UIStackView, HXUILabelWithBackgroundView, UILabel;

@interface HXUIPickerLabelView : UIView {
    UILabel *_titleLabel;
    HXUILabelWithBackgroundView *_detailLabel;
    UIStackView *_stackView;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIColor *detailTextColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)getLabelFramesForSize:(struct CGSize { double x0; double x1; })a0 titleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 detailFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

@end
