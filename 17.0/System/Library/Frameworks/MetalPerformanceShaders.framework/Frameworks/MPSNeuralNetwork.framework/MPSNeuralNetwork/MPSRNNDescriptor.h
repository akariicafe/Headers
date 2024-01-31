@protocol MPSCNNConvolutionDataSource;

@interface MPSRNNDescriptor : NSObject

@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> inputTransform;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> outputTransform;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> recurrentOutputTransform;
@property (nonatomic) unsigned long long internalKernelSelector;
@property (nonatomic) unsigned long long inputFeatureChannels;
@property (nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) BOOL useLayerInputUnitTransformMode;
@property (nonatomic) BOOL useFloat32Weights;
@property (nonatomic) unsigned long long layerSequenceDirection;

- (id)init;
- (void)dealloc;

@end
