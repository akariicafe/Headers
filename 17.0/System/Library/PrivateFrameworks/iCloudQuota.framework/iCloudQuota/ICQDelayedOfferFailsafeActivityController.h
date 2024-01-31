@interface ICQDelayedOfferFailsafeActivityController : NSObject

+ (void)_runWithDaemon:(id /* block */)a0 errorCallback:(id /* block */)a1;
+ (void)startActivityWithDelaySecs:(long long)a0 completion:(id /* block */)a1;
+ (void)stopActivityWithCompletion:(id /* block */)a0;

@end
