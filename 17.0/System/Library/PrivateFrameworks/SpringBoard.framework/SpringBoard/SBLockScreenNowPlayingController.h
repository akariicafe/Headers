@class SBMediaController, NSString, PCPersistentTimer, PTToggleTestRecipe, CSLockScreenSettings;
@protocol SBLockScreenNowPlayingControllerDelegate;

@interface SBLockScreenNowPlayingController : NSObject <PTSettingsKeyObserver> {
    SBMediaController *_mediaController;
    PCPersistentTimer *_disableTimer;
    CSLockScreenSettings *_testSettings;
    PTToggleTestRecipe *_testRecipe;
}

@property (weak, nonatomic) id<SBLockScreenNowPlayingControllerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_timeoutInterval;
- (void)dealloc;
- (void)_addObservers;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_removeObservers;
- (void)_updateToState:(long long)a0;
- (void)_disableTimerFired;
- (void)_invalidateDisableTimer;
- (BOOL)_isMediaRecentlyActive;
- (void)_startDisableTimer;
- (void)_updateNowPlayingPlugin;
- (id)initWithMediaController:(id)a0;
- (BOOL)isNowPlayingActive;

@end
