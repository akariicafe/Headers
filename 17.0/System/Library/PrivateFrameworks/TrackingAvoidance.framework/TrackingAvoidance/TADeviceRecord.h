@class TADeviceRecordSettings, NSMutableDictionary, NSDate;
@protocol TAStoreRequestProtocol;

@interface TADeviceRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *deviceRecord;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDToAddress;
@property (retain, nonatomic) NSDate *lastPurgeDate;
@property (retain, nonatomic) NSDate *lastScanAttemptDate;
@property (retain, nonatomic) TADeviceRecordSettings *settings;
@property (weak, nonatomic) id<TAStoreRequestProtocol> delegate;

+ (unsigned long long)_convertTANotificationStateToTANotificationInternalState:(unsigned long long)a0;
+ (BOOL)_isKnownDevice:(unsigned long long)a0;
+ (id)notificationInternalStateToString:(unsigned long long)a0;

- (void)requestAISFetchIfNeeded:(id)a0;
- (id)init;
- (id)_determineFirstObservationDateWithTASuspiciousDevice:(id)a0;
- (unsigned long long)getNumOfAISFetch:(id)a0;
- (void)_setDevice:(id)a0 withInternalState:(unsigned long long)a1 withDate:(id)a2;
- (void)_setDevice:(id)a0 withExternalState:(unsigned long long)a1 withDate:(id)a2;
- (unsigned long long)getAISFetchState:(id)a0;
- (void)stageDetectionResults:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasSurfacedNotificationFor:(id)a0;
- (void)_processAISFetchSuccess:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (id)getLatestAdvertisement:(id)a0;
- (void)_updateKeepInStagingUntil:(id)a0;
- (id)getFirstStagedDetectionDate:(id)a0;
- (id)getLatestBeepOnMoveDate:(id)a0;
- (id)descriptionDictionary;
- (void)mergeWithAnotherDeviceRecord:(id)a0;
- (BOOL)isAISFetchSuccessful:(id)a0;
- (id)_determineHELEKeepInStagingUntil:(id)a0;
- (id)getDeviceUUIDMapping;
- (void)stageDevice:(id)a0 withCurrentDate:(id)a1;
- (unsigned long long)getDeviceNotificationState:(id)a0;
- (void)_updateAISStateOnNotificationStateChange:(id)a0 from:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)processSurfacedAlerts:(id)a0;
- (void)purgeWithClock:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (void)forceStagedDetectionsToSurfaceImmediatelyWithAdvertisement:(id)a0 withReason:(unsigned long long)a1;
- (id)_determineKeepInStagingUntil:(id)a0;
- (unsigned long long)getDeviceOwnershipType:(id)a0;
- (id)description;
- (void)logDeviceRecord;
- (void)forceUpdateAISFetchState:(id)a0 state:(unsigned long long)a1;
- (BOOL)hasStagedImmediateDetections:(id)a0;
- (id)getUnknownBeacon:(id)a0;
- (void)_updateAdvertisement:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (void)ingestTAEvent:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (void)_beepOnMoveForceAlertIfEligableForDeviceRecord:(id)a0 andAdvertisment:(id)a1;
- (void)_performNotificationStateTransitionActionsForDevice:(id)a0 from:(unsigned long long)a1 to:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)processBackgroundDetection:(id)a0;
- (void)_didSurfaceNotificationFor:(id)a0;
- (void)_setDevice:(id)a0 withType:(unsigned long long)a1 withDate:(id)a2;
- (id)createTAOutgoingRequestForUnstagingUpdateFor:(id)a0 withCurrentDate:(id)a1;
- (void)checkForScanRequestsWithClock:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (void)_processPlaySoundSuccess:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)createTAOutgoingRequestWithExpiringTASingleDeviceRecord:(id)a0 withCurrentDate:(id)a1;
- (id)_getDeviceRecordWithUUID:(id)a0;
- (void)removeDevice:(id)a0;
- (BOOL)isKnownDevice:(id)a0;
- (id)getDeviceUUID:(id)a0;
- (unsigned long long)getNumStagedDetections:(id)a0;
- (id)getAccessoryInfo:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_clearStagedDetectionsForDevice:(id)a0;
- (unsigned long long)getDeviceType:(id)a0;
- (void)_createRecordIfNecessaryWithAdvertisement:(id)a0 withDate:(id)a1;
- (void)updateDeviceRecordOnSessionChange:(id)a0 WithCurrentDate:(id)a1;
- (id)getDetectionResultsToPush;
- (id)_getDeviceRecord:(id)a0;

@end
