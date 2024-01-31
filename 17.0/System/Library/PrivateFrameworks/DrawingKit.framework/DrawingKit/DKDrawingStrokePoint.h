@interface DKDrawingStrokePoint : NSObject <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) double force;
@property (nonatomic) double velocity;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
