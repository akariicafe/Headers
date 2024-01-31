@interface SLNetworkReachabilityWarning : NSObject

- (id)initWithServiceType:(id)a0;
- (void)showIfNecessary;
- (void)showIfNecessaryWithCompletion:(id /* block */)a0;

@end
