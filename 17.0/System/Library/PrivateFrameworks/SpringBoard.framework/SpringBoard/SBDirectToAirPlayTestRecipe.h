@class NSString, SBApplication;

@interface SBDirectToAirPlayTestRecipe : NSObject <SBTestRecipe> {
    SBApplication *_currentlyReadyApp;
    SBApplication *_currentlyPlayingApp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void).cxx_destruct;
- (id)title;
- (id)_anyForegroundApplication;
- (void)_claimForegroundAppIsPlayingVideo;
- (void)_clearPlayingApp;

@end
