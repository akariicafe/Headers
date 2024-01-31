@class SBDisplayPortObserver, NSString, NSTimer, MRScreenMirroringObserver, SBAVSystemControllerCache, SBSBackgroundActivityAssertion, SBDirectToAirPlayController;

@interface SBVideoOutController : NSObject <FBSDisplayObserving, SBAVSystemControllerCacheObserver, SBDisplayPortObserverDelegate> {
    BOOL _screenSharingViaAVSystemController;
    BOOL _screenSharingViaDisplayMonitor;
    BOOL _screenSharingSetsBackgroundActivity;
    NSTimer *_screenSharingBackgroundActivityTimer;
    NSTimer *_videoOutBackgroundActivityTimer;
    MRScreenMirroringObserver *_screenMirroringObserver;
    SBSBackgroundActivityAssertion *_screenSharingBackgroundActivityAssertion;
    SBSBackgroundActivityAssertion *_videoOutBackgroundActivityAssertion;
    SBAVSystemControllerCache *_avCache;
    SBDirectToAirPlayController *_directToAirPlayController;
    SBDisplayPortObserver *_displayPortObserver;
}

@property (readonly, nonatomic, getter=isScreenSharing) BOOL screenSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void)_registerForNotifications;
- (id)init;
- (void)dealloc;
- (void)_authenticationStateChanged:(id)a0;
- (void)_unregisterForNotifications;
- (void).cxx_destruct;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)_updateAVRoutes;
- (void)_notifyThatScreenSharingChanged;
- (void)_clearScreenSharingBackgroundActivityAssertion;
- (void)_clearVideoOutBackgroundActivityAssertion;
- (BOOL)_displayMonitorHasAConnectedExternalIdentity;
- (void)_startVideoOutBackgroundActivityAssertion;
- (void)_updateDisplayMonitorState;
- (void)_updateScreenMirroringObserverWithSuppressionPreferenceFromDefaults:(id)a0;
- (void)_updateScreenSharingBackgroundActivityAssertionSuppressionPreference:(id)a0;
- (void)_updateVideoOutBackgroundActivityAssertion;
- (void)cache:(id)a0 didUpdateAirplayDisplayActive:(BOOL)a1;
- (void)cacheDidRebuildAfterServerDeath:(id)a0;
- (void)displayPortObserver:(id)a0 connectionStateChanged:(BOOL)a1;
- (void)updateScreenSharingBackgroundActivityAssertion;

@end
