@class NSString;

@interface ATHostWakeupService : NSObject <ICEnvironmentMonitorObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)getWakeableHostsWithCompletion:(id /* block */)a0;
- (void)sendWakeupToHostWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)start;
- (void)environmentMonitorDidChangePower:(id)a0;
- (void)stop;
- (void)sendWakeupToAllHostsWithCompletion:(id /* block */)a0;
- (void)_wakeupHost:(id)a0;

@end
