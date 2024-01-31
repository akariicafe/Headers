@class ACMonitoredAccountStore, NSArray, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HUHearingAidSettings : HCSettings <ACMonitoredAccountStoreDelegateProtocol> {
    ACMonitoredAccountStore *_accountStore;
    int _contentProtectionNotifyToken;
    BOOL _finishediCloudSetup;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *icloudInitializationQueue;
@property (retain, nonatomic) NSDictionary *pairedHearingAids;
@property (readonly, nonatomic) NSArray *peripheralUUIDs;
@property (nonatomic) BOOL clearPartialPairing;
@property (retain, nonatomic) NSDictionary *knownPeripheralUUIDs;
@property (nonatomic) BOOL independentHearingAidSettings;
@property (nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (nonatomic) long long callAudioRoute;
@property (nonatomic) long long mediaAudioRoute;
@property (nonatomic) BOOL multideviceSettingsEnabled;
@property (nonatomic) BOOL multideviceAudioEnabled;
@property (nonatomic) BOOL shouldStreamSystemSounds;
@property (nonatomic) long long complicationPreferredDisplayMode;
@property (nonatomic) int availableInputEars;
@property (nonatomic) int earsSupportingWatch;
@property (nonatomic) int preferredInputEar;
@property (retain, nonatomic) NSString *availableHearingDeviceName;
@property (nonatomic) unsigned long long usedHearingFeatures;
@property (nonatomic) BOOL exportsLiveListenToFile;
@property (nonatomic) BOOL liveHeadphoneLevelEnabled;
@property (nonatomic) BOOL anyGizmoLiveHeadphoneLevelEnabled;
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelEnabled;
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelNPEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateStreamingPreference;
- (void)removeDeviceIDFromCloudDenylist:(id)a0;
- (BOOL)shouldStoreLocally;
- (BOOL)isiCloudPaired;
- (void)accountWasRemoved:(id)a0;
- (id)keysToSync;
- (void)logMessage:(id)a0;
- (void)iCloudAccountDidChange:(id)a0;
- (void)accountWasAdded:(id)a0;
- (BOOL)isPairedWithFakeHearingAids;
- (id)init;
- (void)dealloc;
- (id)convertPersistentRepresentation:(id)a0 fromVersion:(float)a1 toVersion:(float)a2;
- (void)_accessibilitySettingsChangedOnCompanion;
- (void)_updateTripleClickOptionsForPairedAids:(id)a0;
- (void)pushLocalHearingAidsToiCloud;
- (void)pairedWatchDidChange:(id)a0;
- (BOOL)shouldPushLocalAidsToiCloud;
- (BOOL)isDeviceIDOnCloudDenylist:(id)a0;
- (void)accountCredentialChanged:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldUseiCloud;
- (BOOL)isPairedWithRealHearingAids;
- (void)addDeviceIDToCloudDenylist:(id)a0;
- (void)_initializeICloudSetup;
- (id)deviceIDForPairingInformation:(id)a0;
- (unsigned long long)hearingAidsLEAVersionFromiCloud;
- (void)icloudHearingSettingsDidChange:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)accountWasModified:(id)a0;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)setLocalHearingAidsFromiCloud:(id)a0;

@end
