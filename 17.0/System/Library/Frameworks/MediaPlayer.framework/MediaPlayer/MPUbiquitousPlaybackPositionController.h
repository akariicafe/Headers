@class NSObject, SBCPlaybackPositionDomain, SBCPlaybackPositionSyncService;
@protocol OS_dispatch_queue;

@interface MPUbiquitousPlaybackPositionController : NSObject

@property (class, readonly, nonatomic) MPUbiquitousPlaybackPositionController *sharedUbiquitousPlaybackPositionController;

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) SBCPlaybackPositionSyncService *uppServiceProxy;
@property (retain, nonatomic) SBCPlaybackPositionDomain *uppDomain;
@property (nonatomic, getter=isServiceActive) BOOL serviceActive;
@property (nonatomic, getter=isServiceActive) BOOL beganUsingPlaybackPositionMetadata;
@property (nonatomic) BOOL databaseHasBookmarkableContents;
@property (nonatomic) BOOL externallyActive;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)_applicationDidEnterForegroundNotification:(id)a0;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)_defaultMediaLibraryDidChangeNotification:(id)a0;
- (BOOL)_onQueue_isEnabled;
- (BOOL)_onQueue_shouldBeActive;
- (void)_onServiceQueue_becomeActiveService;
- (id)_onServiceQueue_connectedUPPServiceProxy;
- (void)_onServiceQueue_resignActiveService;
- (void)_onServiceQueue_updateActiveServiceIfNeeded;
- (id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)a0;
- (void)beginUsingPlaybackPositionMetadata;
- (void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)a0 isCheckpoint:(BOOL)a1;
- (void)persistPlaybackPositionMetadataEntity:(id)a0 isCheckpoint:(BOOL)a1 completion:(id /* block */)a2;
- (id)playbackPositionForLocalEntityIdentifier:(id)a0;
- (id)playbackPositionForLocalEntityIdentifiers:(id)a0;

@end
