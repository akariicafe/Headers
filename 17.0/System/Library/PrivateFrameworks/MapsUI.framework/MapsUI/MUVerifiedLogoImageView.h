@class UIColor, CAShapeLayer;

@interface MUVerifiedLogoImageView : MUImageView {
    CAShapeLayer *_innerRingLayer;
}

@property (readonly, nonatomic) UIColor *outerRingColor;
@property (readonly, nonatomic) UIColor *innerRingColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateRingColors;
- (void)_setupCustomBorder;
- (void)_updateInnerRingFrame;

@end
