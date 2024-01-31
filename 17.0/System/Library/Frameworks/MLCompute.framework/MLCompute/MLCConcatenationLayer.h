@interface MLCConcatenationLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long dimension;

+ (id)layer;
+ (id)layerWithDimension:(unsigned long long)a0;
+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDimension:(unsigned long long)a0;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (BOOL)isStaticBatchSize;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
