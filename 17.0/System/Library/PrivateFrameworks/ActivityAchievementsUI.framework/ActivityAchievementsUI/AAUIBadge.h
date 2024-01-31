@interface AAUIBadge : ARUIAnimatableObject

@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) double rotationX;
@property (nonatomic) double rotationY;
@property (readonly, nonatomic) BOOL locksRotationY;
@property (nonatomic) double maxRotationY;

- (id)init;
- (id)_newAnimatablePropertyForType:(unsigned long long)a0;
- (void)addAnimation:(id)a0 forBadgePropertyType:(unsigned long long)a1;
- (void)removeAllAnimationsForBadgePropertyType:(unsigned long long)a0;

@end
