@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface WLKPrewarming : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (void)prewarm;
- (id)_connection;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)_onQueue_prewarmDevice;
- (void)prewarmDevice;
- (void)prewarmDeviceAndNetwork;
- (void)prewarmSubscriptionData;
- (void)prewarmWithConfigCachePolicy:(unsigned long long)a0;

@end
