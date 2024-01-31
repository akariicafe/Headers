@class VUIEpisodeDetailView, NSString, VUIViewControllerContentPresenter, VUIMediaItem, UITapGestureRecognizer;
@protocol VUIEpisodeDetailViewControllerDelegate;

@interface VUIEpisodeDetailViewController : UIViewController <UIGestureRecognizerDelegate, VUIEpisodeDetailViewDelegate>

@property (retain, nonatomic) VUIMediaItem *mediaItem;
@property (retain, nonatomic) VUIEpisodeDetailView *detailView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (weak, nonatomic) id<VUIEpisodeDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dismissPopover;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_configureNavigationBar;
- (id)initWithMediaItem:(id)a0;
- (void)_isPlaybackUIBeingShownDidChange:(id)a0;
- (void)didTapPlay;
- (void)dismissTapped:(id)a0;
- (void)reportMetricsPageEvent;

@end
