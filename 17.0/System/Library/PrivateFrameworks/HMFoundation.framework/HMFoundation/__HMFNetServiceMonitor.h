@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor

@property (readonly) HMFNetService *service;

- (id)initWithNetService:(id)a0;
- (id)netAddress;
- (unsigned long long)reachabilityPath;
- (id)initWithNetAddress:(id)a0;
- (void)dealloc;
- (id)logIdentifier;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
