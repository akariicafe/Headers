@class NSNotificationCenter, HMDCameraProfileSettingsManager, NSDictionary, HMDCameraRecordingManager, HMDCameraClipUserNotificationCenter, NSMutableArray, HMDService, HMDCameraRecordingReachabilityEventManager, NSString, NSSet, HMDCameraStreamSnapshotHandler, HMDPredicateUtilities, _HMCameraUserSettings, HMDCameraSnapshotManager, HMFNetMonitor, HMDCameraClipManager, HMDHAPAccessory, HMFTimer, HMDCameraSignificantEventNotificationFilter;
@protocol HMDCameraBulletinBoard;

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate, HMDCameraProfileSettingsManagerDelegate, HMFNetMonitorDelegate, HMFTimerDelegate, HMDCameraSignificantEventNotificationObserver, HMDCameraClipManagerDelegate>

@property (class, retain) id<HMDCameraBulletinBoard> bulletinBoard;

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly) NSSet *cameraStreamManagers;
@property (readonly) HMDCameraSnapshotManager *snapshotManager;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) NSMutableArray *settingProactiveReaders;
@property (readonly) HMFNetMonitor *networkMonitor;
@property (readonly) HMDCameraProfileSettingsManager *cameraSettingsManager;
@property (readonly) HMDCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (readonly) HMDCameraClipUserNotificationCenter *clipUserNotificationCenter;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) HMFTimer *recordingEventsCleanupTimer;
@property (readonly, nonatomic) HMDCameraSignificantEventNotificationFilter *significantEventNotificationFilter;
@property (retain) HMDPredicateUtilities *predicateUtilities;
@property (retain) HMDCameraRecordingManager *cameraRecordingManager;
@property (copy) id /* block */ recordingEventsCleanupTimerFactory;
@property (copy) id /* block */ recordingManagerFactory;
@property (readonly, nonatomic, getter=isMicrophonePresent) BOOL microphonePresent;
@property (readonly, nonatomic, getter=isSpeakerPresent) BOOL speakerPresent;
@property (readonly) _HMCameraUserSettings *currentSettings;
@property (readonly) HMDCameraClipManager *clipManager;
@property (readonly) HMDService *recordingManagementService;
@property (readonly, weak) HMDHAPAccessory *hapAccessory;
@property (readonly, nonatomic, getter=isCameraRecordingFeatureSupported) BOOL supportsCameraRecordingFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (BOOL)hasMessageReceiverChildren;

- (void)timerDidFire:(id)a0;
- (void)setUp;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)dumpState;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)registerForMessages;
- (void)unconfigure;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)cameraProfileSettingsManager:(id)a0 canDisableRecordingWithCompletion:(id /* block */)a1;
- (void)clipManagerDidStartUpCloudZone:(id)a0;
- (void)removeCloudData;
- (BOOL)_areFaceClassificationsSuppressedForSignificantEvent:(id)a0;
- (void)_createCameraRecordingManager;
- (void)_handleNegotiateStreamRequest:(id)a0;
- (void)_handleStreamControlRequest:(id)a0;
- (void)_setControlSupport;
- (void)_setUpBulletinNotificationManagerObserver;
- (void)cameraProfileSettingsManager:(id)a0 canEnableRecordingWithCompletion:(id /* block */)a1;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)a0;
- (void)clipManager:(id)a0 didDeleteClipWithUUID:(id)a1;
- (void)clipManagerDidDisableCloudStorage:(id)a0;
- (void)clipManagerDidStart:(id)a0;
- (void)clipManagerDidStop:(id)a0;
- (void)handleCameraProfileSettingsDidChangeNotification:(id)a0;
- (void)handleResidentsChangedNotification:(id)a0;
- (id)initWithAccessory:(id)a0 services:(id)a1 msgDispatcher:(id)a2 workQueue:(id)a3 home:(id)a4 settingsManager:(id)a5;
- (id)messageReceiverChildren;
- (void)tearDownWithReplacementCameraProfile:(id)a0;
- (void)_postNotificationForUpdatedSignificantEvent:(id)a0;
- (BOOL)_shouldNotifyForSignificantEvent:(id)a0;
- (void)clipManager:(id)a0 didUpdateSignificantEvent:(id)a1;
- (id)initWithAccessory:(id)a0 services:(id)a1 recordingManagementService:(id)a2 msgDispatcher:(id)a3 workQueue:(id)a4 home:(id)a5 settingsManager:(id)a6 uniqueIdentifier:(id)a7 clipManager:(id)a8 clipUserNotificationCenter:(id)a9 reachabilityEventManager:(id)a10 networkMonitor:(id)a11 streamSnapshotHandler:(id)a12 snapshotManager:(id)a13 cameraStreamManagers:(id)a14 significantEventNotificationFilter:(id)a15 notificationCenter:(id)a16;
- (void)notificationManager:(id)a0 didReceiveNotificationForCameraSignificantEventIdentifier:(id)a1 notificationReasons:(unsigned long long)a2;

@end
