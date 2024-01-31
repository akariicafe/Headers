@interface _AMSNotificationObservable : AMSObservable

- (id)initWithNotification:(id)a0 object:(id)a1;
- (BOOL)sendCompletion;
- (BOOL)cancel;
- (void)_receivedNotification:(id)a0;

@end
