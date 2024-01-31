@interface ASVSnapDeceleration : ASVDeceleration

@property (nonatomic) float currentOffset;
@property (nonatomic) float minOffset;
@property (nonatomic) float maxOffset;

- (void)calculateSnapFromStartingOffset:(float)a0 startingVelocity:(float)a1 deltaTime:(float)a2 outOffset:(float *)a3 outVelocity:(float *)a4;
- (float)decelerationDelta;
- (id)initWithVelocity:(float)a0 minEndDelta:(float)a1 startingOffset:(float)a2 minOffset:(float)a3 maxOffset:(float)a4;

@end
