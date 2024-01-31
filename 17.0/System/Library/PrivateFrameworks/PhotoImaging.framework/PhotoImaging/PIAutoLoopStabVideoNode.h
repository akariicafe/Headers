@class NSDictionary;

@interface PIAutoLoopStabVideoNode : NURenderNode

@property (readonly, nonatomic) NSDictionary *bakedRecipe;

+ (id)nodeWithInput:(id)a0 recipe:(id)a1 error:(out id *)a2;

- (void).cxx_destruct;
- (id)_evaluateVideo:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)_evaluateVideoProperties:(out id *)a0;
- (id)initWithInput:(id)a0 settings:(id)a1 bakedRecipe:(id)a2;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
