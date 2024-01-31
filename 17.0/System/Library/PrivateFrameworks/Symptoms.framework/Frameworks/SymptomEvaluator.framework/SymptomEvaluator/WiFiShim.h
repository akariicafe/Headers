@class NSString, NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WiFiShim : NSObject {
    struct __WiFiManagerClient { } *_wifiManager;
    struct __WiFiDeviceClient { } *_wifiDevice;
    BOOL _registeredForCallbacks;
    unsigned char _lqmCallbackRegistrationAttempts;
    double _lqmCallbackLastRegistered;
    id _tdObserver;
}

@property (nonatomic) unsigned char lqmCallbacks;
@property (nonatomic) unsigned char lqmCallbackThreshold;
@property (nonatomic) unsigned char lqmBradycardia;
@property (nonatomic) int lqmEventInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasAssociation;
@property (nonatomic) BOOL apIsAwake;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *lqmCallbackTimer;
@property (nonatomic) BOOL lqmCallbackTimerResumed;
@property (nonatomic) double lqmBradycardiaLastCalled;
@property (nonatomic) double lqmAsystoleLastCalled;
@property (nonatomic) double lqmCallbackLastTimestamp;
@property (retain, nonatomic) NSDictionary *awdlStateDict;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *awdlTimer;
@property (nonatomic) long long awdlTimerCount;
@property (nonatomic) char awdlLinkState;
@property (nonatomic) struct __WiFiDeviceClient { } *awdlDevice;
@property (retain, nonatomic) NSString *lastSsid;
@property (retain, nonatomic) NSString *lastBssid;
@property (retain, nonatomic) NSMutableSet *delegates;
@property (readonly) BOOL awdlLinkUp;
@property (nonatomic) BOOL monitorLQMBradycardia;

+ (id)sharedInstance;

- (id)init;
- (void)checkForLQMAsystole;
- (BOOL)isApplePersonalHotspot;
- (void)dealloc;
- (struct __WiFiManagerClient { } *)wifiManager;
- (void)setWifiDevice:(struct __WiFiDeviceClient { } *)a0;
- (BOOL)manualJoinInfoForNetwork:(struct __WiFiNetwork { } *)a0;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_delayedRegisterForLQMCallbacks;
- (BOOL)isHotSpotOnInterfaceWithName:(id)a0;
- (void)changeLQMMonitoring;
- (void)registerForCallbacks;
- (struct __WiFiDeviceClient { } *)wifiDevice;
- (void)_unregisterForLQMCallbacks;
- (void)processAsystoleDeclaration;
- (BOOL)toggleLQMIntervalOn:(id)a0 toFast:(BOOL)a1;
- (void)resumeLQMCallbackMonitoring;
- (void)suspendLQMCallbackMonitoring;
- (void)_triggerDisconnectEdge:(id)a0;
- (id)ssidForInterfaceWithName:(id)a0;
- (void)setAWDLDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)checkForLQMBradycardia;
- (void)checkForLQMCallbackRegistration;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_registerForLQMCallbacks;
- (void)_setAWDLLinkUp:(BOOL)a0;
- (BOOL)_shouldRegisterForLQMCallbacks;
- (void)unregisterForCallbacks;
- (void)_setLQMEventInterval:(int)a0;
- (id)bssidForInterfaceWithName:(id)a0;
- (void)handleAWDLStateChange:(id)a0;
- (id)refreshAssociationInfo;
- (id)getAWDLPeerList;
- (void)_wifiDevicesRefresh;
- (id)awdlPeerList;
- (long long)phyModeForInterfaceWithName:(id)a0;
- (id)associationInfoForWiFiNetwork:(struct __WiFiNetwork { } *)a0;

@end
