@interface NURenderPipeline : NSObject

- (id)_processedRenderNodeForComposition:(id)a0 input:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)_runPipelineFiltersForRenderNode:(id)a0 composition:(id)a1 pipelineState:(id)a2 error:(id *)a3;
- (id)processedRenderNodeForComposition:(id)a0 pipelineState:(id)a1 error:(out id *)a2;

@end
