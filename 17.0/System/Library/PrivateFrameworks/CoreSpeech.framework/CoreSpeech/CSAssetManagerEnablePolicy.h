@interface CSAssetManagerEnablePolicy : CSPolicy

- (id)init;
- (void)_addAssetManagerEnabledConditions;
- (void)_subscribeEventMonitors;
- (BOOL)_shouldCheckNetworkAvailability;

@end
