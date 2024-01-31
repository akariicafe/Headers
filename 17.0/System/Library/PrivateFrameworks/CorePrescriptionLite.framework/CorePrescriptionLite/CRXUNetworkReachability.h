@class CRXUDispatchQueue, CRXUWeakObserverList, NSObject;
@protocol OS_os_log;

@interface CRXUNetworkReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
    struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } _socketAddress;
    CRXUWeakObserverList *_observers;
    CRXUDispatchQueue *_serialQueue;
    NSObject<OS_os_log> *_log;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)isConnected;
- (void).cxx_destruct;
- (void)removeNetworkObserver:(id)a0;
- (void)addNetworkObserver:(id)a0;
- (void)noteReachabilityChange;
- (void)registerNetworkReachabilityCallback;

@end
