@class UINavigationController, NSString, SBModifierTimelineDetailViewController, UIScrollView, NSMutableArray, UIButton;

@interface SBFluidSwitcherModifierTimelineViewController : UIViewController <SBFluidSwitcherModifierTimelineEntryViewDelegate> {
    NSMutableArray *_entryViews;
    BOOL _isPaused;
    UIScrollView *_scrollView;
    UIButton *_clearButton;
    UIButton *_noiseLevelButton;
    UIButton *_pauseButton;
    UINavigationController *_navigationController;
    SBModifierTimelineDetailViewController *_detailViewController;
}

@property (readonly, nonatomic) BOOL ignoreNoisyEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEntry:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_reset:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_toggleNoiseLevel:(id)a0;
- (void)_togglePause:(id)a0;
- (void)didSelectEntryView:(id)a0;

@end
