@class MRUWaveformViewController, NSString, MRUNowPlayingController, MRUAmbientCompactNowPlayingView, MRUWaveformController;

@interface MRUAmbientCompactNowPlayingViewController : UIViewController <MRUNowPlayingControllerObserver>

@property (retain, nonatomic) MRUAmbientCompactNowPlayingView *view;
@property (readonly, nonatomic) MRUNowPlayingController *nowPlayingController;
@property (readonly, nonatomic) MRUWaveformController *waveformController;
@property (readonly, nonatomic) MRUWaveformViewController *waveformViewController;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeArtwork:(id)a2;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)a0;
- (void).cxx_destruct;
- (void)updateArtwork;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNowPlayingController:(id)a0;

@end
