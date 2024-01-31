@class NSString, UIScrollView, UIWindow;
@protocol UIScrollViewMonitorDelegate;

@interface UIScrollViewMonitor : NSObject <_UIViewSubtreeMonitor, _UIScrollViewScrollObserver> {
    UIScrollView *_scrollView;
    UIWindow *_window;
}

@property (weak, nonatomic) id<UIScrollViewMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_monitoredView:(id)a0 willMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (void)_observeScrollViewDidScroll:(id)a0;
- (void)stopMonitoring;
- (void)_monitoredView:(id)a0 didMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (BOOL)_monitorsView:(id)a0;
- (void).cxx_destruct;
- (id)initWithScrollView:(id)a0;

@end
