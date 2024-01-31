@interface TSDPathSource : NSObject <TSDMixing, NSCopying>

@property BOOL hasHorizontalFlip;
@property BOOL hasVerticalFlip;

+ (id)pathSourceForShapeType:(int)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;

- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRectangular;
- (id)bezierPath;
- (id)bezierPathWithoutFlips;
- (id)interiorWrapPath;
- (BOOL)isRectangularForever;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pathFlipTransform;
- (Class)preferredControllerClass;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)valueForSetSelector:(SEL)a0;

@end
