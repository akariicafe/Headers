@class NSObject;
@protocol OS_dispatch_queue;

@interface RadioNetworkObserver : NSObject {
    long long _networkUsageCount;
    NSObject<OS_dispatch_queue> *_networkUsageQueue;
}

@property (readonly, nonatomic) BOOL isUsingNetwork;
@property (readonly, nonatomic) BOOL isCellularNetworkingAllowed;

+ (id)sharedNetworkObserver;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)endUsingNetwork;
- (void).cxx_destruct;
- (void)beginUsingNetwork;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)a0;

@end
