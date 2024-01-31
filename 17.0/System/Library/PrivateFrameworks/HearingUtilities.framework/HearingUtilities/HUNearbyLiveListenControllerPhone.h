@class AXHALiveListenObserver, NSArray, NSString, HUNearbyLiveListenController, NSObject;
@protocol OS_dispatch_queue;

@interface HUNearbyLiveListenControllerPhone : NSObject <HUNearbyLiveListenDeviceImplementation>

@property (weak, nonatomic) HUNearbyLiveListenController *controller;
@property (nonatomic) BOOL cachedIsListening;
@property (nonatomic) BOOL cachedHasLiveListenRoute;
@property (nonatomic) BOOL cachedHasHearingAidRoute;
@property (nonatomic) BOOL cachedWirelessSplitterEnabled;
@property (nonatomic) unsigned long long cachedCurrentCallsCount;
@property (copy, nonatomic) NSArray *cachedNearbyWatches;
@property (nonatomic) float cachedAudioLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (retain, nonatomic) AXHALiveListenObserver *liveListenObserver;
@property (copy, nonatomic) NSString *currentOtherDeviceName;
@property (copy, nonatomic) NSString *currentOtherDeviceType;

- (void)startObserving;
- (void)stopObserving;
- (void)_updateState;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)startLiveListen;
- (void)_isListeningChanged:(BOOL)a0 audioLevel:(float)a1;
- (void)_audioRoutesChanged:(id)a0;
- (void)_callsStatusChanged:(id)a0;
- (void)_handleRequestCurrentStateMessageFromDevice:(id)a0;
- (void)_handleStartOrStopMessageFromRemoteWatch:(id)a0 message:(id)a1;
- (void)_logLiveListenAnalytics;
- (void)_nearbyDevicesChanged;
- (void)_receivedMessage:(id)a0 fromDevice:(id)a1;
- (void)_startLiveListenFromRemoteDevice:(id)a0;
- (void)_stopLiveListenFromRemoteDevice:(id)a0;
- (void)_updateAnalyticsInformation;
- (void)_wirelessSplitterEnabledChanged:(id)a0;
- (void)stopLiveListen;

@end
