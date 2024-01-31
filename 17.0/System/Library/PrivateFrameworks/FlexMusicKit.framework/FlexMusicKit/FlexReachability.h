@class NSObject;
@protocol OS_dispatch_queue;

@interface FlexReachability : NSObject {
    BOOL _isNotifying;
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilityQueue;
@property (readonly, nonatomic) long long currentReachabilityStatus;
@property (readonly, nonatomic) BOOL connectionRequired;
@property (readonly, nonatomic) BOOL interventionRequired;

+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;

- (id)init;
- (void)dealloc;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (long long)localWiFiStatusForFlags:(unsigned int)a0;
- (void).cxx_destruct;

@end
