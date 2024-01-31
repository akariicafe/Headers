@interface NURawFilterNode : NUFilterNode

@property (readonly, nonatomic) int rawFilterType;

- (id)initWithFilterName:(id)a0 settings:(id)a1 inputs:(id)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithRawFilter:(id)a0 type:(int)a1 settings:(id)a2 input:(id)a3;
- (id)initWithRawFilterName:(id)a0 type:(int)a1 settings:(id)a2 inputs:(id)a3;

@end
