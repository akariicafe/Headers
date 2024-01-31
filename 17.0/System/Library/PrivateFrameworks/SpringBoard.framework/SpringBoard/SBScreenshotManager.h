@class SBSceneManagerCoordinator, _SBScreenshotPersistenceCoordinator;
@protocol SBScreenshotManagerDataSource;

@interface SBScreenshotManager : NSObject

@property (retain, nonatomic, getter=_sceneManagerCoordinator, setter=_setSceneManagerCoordinator:) SBSceneManagerCoordinator *sceneManagerCoordinator;
@property (retain, nonatomic, getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:) _SBScreenshotPersistenceCoordinator *persistenceCoordinator;
@property (readonly, nonatomic) id<SBScreenshotManagerDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)saveScreenshots;
- (id)_fetchEligibleScreenshotProvidersForSnapshotting;
- (id)_initWithDataSource:(id)a0 persistenceCoordinator:(id)a1 sceneManagerCoordinator:(id)a2;
- (id)_providerForScreen:(id)a0;
- (void)saveScreenshotsWithCompletion:(id /* block */)a0;

@end
