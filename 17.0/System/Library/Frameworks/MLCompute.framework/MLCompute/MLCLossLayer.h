@class MLCLossDescriptor, MLCTensor;

@interface MLCLossLayer : MLCLayer

@property (retain, nonatomic) MLCTensor *lossLabels;
@property (readonly, copy, nonatomic) MLCLossDescriptor *descriptor;
@property (readonly, retain, nonatomic) MLCTensor *weights;

+ (id)layerWithDescriptor:(id)a0;
+ (id)sigmoidCrossEntropyLossWithReductionType:(int)a0 labelSmoothing:(float)a1 weight:(float)a2;
+ (id)categoricalCrossEntropyLossWithReductionType:(int)a0 labelSmoothing:(float)a1 classCount:(unsigned long long)a2 weight:(float)a3;
+ (id)categoricalCrossEntropyLossWithReductionType:(int)a0 labelSmoothing:(float)a1 classCount:(unsigned long long)a2 weights:(id)a3;
+ (id)categoricalCrossEntropyLossWithReductionType:(int)a0 weight:(float)a1;
+ (id)categoricalCrossEntropyLossWithReductionType:(int)a0 weights:(id)a1;
+ (id)cosineDistanceLossWithReductionType:(int)a0 weight:(float)a1;
+ (id)cosineDistanceLossWithReductionType:(int)a0 weights:(id)a1;
+ (id)hingeLossWithReductionType:(int)a0 weight:(float)a1;
+ (id)hingeLossWithReductionType:(int)a0 weights:(id)a1;
+ (id)huberLossWithReductionType:(int)a0 delta:(float)a1 weight:(float)a2;
+ (id)huberLossWithReductionType:(int)a0 delta:(float)a1 weights:(id)a2;
+ (id)layerWithDescriptor:(id)a0 weights:(id)a1;
+ (id)logLossWithReductionType:(int)a0 epsilon:(float)a1 weight:(float)a2;
+ (id)logLossWithReductionType:(int)a0 epsilon:(float)a1 weights:(id)a2;
+ (id)meanAbsoluteErrorLossWithReductionType:(int)a0 weight:(float)a1;
+ (id)meanAbsoluteErrorLossWithReductionType:(int)a0 weights:(id)a1;
+ (id)meanSquaredErrorLossWithReductionType:(int)a0 weight:(float)a1;
+ (id)meanSquaredErrorLossWithReductionType:(int)a0 weights:(id)a1;
+ (id)sigmoidCrossEntropyLossWithReductionType:(int)a0 labelSmoothing:(float)a1 weights:(id)a2;
+ (id)softmaxCrossEntropyLossWithReductionType:(int)a0 labelSmoothing:(float)a1 classCount:(unsigned long long)a2 weight:(float)a3;
+ (id)softmaxCrossEntropyLossWithReductionType:(int)a0 labelSmoothing:(float)a1 classCount:(unsigned long long)a2 weights:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithDescriptor:(id)a0 weights:(id)a1;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (void)linkAssociatedTensors;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;

@end
