@interface RCPDiscreteGestureSpec : NSObject

@property (nonatomic) BOOL isRotation;
@property (nonatomic) BOOL isScale;
@property (nonatomic) BOOL isTranslation;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

+ (id)translation:(struct CGPoint { double x0; double x1; })a0;
+ (id)scaleZ:(double)a0;
+ (id)rotationZ:(double)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
