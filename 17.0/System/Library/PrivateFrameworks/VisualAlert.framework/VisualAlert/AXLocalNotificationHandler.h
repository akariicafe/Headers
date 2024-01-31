@interface AXLocalNotificationHandler : VISAXNotificationHandler

@property (retain, nonatomic, setter=_setOpaqueObserver:) id _opaqueObserver;

- (void)_startObserving;
- (void).cxx_destruct;
- (void)_stopObserving;
- (id)_notificationTypeDescription;
- (void)_startObservingWithObject:(id)a0;
- (void)_stopObservingWithObject:(id)a0;

@end
