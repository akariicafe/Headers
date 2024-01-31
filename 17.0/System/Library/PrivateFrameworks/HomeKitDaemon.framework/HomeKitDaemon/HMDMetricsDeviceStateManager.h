@class HMMDateProvider, NSString, NSDate;
@protocol HAPSystemKeyCountProvider, HMMLogEventSubmitting;

@interface HMDMetricsDeviceStateManager : HMFObject <HMDMetricsDeviceStateProvider, HMDLogEventDailyTaskRunner> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSDate *lastSoftwareUpdateDate;
@property (readonly, weak, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, nonatomic) id<HAPSystemKeyCountProvider> keyCountProvider;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long currentDataSyncState;
@property (readonly) unsigned long long currentHomeManagerStatus;
@property (readonly) unsigned long long bitMappedMissingKeys;
@property (readonly) unsigned long long bitMappedDuplicateKeys;
@property (readonly) long long deviceDaysSinceSoftwareUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerForNotifications;
- (unsigned long long)missingKeysBitMapFromKeyCounts:(id)a0;
- (unsigned long long)bitMaskForKeyType:(unsigned long long)a0;
- (long long)daysSinceSoftwareUpdateEnumForInteger:(long long)a0;
- (unsigned long long)duplicateKeysBitMapFromKeyCounts:(id)a0;
- (void)handleHomeDataLoaded;
- (id)initWithCurrentSoftwareVersion:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2 dateProvider:(id)a3 keyCountProvider:(id)a4 userDefaults:(id)a5;
- (id)initWithLogEventSubmitter:(id)a0 dailyScheduler:(id)a1 dateProvider:(id)a2;
- (void)runDailyTask;
- (void)updateCachedPairingKeyStates;
- (void)updateWithDataSyncState:(unsigned long long)a0;
- (void)updateWithHomeManagerStatus:(unsigned long long)a0;

@end
