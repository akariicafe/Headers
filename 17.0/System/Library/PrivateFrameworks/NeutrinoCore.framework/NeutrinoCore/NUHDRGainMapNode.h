@interface NUHDRGainMapNode : NURenderNode

- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithInput:(id)a0 contentHeadroom:(double)a1 displayHeadroom:(double)a2;

@end
