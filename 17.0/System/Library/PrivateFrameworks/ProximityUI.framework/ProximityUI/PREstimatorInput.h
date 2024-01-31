@class PRRoseSolution;

@interface PREstimatorInput : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) double priorTimestamp;
@property (nonatomic) double subsequentTimestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ vector; } rotation;
@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (retain, nonatomic) PRRoseSolution *proximity;

- (void).cxx_destruct;

@end
