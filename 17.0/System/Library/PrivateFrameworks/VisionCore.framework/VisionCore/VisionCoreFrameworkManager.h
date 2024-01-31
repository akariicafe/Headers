@class VisionCoreObjectCache;

@interface VisionCoreFrameworkManager : NSObject

@property (readonly) VisionCoreObjectCache *inferenceNetworkDescriptorsCache;

+ (id)sharedManager;

- (void).cxx_destruct;

@end
