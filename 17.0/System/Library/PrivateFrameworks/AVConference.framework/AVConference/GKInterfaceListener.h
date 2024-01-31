@protocol InterfaceListenerDelegate;

@interface GKInterfaceListener : NSObject {
    struct __SCDynamicStore { } *_dynamicStore;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _notificationMutex;
    id _interfaceListenerDelegate;
    int _notifyToken;
    BOOL _monitoringAvailable;
}

@property BOOL _isWifiUp;
@property BOOL _isCellUp;
@property id<InterfaceListenerDelegate> interfaceListenerDelegate;

- (id)init;
- (void)dealloc;
- (void)hasConnectionWithWifi:(BOOL *)a0 cell:(BOOL *)a1;
- (BOOL)startChangeListener;
- (BOOL)startRoutingChangeListener;
- (BOOL)stopChangeListener;
- (void)stopRoutingChangeListener;

@end
