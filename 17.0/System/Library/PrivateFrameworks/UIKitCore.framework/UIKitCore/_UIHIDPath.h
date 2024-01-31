@class NSNumber;

@interface _UIHIDPath : NSObject

@property (readonly, nonatomic) NSNumber *pathId;
@property (readonly, nonatomic) unsigned int identity;
@property (readonly, nonatomic) double force;
@property (readonly, nonatomic) double minorRadius;
@property (readonly, nonatomic) double majorRadius;
@property (readonly, nonatomic) double quality;
@property (readonly, nonatomic) double density;
@property (readonly, nonatomic) double irregularity;
@property (readonly, nonatomic) double twist;
@property (readonly, nonatomic) long long generationCount;
@property (readonly, nonatomic, getter=isTouching) BOOL touching;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (retain, nonatomic) NSNumber *overridePathId;
@property (nonatomic) long long deliveryPhase;

- (id)init;
- (void).cxx_destruct;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)updateWithHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
