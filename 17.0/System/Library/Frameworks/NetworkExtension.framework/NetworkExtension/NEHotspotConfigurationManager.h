@interface NEHotspotConfigurationManager : NSObject

@property (class, readonly) NEHotspotConfigurationManager *sharedManager;

- (void)applyConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)getConfiguredSSIDsWithCompletionHandler:(id /* block */)a0;
- (void)removeConfigurationForHS20DomainName:(id)a0;
- (void)removeConfigurationForSSID:(id)a0;

@end
