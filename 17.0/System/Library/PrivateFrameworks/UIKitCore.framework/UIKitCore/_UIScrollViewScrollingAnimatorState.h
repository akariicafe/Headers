@interface _UIScrollViewScrollingAnimatorState : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) struct CGPoint { double x; double y; } maximumVelocity;
@property (nonatomic) struct CGPoint { double x; double y; } force;
@property (nonatomic) unsigned long long granularity;
@property (nonatomic) unsigned long long direction;

@end
