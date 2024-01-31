@interface CLSubmersionStateMachine : NSObject {
    double _maxDepth;
}

@property (readonly, nonatomic) double deepThreshold;
@property (readonly, nonatomic) double nearDepthLimitThreshold;
@property (readonly, nonatomic) double pastMaxDepthThreshold;
@property (readonly, nonatomic) double sensorErrorThreshold;
@property (nonatomic) long long type;

- (long long)getType;
- (id)initWithType:(long long)a0;
- (long long)stateFromDepth:(id)a0 forceSubmersion:(BOOL)a1;
- (void)initializeThresholds;

@end
