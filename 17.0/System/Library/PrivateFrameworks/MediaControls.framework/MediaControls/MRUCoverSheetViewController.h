@class MRUNowPlayingViewController, MediaControlsInteractionRecognizer, MRUCoordinatedUpdateController, MRUVisualStylingProvider, NSString, NSArray, MRUCoverSheetView;
@protocol MRUCoverSheetViewControllerDelegate;

@interface MRUCoverSheetViewController : UIViewController <MRUNowPlayingViewControllerDelegate, MRUCoordinatedUpdateControllerDelegate, UIGestureRecognizerDelegate, MTVisualStylingRequiring>

@property (retain, nonatomic) MRUCoverSheetView *view;
@property (retain, nonatomic) MRUCoverSheetView *viewIfLoaded;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (retain, nonatomic) MRUNowPlayingViewController *nowPlayingViewController;
@property (retain, nonatomic) MRUCoordinatedUpdateController *coordinatedUpdateController;
@property (retain, nonatomic) MediaControlsInteractionRecognizer *interactionRecognizer;
@property (weak, nonatomic) id<MRUCoverSheetViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long layout;
@property (copy, nonatomic) id /* block */ preferredContentSizeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)nowPlayingViewController:(id)a0 didChangeSizeWithAnimations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (void)updateVisualStyling;
- (void)updatePreferredContentSize;
- (void)didReceiveInteraction:(id)a0;
- (void)loadView;
- (void)updateRestrictedRects;
- (BOOL)_canShowWhileLocked;
- (id)_childViewControllersForAlwaysOnTimelines;
- (void).cxx_destruct;
- (void)coordinatedUpdateController:(id)a0 processCoordinatedUpdates:(id /* block */)a1 completion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
