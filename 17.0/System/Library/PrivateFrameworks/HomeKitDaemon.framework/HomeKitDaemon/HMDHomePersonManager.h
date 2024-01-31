@class NSString, HMIHomePersonManager, HMDHome, HMHomePersonManagerSettings;

@interface HMDHomePersonManager : HMDPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource>

@property (weak) HMDHome *home;
@property (readonly) HMIHomePersonManager *hmiPersonManager;
@property (readonly, copy) HMHomePersonManagerSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)zoneNameForZoneUUID:(id)a0;

- (void).cxx_destruct;
- (BOOL)syncsPersonData;
- (void)configureWithHome:(id)a0;
- (void)handleUpdatedSettings:(id)a0;
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)a0;
- (void)handleUserRemoteAccessDidChangeNotification:(id)a0;
- (id)initWithHome:(id)a0 zoneUUID:(id)a1 workQueue:(id)a2;
- (BOOL)manager:(id)a0 shouldGrantWriteAccessToUser:(id)a1;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (BOOL)sharesFaceClassifications;
- (BOOL)zoneManager:(id)a0 shouldRequestShareInvitationFromUser:(id)a1;
- (id)initWithUUID:(id)a0 zoneManager:(id)a1 coreDataManager:(id)a2 dataInterfaces:(id)a3 workQueue:(id)a4 home:(id)a5;

@end
