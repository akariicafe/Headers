@class NSString, MRUNowPlayingController;

@interface MRURouteRecommendationPlatterViewController : UIViewController <MRUNowPlayingControllerObserver>

@property (retain, nonatomic) MRUNowPlayingController *nowPlayingController;
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
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeNowPlayingInfo:(id)a2;
- (void)nowPlayingController:(id)a0 endpointController:(id)a1 didChangeRoute:(id)a2;
- (BOOL)_canShowWhileLocked;
- (BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleTapGestureRecognizer:(id)a0;

@end
