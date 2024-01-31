@class UIColor, NSString, UIFont, UILabel;

@interface SUTableHeaderView : UIView {
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIColor *bottomBorderColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *textColor;

- (void)dealloc;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
