@class MLCGraph;

@interface MLCConditionalLayer : MLCLayer

@property (readonly, retain, nonatomic) MLCGraph *trueBranch;
@property (readonly, retain, nonatomic) MLCGraph *falseBranch;

+ (id)layerWithTrueBranch:(id)a0 falseBranch:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTrueBranch:(id)a0 falseBranch:(id)a1;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (unsigned long long)resultSizeForOutputIndex:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;

@end
