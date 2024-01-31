@class NSUUID, NSTimer, NSXPCConnection, NSString, TUCall;
@protocol SOSCoreAnalyticsReporting;

@interface SOSStatusManager : NSObject <SOSStatusManagerServerProtocol, NSXPCListenerDelegate, SOSPairedDeviceStatusObserver>

@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (nonatomic) BOOL inSOSFlow;
@property (nonatomic) BOOL inSOSFlowOnCurrentDevice;
@property (retain, nonatomic) TUCall *activeSOSCall;
@property (nonatomic) BOOL hasActiveSOSCall;
@property (retain, nonatomic) NSTimer *currentDeviceStatusClearTimer;
@property (retain, nonatomic) NSTimer *pairedDeviceStatusClearTimer;
@property (nonatomic) long long mostRecentTriggerSource;
@property (retain, nonatomic) id<SOSCoreAnalyticsReporting> coreAnalyticsReporter;
@property (retain, nonatomic) NSUUID *handoffTriggerUUID;
@property (nonatomic) long long handoffTrigger;
@property (retain, nonatomic) NSTimer *handoffFallbackTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)triggerHandoffFallback;
- (id)init;
- (void)_reportSOSEvent:(id)a0 callDuration:(long long)a1;
- (void)flowStartedOnCurrentDevice;
- (void)pairedDeviceSOSStatusDidUpdate:(id)a0 progression:(long long)a1 shouldHandleThirdParty:(BOOL)a2;
- (void)sosTriggeredOnPairedDevice:(id)a0;
- (void)flowEndedOnBothDevices;
- (void)startAudioSession;
- (void)cancelHandoffFallbackTimer;
- (void)flowStartedOnEitherDevice;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)handleLostStatusReporterConnection;
- (void)updatePairedDeviceSOSStatus:(id)a0;
- (void)checkSOSStatusOnLaunch;
- (void)startCurrentDeviceClearStatusTimer;
- (void)cancelPairedDeviceClearStatusTimer;
- (void)cancelCurrentDeviceClearStatusTimer;
- (void)clearHandoffFallbackState;
- (void)flowEndedOnCurrentDevice;
- (void)flowStarted;
- (void)sosTriggerDisabledWithUUID:(id)a0 trigger:(long long)a1;
- (void)startHandoffFallbackTimer;
- (void).cxx_destruct;
- (void)startPairedDeviceClearStatusTimer;
- (void)checkHandoffFallback;
- (void)handleSOSCallStatusChange:(id)a0;
- (void)sosTriggerPushedToPairedDeviceWithUUID:(id)a0 trigger:(long long)a1;
- (void)flowEnded;
- (void)sosTriggeredWithUUID:(id)a0 trigger:(long long)a1 source:(long long)a2;
- (void)endAudioSession;
- (void)updateSOSFlowState:(long long)a0;

@end
