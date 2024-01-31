@class NSDate, NSString, NSXPCConnection, NSSet, NSMutableArray, NSObject, NSUserDefaults, NSNumber;
@protocol OS_dispatch_queue;

@interface WLKSettingsStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    NSString *_pushToken;
    NSString *_accountID;
    BOOL _optedIn;
    BOOL _migratediOS;
    BOOL _migratedtvOS;
    NSMutableArray *_apps;
    NSUserDefaults *_defaultsAccessor;
    int _didChangeNotificationToken;
    int _userDefaultsDidChangeNotificationToken;
    NSXPCConnection *_connection;
}

@property int ignoreChangesCount;
@property BOOL hasOutstandingChanges;
@property (nonatomic) BOOL privateModeEnabled;
@property (nonatomic) BOOL sportsScoreSpoilersAllowed;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;
@property (readonly, copy, nonatomic) NSSet *suppressedSportsEventIDs;
@property (nonatomic) BOOL optedIn;
@property (copy, nonatomic) NSNumber *optedInVal;
@property (nonatomic) BOOL migratediOS;
@property (nonatomic) BOOL migratedtvOS;
@property (copy, nonatomic) NSString *pushToken;
@property (readonly, copy, nonatomic) NSDate *lastSyncDate;
@property (readonly, copy, nonatomic) NSDate *lastSyncToCloudDate;

+ (BOOL)isSettingsStoreInitializing;
+ (id)sharedSettings;
+ (void)synchronizeSettingsDefaultsForKeys:(id)a0;
+ (BOOL)isHostedInRemoteViewService;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)_dictionaryRepresentation;
- (id)_connection;
- (id)init;
- (id)_dictionaryRepresentationCopyingItems:(BOOL)a0;
- (void)setLastSyncDate:(id)a0;
- (void)setSportsNotificationSuppression:(BOOL)a0 forEventID:(id)a1;
- (void)dealloc;
- (id)_watchListAppsFiltered;
- (void)setStatus:(unsigned long long)a0 forChannelID:(id)a1 externalID:(id)a2;
- (void)_attemptCullingOfObsoleteApp:(id)a0;
- (id)watchListApps;
- (void)beginIgnoringChanges;
- (BOOL)synchronize:(unsigned long long)a0;
- (void)_updateDisplayNamesForUI:(id /* block */)a0;
- (void)publishCrossProcessSettingsChangedNotification:(BOOL)a0;
- (void)_dictionaryOnDisk:(id /* block */)a0;
- (void)setLastSyncToCloudDate:(id)a0;
- (void)refresh;
- (void)_writeToDisk:(id)a0 completion:(id /* block */)a1;
- (void)_tickleKVO;
- (void)synchronize:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_removeWatchListApp:(id)a0;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)setName:(id)a0 forChannelID:(id)a1 externalID:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (id)_supportPath;
- (void)_writeToDisk;
- (void)forceUpdateWithCompletion:(id /* block */)a0;
- (id)watchListAppsFiltered;
- (id)settingsForChannelID:(id)a0 externalID:(id)a1;
- (void)_loadFromDisk;
- (void)clearAllSportsNotificationSuppression;
- (id)consentedBrands;
- (id)_dictionaryRepresentationDataOnly;
- (id)_appsForChannelID:(id)a0;
- (void)endIgnoringChanges;
- (id)deniedBrands;

@end
