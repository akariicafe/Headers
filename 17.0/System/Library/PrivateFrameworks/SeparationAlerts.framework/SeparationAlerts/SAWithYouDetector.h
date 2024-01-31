@class NSUUID, NSMutableDictionary, NSHashTable, NSDate, SADeviceRecord, NSMutableSet;
@protocol SABluetoothScanRequestProtocol, SATimeServiceProtocol, SAAnalyticsServiceProtocol, SALocationRequestProtocol;

@interface SAWithYouDetector : NSObject <SAWithYouDetectorServiceProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol>

@property (retain, nonatomic) id<SATimeServiceProtocol> clock;
@property (weak, nonatomic) id<SABluetoothScanRequestProtocol> bluetoothScanner;
@property (weak, nonatomic) id<SALocationRequestProtocol> locationRequester;
@property (retain, nonatomic) id<SAAnalyticsServiceProtocol> analytics;
@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) SADeviceRecord *deviceRecord;
@property (nonatomic) BOOL longScanIsOngoing;
@property (nonatomic) BOOL requestedShortScan;
@property (retain, nonatomic) NSDate *lastLongScanRequest;
@property (retain, nonatomic) NSDate *lastStartOfScan;
@property (retain, nonatomic) NSDate *lastEndOfScan;
@property (nonatomic) BOOL isNotifyWhileTravelingEnabled;
@property (nonatomic) BOOL isPeriodicScansNeeded;
@property (nonatomic) BOOL isInVehicularTravel;
@property (retain, nonatomic) NSDate *nextOpportunisticScanDate;
@property (retain, nonatomic) NSUUID *nextScheduledAlarm;
@property (retain, nonatomic) NSDate *previousBufferEmptyTime;
@property (retain, nonatomic) NSDate *initializationTime;
@property (retain, nonatomic) NSMutableSet *relevantDevicesToFindDuringLongScan;
@property (retain, nonatomic) NSMutableDictionary *foundDevicesDuringCurrentScan;
@property (nonatomic) BOOL isFindingRelevantDevices;
@property (retain, nonatomic) NSDate *lastRelevantDeviceFoundTime;
@property (nonatomic) unsigned long long lastLongScanContext;
@property (nonatomic) unsigned long long extraFoundHELECount;
@property (nonatomic) unsigned long long extraFoundNonHELECount;
@property (retain, nonatomic) NSDate *lastExtraHELEFoundTime;
@property (retain, nonatomic) NSDate *lastExtraNonHELEFoundTime;

+ (id)convertSAWithYouStatusToString:(unsigned long long)a0;
+ (id)convertSAWithYouLongScanContextToString:(unsigned long long)a0;

- (void)ingestTAEvent:(id)a0;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)_updateWithYouStatusOnAdvBufferEmptyEvent:(id)a0;
- (void)_scheduleNextAlarmForScanAfterDate:(id)a0;
- (void)_updateLastWithYouDateAndLocation:(id)a0 forCurrentDate:(id)a1;
- (BOOL)_isStatusBitSetForRelatedDeviceWithShiftIndex:(unsigned long long)a0 fromAdvertisement:(id)a1;
- (unsigned long long)statusForDeviceWithUUID:(id)a0;
- (BOOL)isPeriodicScansAllowed;
- (void)_notifyAllClientsOfWithYouStatusUpdate:(unsigned long long)a0 forDeviceWithUUID:(id)a1;
- (BOOL)_isOnlyMonitoringLeashOnlyDevices;
- (void)_updateWithYouStatusIfNecessaryOnAdvertisement:(id)a0;
- (void)sendScanContextToCoreAnalytics:(unsigned long long)a0 isPartOfLongScan:(BOOL)a1 scanDuration:(double)a2 relevantOnlyScanDuration:(double)a3 foundExtraHELECount:(unsigned long long)a4 extraHELEScanDuration:(double)a5 foundExtraNonHELECount:(unsigned long long)a6 extraNonHELEScanDuration:(double)a7 longScanContext:(unsigned long long)a8;
- (void)_updateWithYouStatusOfRelatedDevices:(id)a0;
- (BOOL)_isRecentEnoughAdvertisement:(id)a0 forCurrentDate:(id)a1;
- (void)resetAllWithYouStatusAndScanStates;
- (BOOL)_deviceIsWatch:(id)a0;
- (void)forceUpdateWithYouStatusToFindDevices:(id)a0 withContext:(unsigned long long)a1;
- (BOOL)_isValidPartID:(long long)a0;
- (void)updateExtraDeviceInformation:(id)a0;
- (void)requestScanIfNeeded;
- (void)_updateWithYouStatusIfNecessaryOnConnectionEvent:(id)a0;
- (void)_deviceWithUUID:(id)a0 isWithYouDuringLongScanOnAdvertisement:(id)a1;
- (void).cxx_destruct;
- (void)forceUpdateWithYouStatus;
- (void)_updateAllWithYouStatusOnScanEndedEvent:(id)a0;
- (void)alarmFiredForUUID:(id)a0;
- (void)forceUpdateWithYouStatusWithShortScan:(BOOL)a0;
- (void)resumePeriodicScan;
- (BOOL)_enoughTimeHasPassedSinceInitializationToMarkNotWithYouForDeviceUUID:(id)a0;
- (BOOL)allRelevantDevicesToFindAreFound;
- (BOOL)isExtraDeviceFound:(id)a0 onDate:(id)a1;
- (BOOL)allSAEnabledDevicesAreFound;
- (void)pausePeriodicScan;
- (void)didChangeTravelTypeFrom:(unsigned long long)a0 to:(unsigned long long)a1 hints:(unsigned long long)a2;
- (unsigned long long)_finalizeToBeVerifiedStatus:(unsigned long long)a0;
- (double)_maxAgeOfWithYouAdvertisementForDeviceUUID:(id)a0;
- (id)initWithBluetoothScanner:(id)a0 locationRequester:(id)a1 deviceRecord:(id)a2 clock:(id)a3 analytics:(id)a4;

@end
