@class NSString, MPMediaControls, MRUAmbientNowPlayingView, MRUNowPlayingController, MSVTimer, UIViewController;
@protocol MRUBackdropControllerProtocol;

@interface MRUAmbientNowPlayingViewController : UIViewController <MRUNowPlayingControllerObserver, MRUArtworkViewObserver>

@property (retain, nonatomic) MRUAmbientNowPlayingView *view;
@property (retain, nonatomic) MRUAmbientNowPlayingView *viewIfLoaded;
@property (retain, nonatomic) MRUNowPlayingController *controller;
@property (retain, nonatomic) MPMediaControls *mediaControls;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic) long long artworkTransitionDirection;
@property (retain, nonatomic) MSVTimer *artworkTransitionDirectionTimer;
@property (retain, nonatomic) UIViewController<MRUBackdropControllerProtocol> *backdropViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeArtwork:(id)a2;
- (void)updateTimeControls;
- (void)artworkView:(id)a0 didChangeArtworkImage:(id)a1;
- (void)updateTransportControls;
- (void)viewDidLoad;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeTransportControls:(id)a2;
- (void)loadView;
- (void)presentRoutingControlsFromSourceView:(id)a0;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeNowPlayingInfo:(id)a2;
- (void)nowPlayingController:(id)a0 endpointController:(id)a1 didChangeRoute:(id)a2;
- (BOOL)_canShowWhileLocked;
- (BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)a0;
- (void).cxx_destruct;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeTimeControls:(id)a2;
- (void)updateArtwork;
- (void)updateVolumeControls;
- (void)didSelectRoutingButton:(id)a0;
- (void)updateRoutingButton;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateNowPlayingInfo;
- (void)embedBackdropViewController;
- (id)initWithNowPlayingController:(id)a0;
- (void)removeBackdropViewController;
- (void)transportButtonTap:(id)a0;
- (void)updateEverything;

@end
