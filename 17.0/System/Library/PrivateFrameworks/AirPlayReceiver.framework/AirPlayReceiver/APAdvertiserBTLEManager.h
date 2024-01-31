@class CBDiscovery, NSMutableDictionary, CBAdvertiser, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APAdvertiserBTLEManager : NSObject {
    struct OpaqueFigCFWeakReferenceHolder { } *_weakSelf;
    unsigned short _btleMode;
    BOOL _requireAltBrowser;
    unsigned short _receiverPort;
    int _accessControlType;
    BOOL _isP2PAllowed;
    BOOL _p2pSolo;
    BOOL _p2pSoloQueried;
    NSObject<OS_dispatch_source> *_p2pSoloQueryTimer;
    struct { struct OpaqueFigSimpleMutex *mutex; unsigned int seed; void /* function */ *func; void *context; } _eventHandlerState;
    void *_eventContext;
}

@property (retain, nonatomic) CBAdvertiser *btleAdvertiser;
@property (retain, nonatomic) CBDiscovery *btleDiscoverer;
@property (nonatomic) int btleAdvertiserSeed;
@property (nonatomic) int btleDiscovererSeed;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) BOOL isAdvertising;
@property (nonatomic) BOOL isScanning;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isInvalidated;
@property (nonatomic) struct __SCDynamicStore { } *scStore;
@property (nonatomic) unsigned char seed;
@property (nonatomic) unsigned int soloDeviceFlags;
@property (retain, nonatomic) NSMutableDictionary *soloDevices;
@property (retain, nonatomic) NSMutableDictionary *pendingLostLegacyDevices;
@property (nonatomic) int touchSetupActiveNotifyToken;
@property (nonatomic) NSObject<OS_dispatch_source> *lostLegacyDeviceTimer;

+ (id)stringForBTLEMode:(unsigned short)a0;
+ (id)stringForBTLEState:(long long)a0;

- (void)stopScanning;
- (void)startScanning;
- (void)stopAdvertising;
- (id)createBTLEAdvertiser;
- (long long)btleManagerState;
- (void)dealloc;
- (int)start;
- (int)update;
- (int)getBTLEMode:(unsigned short *)a0;
- (void)invalidate;
- (int)stop;
- (id)initWithEventContext:(void *)a0;
- (void)startAdvertising;
- (void)handleFoundDevice:(id)a0;
- (id)createBTLEDiscoverer;
- (int)setBTLEMode:(unsigned short)a0;
- (void)dispatchEvent:(unsigned int)a0;
- (int)updatePreferences;
- (BOOL)canAdvertise;
- (int)setProperty:(id)a0 withValue:(id)a1;
- (void)removeLostDeviceWithIdentifier:(id)a0;
- (int)startListeningForNetworkChanges;
- (void)cleanupEventHandlerState;
- (void)computeNearbyDeviceTypesAndDispatchEventIfNecessary;
- (void)handleLostDevice:(id)a0 withGoodbye:(BOOL)a1;
- (void)handleP2PSoloQueryTimerCancelled;
- (void)handleP2PSoloQueryTimerFired;
- (unsigned char)isAcceptableDevice:(id)a0;
- (unsigned char)isSameAccountDevice:(id)a0;
- (void)removeExpiredDevices;
- (void)restartAdvertisingIfNecessary;
- (int)setAccessControlType:(unsigned int)a0;
- (int)setEventHandler:(void /* function */ *)a0 withContext:(void *)a1;
- (int)setIsP2PAllowed:(BOOL)a0;
- (int)setReceiverPort:(unsigned short)a0;
- (int)setRequireAltBrowser:(BOOL)a0;
- (int)setupEventHandlerState;
- (BOOL)shouldScanForSourceWithScreenOff;
- (int)showDebugWithDataBuffer:(struct { char *x0; unsigned long long x1; unsigned long long x2; char *x3; unsigned long long x4; unsigned long long x5; unsigned char x6; int x7; } *)a0 verbose:(BOOL)a1;
- (int)startP2PSoloQueryTimer;
- (void)stopAdvertisingWithSeed:(int)a0;
- (int)stopListeningForNetworkChanges;
- (void)stopScanningWithSeed:(int)a0;
- (int)supportsSolo:(BOOL *)a0;
- (void)updateLostLegacyDeviceTimer;
- (int)updateSupportsSoloAndForceReadFromPrefs:(BOOL)a0;

@end
