@class NSString, NSMutableDictionary, PRSWallpaperPublisher, PRSServerPosterPath;
@protocol PBFWallpaperPublisherDelegate;

@interface PBFWallpaperPublisher : NSObject <PRSWallpaperPublisherDelegate> {
    PRSWallpaperPublisher *_wallpaperPublisher;
    PRSServerPosterPath *_paths[4];
    PRSServerPosterPath *_lastSentPaths[4];
    NSMutableDictionary *_pathsByUUID;
    NSMutableDictionary *_isPairedByUUID;
}

@property (retain, nonatomic) id<PBFWallpaperPublisherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_update;
- (id)init;
- (void)noteSnapshotUpdateForPath:(id)a0 snapshotType:(id)a1;
- (void).cxx_destruct;
- (void)issueUpdateForRoles:(id)a0;
- (void)wallpaperPublisherDidReceiveObserverConnection;
- (void)issuePosterCollectionUpdate:(id)a0;
- (void)_compact;
- (BOOL)_updatePath:(id)a0 addingIfNotExists:(BOOL)a1;
- (void)_updateSelectedLockPath:(id)a0 selectedHomePath:(id)a1 activeLockPath:(id)a2 activeHomePath:(id)a3;
- (void)activatePublishingOfCollectionsForRole:(id)a0;
- (void)activatePublishingOfRoles:(id)a0;
- (void)activateWithSelectedLockPath:(id)a0 selectedHomePath:(id)a1 activeLockPath:(id)a2 activeHomePath:(id)a3 recentlyChanged:(BOOL)a4;
- (void)updateHomePath:(id)a0 matchingLockPath:(id)a1;
- (void)updatePath:(id)a0;
- (void)updateSelectedLockPath:(id)a0 selectedHomePath:(id)a1 activeLockPath:(id)a2 activeHomePath:(id)a3;

@end
