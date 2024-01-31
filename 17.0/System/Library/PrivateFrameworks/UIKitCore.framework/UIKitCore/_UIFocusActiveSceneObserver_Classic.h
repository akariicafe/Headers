@class NSString, NSMapTable, NSTimer;

@interface _UIFocusActiveSceneObserver_Classic : _UIFocusActiveSceneObserver <BKSHIDEventDeliveryPolicyObserving> {
    NSMapTable *_hidObserverMapTable;
    struct { unsigned char supportsHIDUpdates : 1; } _flags;
    NSTimer *_inactiveSceneObserverTimer;
    long long _inactiveSceneObserverTimerFireCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_windowDidDetachContext:(id)a0;
- (void).cxx_destruct;
- (id)_initWithScene:(id)a0;
- (void)_keyWindowDidChangeNotification:(id)a0;
- (void)observerDeliveryPolicyDidChange:(id)a0;
- (BOOL)isActive;
- (id)descriptionBuilder;
- (void)_addDeliveryObserverForWindow:(id)a0;
- (void)_fireInactiveFocusObserver:(id)a0;
- (void)_removeDeliverObserverForWindow:(id)a0;
- (id)_resolvedDisplayForWindow:(id)a0;
- (void)_screenUUIDDidChangeNotification:(id)a0;
- (void)_windowDidAttachContext:(id)a0;
- (void)beginMonitoringContextChangesForWindow:(id)a0;
- (void)stopMonitoringContextChangesForWindow:(id)a0;

@end
