@class NSString, NSDictionary, ADEspressoStereoV2InferenceDescriptor;
@protocol MTLEvent;

@interface BWVideoDepthInferenceConfiguration : BWInferenceConfiguration

@property (readonly, nonatomic) int videoDepthAlgorithm;
@property (readonly, nonatomic) struct { int width; int height; } outputDimensions;
@property (readonly, nonatomic) unsigned int outputPixelFormat;
@property (readonly, nonatomic) struct { int width; int height; } inputDimensions;
@property (readonly, nonatomic) struct { int width; int height; } featuresDimensions;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) unsigned long long concurrencyWidth;
@property (readonly, nonatomic) unsigned int temporalDepthInputPixelFormat;
@property (readonly, nonatomic) unsigned int featuresPixelFormat;
@property (readonly, nonatomic) id<MTLEvent> backpressureEvent;
@property (readonly, nonatomic) int videoDepthLayout;
@property (nonatomic) BOOL requiresAppleDepthPostProcessing;
@property (readonly, nonatomic) BOOL requiresCroppingOfDepthBuffer;
@property (readonly, nonatomic) BOOL requiresVerticalFlipOfDepthBuffer;
@property (readonly, nonatomic) float networkBias;
@property (readonly, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly, nonatomic) ADEspressoStereoV2InferenceDescriptor *stereoV2inferenceDescriptor;

- (void)dealloc;
- (id)initWithConcurrencyWidth:(unsigned long long)a0 videoDepthLayout:(int)a1 captureDevice:(id)a2 backpressureEvent:(id)a3;
- (id)initWithConcurrencyWidth:(unsigned long long)a0 videoDepthLayout:(int)a1 captureDevice:(id)a2 overrideOutputDimensions:(struct { int x0; int x1; })a3 backpressureEvent:(id)a4;
- (id)initWithConcurrencyWidth:(unsigned long long)a0 videoDepthLayout:(int)a1 captureDevice:(id)a2 requiresCroppingOfDepthBuffer:(BOOL)a3 requiresVerticalFlipOfDepthBuffer:(BOOL)a4 backpressureEvent:(id)a5;

@end
