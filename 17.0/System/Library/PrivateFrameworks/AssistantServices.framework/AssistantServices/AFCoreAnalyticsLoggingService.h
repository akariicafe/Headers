@class NSObject;
@protocol OS_dispatch_queue;

@interface AFCoreAnalyticsLoggingService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedLoggingService;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)logToCoreAnalyticsCrossDeviceRequestEvent:(id)a0;

@end
