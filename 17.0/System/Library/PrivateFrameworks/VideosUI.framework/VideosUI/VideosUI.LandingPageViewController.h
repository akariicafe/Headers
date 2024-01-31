@interface VideosUI.LandingPageViewController : VideosUI.VUIViewController {
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ pageMetrics;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ activeServiceRequest;
    void /* unknown type, empty encoding */ stackViewController;
    void /* unknown type, empty encoding */ lastRefreshTime;
    void /* unknown type, empty encoding */ refreshTTL;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ landingPagePerformanceReporter;
}

- (void)handleAppWillEnterForeground:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;
- (void)vui_willMoveToParentViewController:(id)a0;

@end
