@class NURenderNode;

@interface NUAuxiliaryRenderNode : NURenderNode

@property (readonly, nonatomic) long long auxiliaryImageType;
@property (readonly, nonatomic) NURenderNode *inputNode;

- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)_evaluateImageProperties:(out id *)a0;
- (id)initWithInput:(id)a0 auxiliaryImageType:(long long)a1;

@end
