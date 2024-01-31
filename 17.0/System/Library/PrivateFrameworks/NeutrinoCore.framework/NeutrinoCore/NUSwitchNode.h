@interface NUSwitchNode : NURenderNode

- (id)uniqueInputNode;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)initWithInputs:(id)a0 mainInput:(id)a1 selector:(id)a2;

@end
