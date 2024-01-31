@class NAFuture;

@interface HMBCloudZonePullResult : HMFObject

@property (readonly) NAFuture *processingFuture;

- (void).cxx_destruct;
- (id)initWithProcessingFuture:(id)a0;

@end
