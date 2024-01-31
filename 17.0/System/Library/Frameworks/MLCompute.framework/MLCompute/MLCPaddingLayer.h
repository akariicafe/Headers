@interface MLCPaddingLayer : MLCLayer <NSCopying>

@property (readonly, nonatomic) int paddingType;
@property (readonly, nonatomic) unsigned long long paddingLeft;
@property (readonly, nonatomic) unsigned long long paddingRight;
@property (readonly, nonatomic) unsigned long long paddingTop;
@property (readonly, nonatomic) unsigned long long paddingBottom;
@property (readonly, nonatomic) float constantValue;

+ (id)layerWithConstantPadding:(id)a0 constantValue:(float)a1;
+ (id)layerWithReflectionPadding:(id)a0;
+ (id)layerWithSymmetricPadding:(id)a0;
+ (id)layerWithZeroPadding:(id)a0;
+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithPaddingType:(int)a0 paddingSizes:(id)a1 constantValue:(float)a2;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
