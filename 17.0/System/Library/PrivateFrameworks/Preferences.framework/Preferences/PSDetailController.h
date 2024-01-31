@class PSEditingPane;

@interface PSDetailController : PSViewController {
    PSEditingPane *_pane;
}

@property (weak, nonatomic) PSEditingPane *pane;

- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)suspend;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)title;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidUnload;
- (void)saveChanges;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)loadPane;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paneFrame;

@end
