@class SBTraitsOrientedContentViewControllerView, TRAParticipant;

@interface SBTraitsOrientedContentViewController : SBFTouchPassThroughViewController

@property (retain, nonatomic) SBTraitsOrientedContentViewControllerView *view;
@property (weak, nonatomic) TRAParticipant *contentParticipant;
@property (weak, nonatomic) TRAParticipant *containerParticipant;
@property (copy, nonatomic) id /* block */ actuateAlongsideBlock;

- (void)updateOrientationIfNeeded;
- (id)view;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
