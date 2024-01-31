@class NSArray, HUNearbyLiveListenController, NSObject;
@protocol OS_dispatch_queue;

@interface HUNearbyLiveListenControllerWatch : NSObject <HUNearbyLiveListenDeviceImplementation>

@property (nonatomic) long long cachedState;
@property (nonatomic) double cachedLevels;
@property (copy, nonatomic) NSArray *cachedNearbyDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (weak, nonatomic) HUNearbyLiveListenController *controller;

- (void)startObserving;
- (void)stopObserving;
- (void)_updateState;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)startLiveListen;
- (void)_handleStateChangedMessage:(id)a0;
- (void)_nearbyDevicesChanged;
- (void)_receivedMessage:(id)a0 fromDevice:(id)a1;
- (void)_sendMessageToRequestInitialState;
- (void)_sendStartOrStopMessage:(BOOL)a0;
- (void)stopLiveListen;

@end
