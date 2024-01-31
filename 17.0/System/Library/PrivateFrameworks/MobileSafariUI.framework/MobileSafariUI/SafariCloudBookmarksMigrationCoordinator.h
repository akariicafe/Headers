@class NSString;

@interface SafariCloudBookmarksMigrationCoordinator : WBSCloudBookmarksMigrationCoordinator <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)migrationCoordinator;

- (void)dealloc;
- (void)_detectedLocalMigrationStateTransition:(id)a0;
- (BOOL)_evaluateMigrationEnabled;
- (id)initWithSyncAgent:(id)a0;
- (void)getLocalMigrationStateForMigrationCoordinator:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
