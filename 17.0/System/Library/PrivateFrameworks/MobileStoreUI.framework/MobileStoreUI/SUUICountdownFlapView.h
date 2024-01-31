@class UIColor, NSString, UIImageView, UIView, UILabel;

@interface SUUICountdownFlapView : UIImageView {
    UIView *_backgroundViewBot;
    UIView *_backgroundViewTop;
    UIImageView *_backgroundViewTransitionBot;
    UIImageView *_backgroundViewTransitionTop;
    double _factor;
    UILabel *_labelBot;
    UILabel *_labelTop;
    UILabel *_labelTransitionBot;
    UILabel *_labelTransitionTop;
}

@property (readonly, nonatomic) long long position;
@property (readonly, nonatomic) UIColor *flapTopColor;
@property (readonly, nonatomic) UIColor *flapBottomColor;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) UIColor *textColor;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_newLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_newBackgroundImageForTop:(int)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForAngle:(double)a0 isTop:(BOOL)a1;
- (id)initWithPosition:(long long)a0 flapTopColor:(id)a1 flapBottomColor:(id)a2;

@end
