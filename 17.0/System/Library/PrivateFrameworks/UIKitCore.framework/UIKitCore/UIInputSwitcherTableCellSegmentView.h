@class UILabel, UIImageView, UIInputSwitcherTableCellBackgroundView;

@interface UIInputSwitcherTableCellSegmentView : UIView

@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL usesDarkTheme;
@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIInputSwitcherTableCellBackgroundView *backgroundView;

+ (id)_fontForBiasLabel;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
