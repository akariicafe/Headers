@class NSString, NSMutableDictionary, NSTimer;

@interface GCAnalytics : NSObject <GCAnalytics> {
    NSMutableDictionary *_controllersData;
    NSString *_bundleID;
    NSTimer *_eventPollTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (id)init;
- (void)dealloc;
- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void).cxx_destruct;
- (BOOL)sendEvent:(id)a0 withPayloadBuilder:(id /* block */)a1;
- (void)sendEvent:(id)a0 withXPCPayload:(id)a1;
- (BOOL)sendEvent:(id)a0 withXPCPayloadBuilder:(id /* block */)a1;
- (id)getBundleID;
- (void)checkMultipleControllers;
- (void)onSiriMotionEnabled;
- (void)publishController:(id)a0;
- (void)runInputPollTimer;
- (void)sendHapticsClientDestroyedEventForBundleID:(id)a0 productCategory:(id)a1 totalPlayers:(int)a2 sessionTotalDuration:(int)a3 sessionActiveDuration:(int)a4 terminationReason:(id)a5;
- (void)sendHapticsEngineCreatedEventForBundleID:(id)a0 productCategory:(id)a1 hapticsLocality:(id)a2;
- (void)sendHapticsErrorRaisedEventFromSource:(id)a0 productCategory:(id)a1 errorType:(id)a2;
- (void)sendHapticsPlayerDestroyedEventForBundleID:(id)a0 productCategory:(id)a1 totalEventsProcessed:(int)a2 transientEventsProcessed:(int)a3 continuousEventsProcessed:(int)a4 parameterCurvesProcessed:(int)a5 sessionTotalDuration:(int)a6 sessionActiveDuration:(int)a7;
- (void)sendInputsPressedEvent:(const struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; } *)a0;
- (void)sendRPKitInstantCaptureBufferStartedEventForBundleID:(id)a0;
- (void)sendRPKitInstantCaptureSavedEventForBundleID:(id)a0 productCategory:(id)a1;
- (void)sendRPKitManualRecordingSavedEventForBundleID:(id)a0 productCategory:(id)a1 duration:(int)a2;
- (void)sendRPKitScreenshotSavedEventForBundleID:(id)a0 productCategory:(id)a1;
- (void)sendSettingsButtonCustomizedEventForBundleID:(id)a0 productCategory:(id)a1 button:(id)a2;
- (void)sendSettingsCustomizationsResetEventForBundleID:(id)a0 productCategory:(id)a1;
- (void)sendSettingsCustomizationsToggledEventForBundleID:(id)a0 productCategory:(id)a1 toggledOn:(BOOL)a2;
- (void)sendSettingsCustomizedAppsEventForTotalCustomizedAppsCount:(int)a0;
- (void)sendSettingsDevicesEventForTotalCustomizedControllersCount:(int)a0;
- (void)sendSettingsEnteredEvent;
- (void)sendSettingsIdentifyControllerEventForProductCategory:(id)a0;
- (void)sendSettingsRPKitGesturesCustomized:(id)a0 from:(id)a1;
- (void)unpublishController:(id)a0;

@end
