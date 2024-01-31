@interface NUSourceOrientationNode : NUOrientationNode

@property (readonly, nonatomic) BOOL skipOrientation;

+ (long long)originalOrientationToApplyToSource:(id)a0 skipOrientation:(BOOL)a1 error:(out id *)a2;

- (id)initWithOrientation:(long long)a0 input:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)initWithInput:(id)a0 source:(id)a1 settings:(id)a2 orientation:(long long)a3;

@end
