@interface CABasicAnimation : CAPropertyAnimation

@property BOOL roundsToInteger;
@property double startAngle;
@property double endAngle;
@property (retain) id fromValue;
@property (retain) id toValue;
@property (retain) id byValue;

- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (double)_timeFunction:(double)a0;

@end
