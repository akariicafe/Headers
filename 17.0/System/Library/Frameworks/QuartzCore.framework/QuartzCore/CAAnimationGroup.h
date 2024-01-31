@class NSArray;

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray *animations;

- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (void)setDefaultDuration:(double)a0;

@end
