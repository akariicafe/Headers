@class FCCXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface FCCFitnessPlusPlanClient : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    FCCXPCClient *_xpcClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)_hasPlanScheduledWorkoutsForTodayWithCompletion:(id /* block */)a0;
- (void)_postNotificationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)hasPlanScheduledWorkoutsForTodayWithCompletion:(id /* block */)a0;
- (id)initWithQueue:(id)a0 xpcClient:(id)a1;
- (void)postNotificationForType:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;

@end
