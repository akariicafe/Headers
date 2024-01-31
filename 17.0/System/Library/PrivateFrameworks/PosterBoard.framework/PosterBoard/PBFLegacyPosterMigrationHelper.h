@class PBFPosterExtensionDataStore, PBUIPosterWallpaperMigrationInfo, NSObject;
@protocol OS_dispatch_queue;

@interface PBFLegacyPosterMigrationHelper : NSObject

@property (readonly, nonatomic) PBFPosterExtensionDataStore *dataStore;
@property (readonly, nonatomic, getter=isMigrationEnabled) BOOL migrationEnabled;
@property (readonly, nonatomic, getter=isDistinctHomeScreenMigrationEnabled) BOOL distinctHomeScreenMigrationEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *homeMigrationQueue;
@property (readonly, nonatomic) BOOL canMigrateLegacyPoster;
@property (readonly, nonatomic) BOOL canMigrateLegacyLockPoster;
@property (readonly, nonatomic) id legacyPosterPair;
@property (readonly, nonatomic) PBUIPosterWallpaperMigrationInfo *migrationInfo;

- (void).cxx_destruct;
- (BOOL)_shouldAllowMigration;
- (void)finalizeMigrationWithMigratedConfigurationUUID:(id)a0;
- (id)initWithDataStore:(id)a0 legacyPosterPair:(id)a1;
- (id)lockScreenMigrationViewController;
- (void)migrateHomePosterAndAssociateToConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)revertMigrationWithMigratedConfigurationUUID:(id)a0;

@end
