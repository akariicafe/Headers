@class SKUIColorScheme, NSString, UIColor, UILabel, UIView;

@interface SKUIProductPageTableExpandableHeaderView : UIControl {
    UILabel *_actionLabel;
    UIView *_bottomBorderView;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

@property (copy, nonatomic) NSString *actionString;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) UIColor *bottomBorderColor;
@property (copy, nonatomic) UIColor *topBorderColor;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
