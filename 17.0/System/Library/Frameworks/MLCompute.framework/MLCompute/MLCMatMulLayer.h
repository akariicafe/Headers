@class MLCMatMulDescriptor;

@interface MLCMatMulLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCMatMulDescriptor *descriptor;

+ (id)layerWithDescriptor:(id)a0;

- (id)initWithDescriptor:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
