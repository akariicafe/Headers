@interface ITMReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;

- (void)dealloc;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (BOOL)startNotifier;
- (long long)currentReachabilityStatus;
- (void)stopNotifier;

@end
