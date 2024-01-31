@class NSString;

@interface VNObjectTrackerRevision2 : VNObjectTracker

@property (class, readonly, copy) NSString *rpnTrackerInitModelName;
@property (class, readonly, copy) NSString *rpnTrackerTrackModelName;

+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)rpnTrackQueue;
+ (id)serializeRPNInitializationQueue;
+ (id)serializeRPNTrackingQueue;
+ (id)supportedComputeDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)rpnInitQueue;

- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
