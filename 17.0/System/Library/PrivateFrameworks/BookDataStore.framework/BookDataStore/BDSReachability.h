@interface BDSReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForInternetConnection;
+ (BOOL)isOffline;
+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (void)_updateIsOffline;

- (void)dealloc;
- (int)networkStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (BOOL)startNotifier;
- (int)currentReachabilityStatus;
- (void)stopNotifier;
- (int)localWiFiStatusForFlags:(unsigned int)a0;

@end
