@class UIColor, UIView;

@interface MFComposeTextColorButton : UIButton

@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) UIView *colorRingView;
@property (retain, nonatomic) UIColor *color;

+ (id)buttonWithColor:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
