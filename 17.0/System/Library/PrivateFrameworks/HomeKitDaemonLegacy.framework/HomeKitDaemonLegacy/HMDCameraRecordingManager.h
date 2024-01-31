@class HMFTimer, HMDCameraRecordingSessionNotificationTrigger, HMFMessageDispatcher, HMDCameraRecordingSession, NSObject, HMDCameraProfile, HMDCameraRecordingSettingsControl, HMDCameraRecordingSessionRetryContext, HMDCameraRecordingBulkSendSessionReader, NSString, HMDHAPAccessory, NSMutableSet, HMDCameraRecordingLoadBalancer, HMDCameraRecordingBulkSendSessionInitiator, NSNotificationCenter, NSUUID;
@protocol HMDCameraRecordingManagerDependencyFactory, HMDFeaturesDataSource, OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDCameraRecordingManager : HMFObject <HMDCameraRecordingBulkSendSessionReaderDelegate, HMDCameraRecordingSessionDelegate, HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDCameraClipManagerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (readonly) HMDCameraRecordingLoadBalancer *cameraLoadBalancer;
@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, copy) NSUUID *cameraUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) NSMutableSet *activeRecordingSessions;
@property (readonly) HMDCameraRecordingSessionNotificationTrigger *notificationTrigger;
@property (readonly) HMDCameraRecordingSettingsControl *recordingSettingsControl;
@property (readonly) id<HMDCameraRecordingManagerDependencyFactory> dependencyFactory;
@property (readonly) HMDCameraRecordingBulkSendSessionInitiator *bulkSendSessionInitiator;
@property (weak) HMDHAPAccessory *accessory;
@property (weak) HMDCameraProfile *camera;
@property (retain) HMDCameraRecordingSession *currentRecordingSession;
@property (retain) HMDCameraRecordingBulkSendSessionReader *currentBulkSendSessionReader;
@property (retain) HMFTimer *sessionRetryTimer;
@property (retain) HMDCameraRecordingSessionRetryContext *sessionRetryContext;
@property BOOL didShutDown;
@property (getter=isMotionActive) BOOL motionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (BOOL)_isSessionAlreadyInProgressError:(id)a0;

- (void)shutDown;
- (void)timerDidFire:(id)a0;
- (void)_start;
- (void)dealloc;
- (void)start;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_clipManagerDidStartUpCloudZone;
- (void)clipManagerDidStartUpCloudZone:(id)a0;
- (BOOL)supportsDeviceWithCapabilities:(id)a0;
- (void)_closeCurrentSessionsWithReason:(unsigned short)a0;
- (void)_closeCurrentSessionsWithReason:(unsigned short)a0 error:(id)a1;
- (unsigned short)_closeEventReasonForRecordingSessionError:(id)a0;
- (void)_configureRecordingSession:(id)a0 withTrigger:(unsigned long long)a1;
- (void)_coordinateRecordingSessionForTrigger:(unsigned long long)a0;
- (id)_createRecordingSessionWithHomePresenceByPairingIdentity:(id)a0 selectedConfiguration:(id)a1;
- (void)_forwardRecordingSessionForTrigger:(unsigned long long)a0 withLoadBalancerDecision:(id)a1 deviceFilter:(id /* block */)a2 sessionCoordinationLogEvent:(id)a3 retryAttemptNumber:(long long)a4;
- (void)_handleBulkSendSessionCreated:(id)a0;
- (void)_loadBalanceRecordingSessionForTrigger:(unsigned long long)a0;
- (void)_prepareRecordingSessionForTrigger:(unsigned long long)a0 homePresenceByPairingIdentity:(id)a1 reason:(id)a2;
- (void)_prepareRecordingSessionForTrigger:(unsigned long long)a0 homePresenceByPairingIdentity:(id)a1 reason:(id)a2 completionCallback:(id /* block */)a3;
- (void)_resetCurrentRecordingSession:(id)a0;
- (void)_resetRetryContextWithReason:(id)a0;
- (void)_shutDown;
- (void)_startRecordingSessionForTrigger:(unsigned long long)a0 homePresenceByPairingIdentity:(id)a1 reason:(id)a2 selectedConfiguration:(id)a3 completionCallback:(id /* block */)a4;
- (void)_startSessionRetryTimer;
- (void)_submitLoadBalancingEventWithDecision:(id)a0 numberOfRetries:(unsigned long long)a1;
- (void)bulkSendSessionReader:(id)a0 didFinishWithReason:(unsigned short)a1;
- (void)bulkSendSessionReader:(id)a0 didReadFragment:(id)a1;
- (void)clipManagerDidStop:(id)a0;
- (void)handleCameraSettingsDidChangeNotification:(id)a0;
- (void)handleStartRecordingSessionRequest:(id)a0;
- (id)homePresenceByPairingIdentity;
- (id)initWithCamera:(id)a0 recordingManagementService:(id)a1;
- (id)initWithCamera:(id)a0 recordingManagementService:(id)a1 workQueue:(id)a2 dependencyFactory:(id)a3 notificationCenter:(id)a4;
- (void)notificationTrigger:(id)a0 didObserveTriggerType:(unsigned long long)a1 changeToActive:(BOOL)a2;
- (void)recordingSettingsControlDidConfigure:(id)a0;
- (void)session:(id)a0 didEndWithError:(id)a1;

@end
