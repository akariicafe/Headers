@class FCCXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface FCCNotificationRequestClient : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    FCCXPCClient *_xpcClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)_postSampleNotificationWithCompletion:(id /* block */)a0;
- (id)initWithQueue:(id)a0 xpcClient:(id)a1;
- (void)postSampleNotificationWithCompletion:(id /* block */)a0;

@end
