@class NSMutableDictionary, NSMapTable, NSObject, GCMouse, NSThread, NSMutableArray, GCExtendedGamepad, NSString, NSTimer, _GCHIDEventSubject, GCController, GCKeyboardAndMouseManager, GCMicroGamepad, NSXPCConnection;
@protocol OS_dispatch_queue, NSSecureCoding, _GCIPCObjectRegistry, _GCIPCServiceRegistry, NSCopying, NSObject, GCRemoteDaemonProxy;

@interface _GCControllerManager : NSObject <_GCImplicitIPCObject, _GCIPCObjectRegistry, _GCIPCServiceRegistry, _GCIPCObjectMaterializationContext, GameControllerClientProtocol, _GCHIDEventSource> {
    NSObject<OS_dispatch_queue> *_hidSystemClientQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ipcRegistryLock;
    NSMapTable *_ipcObjectRegistry;
    struct __IOHIDEventSystemClient { } *_hidSystemClient;
    _GCHIDEventSubject *_hidEventSource;
    GCController *_currentController;
    GCMicroGamepad *_currentMicroGamepad;
    GCExtendedGamepad *_currentExtendedGamepad;
    NSXPCConnection *_connection;
    NSXPCConnection *_daemonConnection;
    NSObject<GCRemoteDaemonProxy> *_remote;
    NSThread *_hidInputThread;
    struct __CFRunLoop { } *_hidInputThreadRunLoop;
    struct __CFRunLoopSource { } *_hidThreadRunLoopSource;
    NSMutableArray *_hidThreadExecutionBlocks;
    struct __IOHIDManager { } *_hidManager;
    struct IONotificationPort { } *_usbNotify;
    unsigned int _usbAddedIterator;
    unsigned int _usbRemovedIterator;
    id _hidEventObservation;
    BOOL _shouldKeepRunning;
    id /* block */ _requestConnectedHostsCallback;
    NSMutableDictionary *_controllersByUDID;
    NSMutableDictionary *_controllersByRegistryID;
    GCController *_firstMicroGamepad;
    NSTimer *_idleWatchTimer;
    BOOL _gameControllerActive;
    BOOL _isAppInBackground;
    long long _currentMediaRemoteInputMode;
    GCKeyboardAndMouseManager *_keyboardAndMouseManager;
    GCController *__controller_genericBTRemote;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<_GCIPCObjectRegistry> IPCObjectRegistry;
@property (readonly) id<_GCIPCServiceRegistry> IPCServiceRegistry;
@property (readonly, nonatomic) BOOL isAppInBackground;
@property (nonatomic) struct __IOHIDManager { } *hidManager;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSXPCConnection *daemonConnection;
@property (retain, nonatomic) NSObject<GCRemoteDaemonProxy> *remote;
@property (nonatomic) BOOL gameControllerActive;
@property (readonly, nonatomic) NSThread *hidInputThread;
@property (readonly, nonatomic) struct __CFRunLoop { } *hidInputThreadRunLoop;
@property (readonly, nonatomic) struct __CFRunLoopSource { } *hidThreadRunLoopSource;
@property (readonly, nonatomic) NSMutableArray *hidThreadExecutionBlocks;
@property (weak, nonatomic) GCController *firstMicroGamepad;
@property (retain) GCController *currentController;
@property (retain) GCMicroGamepad *currentMicroGamepad;
@property (retain) GCExtendedGamepad *currentExtendedGamepad;
@property (retain) GCMouse *currentMouse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldMonitorBackgroundEvents;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *controllersQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *hidSystemPropertyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (id)serviceClientForIPCService:(id)a0;
- (void)enableKeyboardAndMouseSupport;
- (void)setupHIDMonitor:(BOOL)a0;
- (void)_legacy_stopHIDEventMonitor;
- (void)launchHIDInputThread;
- (id)_legacy_mice;
- (void)controllerWithUDID:(unsigned long long)a0 setData:(id)a1;
- (void)removeController:(id)a0 registryID:(id)a1;
- (void)_legacy_startHIDEventMonitor;
- (void)controller:(id)a0 setValue:(float)a1 forElement:(int)a2;
- (BOOL)combineSiriRemoteHIDDevicesWithNewController:(id)a0 existingController:(id)a1;
- (id)_legacy_makeHIDEventSource:(struct __IOHIDEventSystemClient { } *)a0;
- (id)init;
- (void)microControllerWithUDID:(unsigned long long)a0 setDigitizerX:(float)a1 digitizerY:(float)a2 withTimeStamp:(unsigned long long)a3 touchDown:(BOOL)a4;
- (void)_legacy_startHIDDeviceMonitor;
- (void)_legacy_unpublishController:(id)a0;
- (id)coalescedKeyboard;
- (id)observeHIDEvents:(id /* block */)a0;
- (void)onVideoRecordingToggledWithController:(id)a0;
- (void)_legacy_addControllerWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (void)removeController:(id)a0;
- (void)dealloc;
- (void)_legacy_removeControllerWithServiceRef:(struct __IOHIDServiceClient { } *)a0;
- (void)controllerWithUDID:(unsigned long long)a0 setValue:(float)a1 forElement:(int)a2;
- (int)connectedATVRemoteCount;
- (void)CBApplicationDidBecomeActive;
- (id)HIDDeviceMatchingAttributes;
- (void)onScreenshotTriggeredWithController:(id)a0;
- (void)startIdleWatchTimer;
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient { } *)a0;
- (void)addControllerForAppStoreRemote:(id)a0;
- (BOOL)isExistingController:(id)a0;
- (void)addController:(id)a0;
- (void)open;
- (void)registerIPCObject:(id)a0;
- (id)mice;
- (void)onVideoRecordingToggledWithController:(id)a0 mode:(long long)a1;
- (void)updateCurrentControllerAndProfileForUnpublishedController:(id)a0;
- (id)makeHIDEventSource:(struct __IOHIDEventSystemClient { } *)a0;
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient { } *)a0;
- (id)_legacy_coalescedKeyboard;
- (void)async_HIDBlock:(id /* block */)a0;
- (void)microControllerWithDigitizerX:(float)a0 withY:(float)a1 withTimeStamp:(unsigned long long)a2 touchDown:(BOOL)a3;
- (void)startVideoRecordingBuffering;
- (void)_legacy_stopHIDDeviceMonitor;
- (void)_legacy_updateControllerWithEvent:(struct __IOHIDEvent { } *)a0;
- (void)threadHIDInputOffMain:(id)a0;
- (void)teardownHIDMonitor:(BOOL)a0;
- (void)CBApplicationWillResignActive;
- (void)_legacy_init;
- (void)threadHIDInputOnMain:(id)a0;
- (id)IPCObjectWithIdentifier:(id)a0;
- (void)removeCoalescedControllerComponent:(id)a0;
- (void)storeController:(id)a0;
- (void)updateIdleTimer:(id)a0;
- (void)_queue_removeController:(id)a0 registryID:(id)a1;
- (id)observeHIDEvents:(id /* block */)a0 forService:(id)a1;
- (void)stopVideoRecordingBuffering;
- (void)_legacy_publishController:(id)a0;
- (id)controllers;
- (void)_legacy_dealloc;
- (id)_legacy_controllers;
- (void)controllerWithUDID:(unsigned long long)a0 setValue0:(float)a1 setValue1:(float)a2 setValue2:(float)a3 setValue3:(float)a4 forElement:(int)a5;
- (void).cxx_destruct;

@end
