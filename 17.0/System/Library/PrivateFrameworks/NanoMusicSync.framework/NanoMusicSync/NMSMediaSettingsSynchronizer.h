@class NSUserDefaults;

@interface NMSMediaSettingsSynchronizer : NSObject {
    BOOL _isObserving;
    NSUserDefaults *_mediaPlaybackCoreDefaults;
    NSUserDefaults *_mobileIPodDefaults;
    NSUserDefaults *_musicDefaults;
    NSUserDefaults *_nanoMusicSyncDefaults;
    NSUserDefaults *_podcastsDefaults;
}

@property (class, readonly) NMSMediaSettingsSynchronizer *sharedSynchronizer;

- (id)_podcastsUserDefaults;
- (void)dealloc;
- (void)_syncPodcastDefaultsIfNecessary;
- (void)_migrateMusicDefaultsIfNecessary;
- (id)_podcastsAppGroupPath;
- (long long)_preferredGreenTeaMusicStreamingResolutionPreference;
- (void)_createDefaultGreenTeaSettingsIfNecessary;
- (void)beginObservingUpdates;
- (void)_reconcileGreenTeaSettingsIfNecessary;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)endObservingUpdates;

@end
