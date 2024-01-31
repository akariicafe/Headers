@interface _MLCGPULayerNormalization : _MLCGPULayer

+ (id)layerWithDevice:(id)a0 normalizedShape:(id)a1 beta:(id)a2 gamma:(id)a3 varianceEpsilon:(float)a4 isFusedWithArithmeticLayer:(BOOL)a5;

- (id)initWithDevice:(id)a0 normalizedShape:(id)a1 beta:(id)a2 gamma:(id)a3 varianceEpsilon:(float)a4 isFusedWithArithmeticLayer:(BOOL)a5;

@end
