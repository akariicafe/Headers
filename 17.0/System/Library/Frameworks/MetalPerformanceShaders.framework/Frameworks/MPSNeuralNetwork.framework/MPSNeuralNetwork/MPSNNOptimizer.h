@interface MPSNNOptimizer : MPSKernel

@property (readonly, nonatomic) float learningRate;
@property (readonly, nonatomic) float gradientRescale;
@property (nonatomic) BOOL applyGradientClipping;
@property (readonly, nonatomic) float gradientClipMax;
@property (readonly, nonatomic) float gradientClipMin;
@property (readonly, nonatomic) float regularizationScale;
@property (readonly, nonatomic) unsigned long long regularizationType;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)debugDescription;
- (void)setLearningRate:(float)a0;
- (id)initWithDevice:(id)a0 optimizerDescriptor:(id)a1;

@end
