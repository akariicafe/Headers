@class NSHashTable, NSString, AFSiriAudioRoute, NSMutableDictionary, AFSettingsConnection, AFNotifyObserver, NSObject, AVSystemController, NSMutableSet, AFBluetoothHeadphoneInEarDetectionState;
@protocol OS_dispatch_queue;

@interface AFSiriHeadphonesMonitor : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate> {
    unsigned long long _sessionState;
    unsigned long long _wirelessSplitterSessionActive;
    AFBluetoothHeadphoneInEarDetectionState *_inEarDetectionState;
    BOOL _guestConnected;
    BOOL _inWirelessSplitterSessionStateValid;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_inEarDetectionStateObserver;
    AFNotifyObserver *_wirelessSplitterSessionObserver;
    AFNotifyObserver *_wirelessGuestConnectionObserver;
    AVSystemController *_avSystemController;
    AFNotifyObserver *_forcedUpdateObserver;
    NSString *_btAddress;
    NSString *_routeName;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_btQueue;
    NSHashTable *_delegates;
    NSMutableDictionary *_devicesScheduledForJSNotification;
    NSMutableSet *_devicesAwaitingJSNotification;
}

@property (retain, nonatomic) AFSiriAudioRoute *currentAudioRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)sharedMonitor;

- (id)init;
- (void)_settingsConnectionDidDisconnect;
- (id)_init;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_fetchInitialState;
- (void)systemControllerDied:(id)a0;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)_settingsConnection;
- (BOOL)_updateAudioRouteAvailabilityAndBroadcast:(BOOL)a0;
- (void)_audioRouteDidChange:(id)a0;
- (void)_broadcastInEarDetectionStateChangesFrom:(id)a0 to:(id)a1;
- (void)_broadcastRouteAndAuthenticationCapability;
- (void)_fetchInEarDetectionStateAndStartObservingFromSourceForBTAddress:(id)a0 withCompletion:(id /* block */)a1;
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(id /* block */)a0;
- (id)_getCurrentAudioRoute;
- (void)_handleJSDiscoveryNotificationForDevice:(id)a0;
- (unsigned long long)_observerID;
- (void)_postJSDiscoveryNotificationForBTDeviceWithInfo:(id)a0 scheduled:(BOOL)a1;
- (void)_recomputePrivateSessionStateAndBroadcast:(BOOL)a0;
- (void)_stopObservingInEarDetectionStateFromSource;
- (void)_updateAnnounceNotificationsOnHearingAidSupportedStatus;
- (void)_updateInEarDetectionStateAndObserve;
- (void)_updateWirelessSplitterSessionInfoAndObserve;
- (void)accesoryAACPCapabilitiesReceived:(id)a0;
- (void)fetchInEarDetctionStateForBTAddress:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchPrivateSessionStateWithCompletion:(id /* block */)a0;
- (void)startObservingBluetoothConnections;
- (void)updateAudioRouteAvailability:(id)a0;

@end
