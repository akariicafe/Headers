@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray *values;
@property struct CGPath { } *path;
@property (copy) NSArray *keyTimes;
@property (copy) NSArray *timingFunctions;
@property (copy) NSString *calculationMode;
@property (copy) NSArray *tensionValues;
@property (copy) NSArray *continuityValues;
@property (copy) NSArray *biasValues;
@property (copy) NSString *rotationMode;

- (BOOL)CA_validateValue:(id)a0 forKey:(id)a1;
- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void *)_copyRenderAnimationForLayer:(id)a0;

@end
