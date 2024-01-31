@interface TSDMutableReflection : TSDReflection

@property (nonatomic) double opacity;
@property (nonatomic) double fadeAcceleration;

- (void)setOpacity:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFadeAcceleration:(double)a0;

@end
