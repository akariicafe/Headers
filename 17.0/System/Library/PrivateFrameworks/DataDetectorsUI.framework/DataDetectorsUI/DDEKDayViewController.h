@class EKEvent;

@interface DDEKDayViewController : EKDayViewController

@property (retain) EKEvent *dd_event;

- (void)viewDidLayoutSubviews;
- (void)dd_update_scroll;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;

@end
