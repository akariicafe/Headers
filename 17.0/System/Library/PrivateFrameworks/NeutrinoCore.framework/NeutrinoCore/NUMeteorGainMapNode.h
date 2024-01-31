@interface NUMeteorGainMapNode : NUFilterNode

- (id)_evaluateImageGeometry:(out id *)a0;
- (id)initWithFilterName:(id)a0 settings:(id)a1 inputs:(id)a2;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)initWithFilter:(id)a0 settings:(id)a1 inputs:(id)a2;
- (id)initWithInput:(id)a0 gainMapVersion:(id)a1 gainMapParameters:(id)a2;

@end
