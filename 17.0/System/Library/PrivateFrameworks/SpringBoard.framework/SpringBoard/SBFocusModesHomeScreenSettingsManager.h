@class SBFocusModesHomeScreenSettingsServer, NSString;

@interface SBFocusModesHomeScreenSettingsManager : NSObject <SBFocusModesHomeScreenSettingsServerDelegate>

@property (retain, nonatomic) SBFocusModesHomeScreenSettingsServer *settingsServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_snapshotRemainingListViews:(id)a0 snapshotDelay:(double)a1 snapshotScale:(double)a2 excludeWallpaper:(BOOL)a3 forFocusModeIdentifier:(id)a4 iconManager:(id)a5 rootFolderView:(id)a6 accumulatedSnapshots:(id)a7 completion:(id /* block */)a8;
- (void)_snapshotRootFolderView:(id)a0 snapshotDelay:(double)a1 snapshotScale:(double)a2 excludeWallpaper:(BOOL)a3 focusModeIdentifier:(id)a4 iconManager:(id)a5 isSuggestedPage:(BOOL)a6 completion:(id /* block */)a7;
- (void)settingsServer:(id)a0 addSuggestedHomeScreenPageWithRequest:(id)a1;
- (void)settingsServer:(id)a0 homeScreenSnapshotsForSuggestedPagesWithRequest:(id)a1 completion:(id /* block */)a2;
- (void)settingsServer:(id)a0 homeScreenSnapshotsWithRequest:(id)a1 completion:(id /* block */)a2;
- (void)settingsServer:(id)a0 updateFocusModeHomeScreenSettingsWithRequest:(id)a1;

@end
