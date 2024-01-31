@class PKPhysicsBody;

@interface SUUICircleRepellor : NSObject

@property (nonatomic) double bufferSize;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (retain, nonatomic) PKPhysicsBody *physicsBody;
@property (nonatomic) double radius;

- (id)description;
- (void).cxx_destruct;

@end
