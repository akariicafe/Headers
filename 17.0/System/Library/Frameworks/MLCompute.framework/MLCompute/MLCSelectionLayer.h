@interface MLCSelectionLayer : MLCLayer

+ (id)layer;
+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
