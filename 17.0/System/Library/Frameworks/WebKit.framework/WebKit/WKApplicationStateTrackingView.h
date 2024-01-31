@class UIView;

@interface WKApplicationStateTrackingView : UIView {
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webViewToTrack;
    struct unique_ptr<WebKit::ApplicationStateTracker, std::default_delete<WebKit::ApplicationStateTracker>> { struct __compressed_pair<WebKit::ApplicationStateTracker *, std::default_delete<WebKit::ApplicationStateTracker>> { struct ApplicationStateTracker *__value_; } __ptr_; } _applicationStateTracker;
}

@property (readonly, nonatomic) BOOL isBackground;
@property (readonly, nonatomic) UIView *_contentView;

- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)willMoveToWindow:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 webView:(id)a1;
- (void)_applicationDidFinishSnapshottingAfterEnteringBackground;
- (void)_didCompleteSnapshotSequence;
- (void)_willBeginSnapshotSequence;

@end
