@interface VideosUI.EpicInlineViewController : VUIBaseViewController {
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ shelfViewModel;
    void /* unknown type, empty encoding */ horizontalCollectionViewModel;
    void /* unknown type, empty encoding */ lastViewWidth;
    void /* unknown type, empty encoding */ horizontalStackViewController;
    void /* unknown type, empty encoding */ scrollViewMonitor;
}

- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)vui_loadView;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillLayoutSubviews;
- (void)vui_willMoveToParentViewController:(id)a0;
- (void)handleAppDidEnterBackground:(id)a0;
- (void)handleAppWillEnterForeground:(id)a0;
- (void)handleIsPlaybackUIBeingShownDidChange:(id)a0;
- (void)handleVPPADismissed:(id)a0;
- (void)handleVPPAPresented:(id)a0;

@end
