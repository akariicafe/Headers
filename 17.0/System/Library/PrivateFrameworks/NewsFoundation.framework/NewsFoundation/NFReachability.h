@class NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_nw_path;

@interface NFReachability : NSObject

@property long long currentReachabilityStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observationQueue;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (retain, nonatomic) NSObject<OS_nw_path> *currentNetworkPath;

+ (id)sharedInstance;

- (void)_updateCurrentNetworkPath:(id)a0;
- (id)init;
- (long long)_statusFromNetworkPath:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
