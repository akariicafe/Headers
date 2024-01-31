@class NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_nw_path;

@interface MX_NetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> *mAccessQueue;
    NSObject<OS_nw_path_monitor> *mMonitor;
    NSObject<OS_nw_path> *mCurrentPath;
    BOOL mNetworkReachable;
}

- (id)init;
- (void)dealloc;
- (BOOL)isCarrierNetworkReachable;
- (void)networkPathUpdate:(id)a0;

@end
