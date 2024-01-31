@class BBSettingsGateway, BLTSettingSyncServer, NSURL, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface BLTSpokenSettingSync : NSObject

@property (nonatomic) BOOL localGlobalSpokenSettingEnabled;
@property (nonatomic) BOOL remoteGlobalSpokenSettingEnabled;
@property (retain, nonatomic) NSDate *localGlobalSpokenSettingDate;
@property (retain, nonatomic) NSDate *remoteGlobalSpokenSettingDate;
@property (nonatomic) unsigned long long updatingLocalStateFromRemoteCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BBSettingsGateway *settingsGateway;
@property (retain, nonatomic) BLTSettingSyncServer *syncServer;
@property (retain, nonatomic) NSURL *remoteSettingStoreURL;

- (void).cxx_destruct;
- (BOOL)_queue_isUpdatingLocalStateFromRemote;
- (void)_queue_readSettings;
- (void)_queue_resolveState;
- (void)_queue_setNewLocalStateFromRemote:(BOOL)a0;
- (void)_queue_setUpdatingLocalStateFromRemote;
- (void)_queue_synchronizeSettingsWithLocalEnabled:(BOOL)a0;
- (BOOL)_queue_updateLocalGlobalSpokenSettingEnabledFromUser:(BOOL)a0;
- (BOOL)_queue_updateLocalSetting;
- (void)_queue_writeLocalSetting;
- (void)_queue_writeRemoteSetting;
- (id)_remoteSettingStoreURL;
- (void)bbUpdateLocalGlobalSpokenSettingEnabled:(long long)a0;
- (id)initWithSettingsGateway:(id)a0 syncServer:(id)a1;
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(BOOL)a0 date:(id)a1;

@end
