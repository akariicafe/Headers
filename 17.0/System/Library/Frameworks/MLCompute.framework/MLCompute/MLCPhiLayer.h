@interface MLCPhiLayer : MLCLayer

+ (id)layerWithControlTreeNode:(id)a0 sources:(id)a1 resultTensor:(id)a2;

- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithControlTreeNode:(id)a0 sources:(id)a1 resultTensor:(id)a2;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;

@end
