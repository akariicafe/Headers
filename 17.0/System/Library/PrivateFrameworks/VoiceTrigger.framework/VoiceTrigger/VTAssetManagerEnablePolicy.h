@interface VTAssetManagerEnablePolicy : VTPolicy

- (id)init;
- (void)_addAssetManagerEnabledConditions;
- (void)_subscribeEventMonitors;

@end
