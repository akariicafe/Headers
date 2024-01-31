@interface FBSOrientationUpdate : NSObject

@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) double duration;
@property (nonatomic) long long rotationDirection;

- (id)init;
- (id)initWithOrientation:(long long)a0 sequenceNumber:(unsigned long long)a1 duration:(double)a2 rotationDirection:(long long)a3;
- (id)description;

@end
