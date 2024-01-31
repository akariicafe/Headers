@class CALayer, UIBezierPath, CAShapeLayer;

@interface TVRUIPageButton : TVRUIButton

@property (retain, nonatomic) CAShapeLayer *leftWing;
@property (retain, nonatomic) CAShapeLayer *rightWing;
@property (retain, nonatomic) CALayer *contentLayer;
@property (retain, nonatomic) UIBezierPath *wingPath;

- (void)_updateLayers;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupSublayers;
- (struct CGPath { } *)_newScaledPathForPath:(struct CGPath { } *)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithType:(long long)a0 hasTapAction:(BOOL)a1;
- (id)newChevronWingLayer;

@end
