@interface HKDarwinNotificationDataSource : HKObserverBridge

- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;

@end
