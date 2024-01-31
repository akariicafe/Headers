@class NSString, NSSet, AVSystemController, NSMutableArray, NSObject;
@protocol MPVolumeControllerDataSourceDelegate, OS_dispatch_queue;

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource> {
    BOOL _reloading;
    BOOL _needsReloading;
    BOOL _volumeInitialized;
    BOOL _volumeControlCapabilitiesInitialized;
    BOOL _volumeMutedInitialized;
    float _volume;
    NSMutableArray *_pendingVolumeCompletions;
    NSObject<OS_dispatch_queue> *_avscQueue;
    AVSystemController *_avSystemController;
}

@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic) NSSet *volumeAudioCategories;
@property (nonatomic) BOOL forceAVSystemController;
@property (nonatomic) BOOL supportNativeMute;
@property (weak, nonatomic) id<MPVolumeControllerDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic) unsigned int volumeControlCapabilities;
@property (nonatomic) float volume;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState;
@property (readonly, nonatomic) float EUVolumeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (void)_systemVolumeCapabilitiesDidChange:(id)a0;
- (id)init;
- (void)_tearDown;
- (void)dealloc;
- (id)_reloadQueue;
- (void)_setup;
- (void)beginDecreasingRelativeVolume;
- (void)_routeDidChangeNotification:(id)a0;
- (id)initWithVolumeAudioCategories:(id)a0;
- (id)_categoryForActiveCategory:(id)a0 currentCategory:(id)a1 categories:(id)a2;
- (void)_updateRouteLabelForRoute:(id)a0;
- (void)_reload;
- (void)_systemMuteDidChange:(id)a0;
- (float)_effectiveVolume;
- (void)getVolumeValueWithCompletion:(id /* block */)a0;
- (void)endIncreasingRelativeVolume;
- (void)updateVolumeMuted:(BOOL)a0;
- (void)updateVolumeControlCapabilities:(unsigned int)a0;
- (void)endDecreasingRelativeVolume;
- (void).cxx_destruct;
- (void)_notifyVolumeDidChage:(float)a0 silenceVolumeHUD:(BOOL)a1;
- (void)_setVolumeAudioCategory:(id)a0;
- (void)_systemVolumeDidChange:(id)a0;
- (void)beginIncreasingRelativeVolume;
- (id)initWithVolumeAudioCategory:(id)a0;
- (void)_mediaServerDiedNotification:(id)a0;
- (BOOL)_supportsNativeMute;
- (void)initializeVolume;
- (id)initCommon;
- (void)adjustVolumeValue:(float)a0;
- (id)_mediaPlaybackVolumeAudioCategory;
- (void)updateVolume:(float)a0 silenceVolumeHUD:(BOOL)a1;

@end
