@class UIBezierPath;

@interface SUBezierPathMaskProvider : SUMaskProvider

@property (retain, nonatomic) UIBezierPath *bezierPath;

- (void)dealloc;
- (struct CGPath { } *)copyPathForMaskWithSize:(struct CGSize { double x0; double x1; })a0;

@end
