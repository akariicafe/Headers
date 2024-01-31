@class BWInferenceScheduler;
@protocol MTLCommandQueue;

@interface BWStillImageNodeConfiguration : NSObject

@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic) int depthDataType;
@property (nonatomic) int pearlModuleType;
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler;
@property (nonatomic) int maxLossyCompressionLevel;
@property (nonatomic) BOOL deferredCaptureSupportEnabled;
@property (nonatomic) BOOL deferredPhotoProcessorEnabled;
@property (nonatomic) struct { int width; int height; } deepFusionEnhancedResolutionDimensions;
@property (nonatomic) struct { int width; int height; } downgradedDeepFusionEnhancedResolutionDimensions;
@property (nonatomic) BOOL optimizedEnhancedResolutionDepthPipelineEnabled;

- (void)dealloc;

@end
