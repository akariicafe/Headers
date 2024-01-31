@class NSTimer, NSString, NSArray, MRUSpatialAudioMode, MRUSystemOutputDeviceRouteController, MRUSpatialAccessibilityObserver, MRUVolumeNowPlayingInfo, MRNowPlayingAudioFormatController, NSCache;
@protocol MRUSpatialAudioControllerDelegate;

@interface MRUSpatialAudioController : NSObject <MRUSystemOutputDeviceRouteControllerObserver, MRNowPlayingAudioFormatControllerDelegate, MRUSpatialAccessibilityObserverDelegate, MRExpanseManagerObserver>

@property (retain, nonatomic) MRNowPlayingAudioFormatController *audioFormatController;
@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSTimer *optimisticSpatialAudioActiveTimer;
@property (nonatomic) BOOL isDeviceSpatialAudioSupported;
@property (nonatomic) int accessoryStereoHFPStatus;
@property (retain, nonatomic) MRUSpatialAccessibilityObserver *accessibilityObserver;
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (weak, nonatomic) id<MRUSpatialAudioControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *availableModes;
@property (retain, nonatomic) MRUSpatialAudioMode *selectedMode;
@property (readonly, nonatomic) MRUVolumeNowPlayingInfo *nowPlayingInfo;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isMultichannel;
@property (readonly, nonatomic) BOOL isMultichannelAvailable;
@property (readonly, nonatomic) NSString *disabledDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopMonitoring;
- (void)dealloc;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)updateNowPlaying;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (void)expanseManagerDidJoinExpanseSession:(id)a0;
- (void)expanseManagerDidLeaveExpanseSession:(id)a0;
- (void)nowPlayingAudioFormatController:(id)a0 didChangeAudioFormatApplication:(id)a1;
- (void)nowPlayingAudioFormatController:(id)a0 didChangeAudioFormatContentInfo:(id)a1;
- (void)accessibilityHeadTrackChangedNotification;
- (BOOL)isSpatialAudioActive;
- (id)preferenceForBundleID:(id)a0 outputDevice:(id)a1;
- (id)preferencesForMode:(id)a0 previousPreferences:(id)a1;
- (void)resetOptimisticSpatialAudioActive;
- (void)setPreferences:(id)a0 forBundleID:(id)a1 outputDevice:(id)a2;
- (void)spatialAccessilityObserver:(id)a0 didChangeHeadTrackingEnabled:(BOOL)a1;
- (void)spatialAccessilityObserver:(id)a0 didChangeMonoAudioEnabled:(BOOL)a1;
- (void)startOptimisticSpatialAudioActive;
- (void)stopOptimisticSpatialAudioActive;
- (void)updateDeviceSpatialAudioSupported;
- (void)updateFaceTimeHeadTrackedSupported;
- (void)updateSpatialAudioModes;

@end
