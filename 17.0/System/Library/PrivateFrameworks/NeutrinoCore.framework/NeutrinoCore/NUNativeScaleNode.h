@interface NUNativeScaleNode : NUAbstractScaleNode

- (id)initWithInput:(id)a0;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;

@end
