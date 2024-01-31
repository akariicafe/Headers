@class NURenderNode, PIRetouchCacheNode;

@interface PIRetouchCompositeNode : NURenderNode {
    struct { long long numerator; long long denominator; } _scale;
    long long _sampleMode;
}

@property (readonly, nonatomic) NURenderNode *inputNode;
@property (readonly, nonatomic) PIRetouchCacheNode *retouchNode;

- (id)_evaluateImage:(out id *)a0;
- (id)initWithScale:(struct { long long x0; long long x1; })a0 sampleMode:(long long)a1 input:(id)a2 retouch:(id)a3;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
