@interface VideosUI.DocumentRequestViewController : VideosUI.DocumentViewController <VideosUI.VUIDeeplinkURLHandlingInterceptor> {
    void /* unknown type, empty encoding */ staticPPTDocumentFolderPath;
    void /* unknown type, empty encoding */ viewControllerDocumentIdentifier;
    void /* unknown type, empty encoding */ sendInitialRequestOnViewWillAppear;
    void /* unknown type, empty encoding */ initialControllerRef;
    void /* unknown type, empty encoding */ initialRequestSent;
    void /* unknown type, empty encoding */ documentOptions;
    void /* unknown type, empty encoding */ documentInteractor;
    void /* unknown type, empty encoding */ documentInteractorObserver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pagePerformanceReporter;
    void /* unknown type, empty encoding */ playbackObserver;
    void /* unknown type, empty encoding */ requestContext;
    void /* unknown type, empty encoding */ shouldHideLoadingView;
}

- (BOOL)deeplinkURLWasHandled:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;

@end
