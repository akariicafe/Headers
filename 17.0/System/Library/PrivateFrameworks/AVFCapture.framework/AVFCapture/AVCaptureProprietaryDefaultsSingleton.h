@class NSMutableDictionary, AVWeakReference, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVCaptureProprietaryDefaultsSingleton : NSObject {
    char *_proprietaryDefaultsSourceQueueLabel;
    unsigned long long _proprietaryDefaultsSourceQueueLabelLength;
    NSObject<OS_dispatch_queue> *_proprietaryDefaultsSourceQueue;
    NSObject<OS_dispatch_queue> *_proprietaryDefaultChangeNotificationCallbackQueue;
    struct OpaqueFigCaptureSource { } *_proprietaryDefaultsSource;
    AVWeakReference *_weakReference;
    NSMutableDictionary *_defaultChangedHandlersForObserversForKeys;
    NSMutableArray *_keyObservationsThatFailedToRegisterWithServer;
}

+ (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
+ (void)initialize;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(BOOL)a3 cameraCanBeInOverrideList:(BOOL)a4;
+ (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(BOOL)a2;
+ (id)proprietaryDefaultsDomainForClient;
+ (id)proprietaryDefaultsSingleton;
+ (void)updateProprietaryDefaultsSource;
+ (id)cameraHistoryDownplayOverrideList;
+ (void)removeObserver:(id)a0 forKey:(id)a1;
+ (int)retryPriorFailedKeyObservationRegistrations;
+ (id)objectForKey:(id)a0;
+ (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)init;
- (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(BOOL)a3 cameraCanBeInOverrideList:(BOOL)a4;
- (void)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(BOOL)a2;
- (void)_runBlockOnProprietaryDefaultsSourceQueue:(id /* block */)a0;
- (void)_handleDefaultChangedNotificationForKey:(id)a0 newValue:(id)a1 callHandlersAsync:(BOOL)a2;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (id)cameraHistoryDownplayOverrideList;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (int)retryPriorFailedKeyObservationRegistrations;
- (id)objectForKey:(id)a0;
- (void)_updateProprietaryDefaultsSource:(BOOL)a0;
- (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0;
- (int)_registerWithServerToObserveKey:(id)a0;

@end
