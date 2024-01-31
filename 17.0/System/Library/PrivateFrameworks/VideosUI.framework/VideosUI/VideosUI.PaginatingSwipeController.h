@interface VideosUI.PaginatingSwipeController : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ isSwiping;
    void /* unknown type, empty encoding */ metadataFadeInSpeed;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gesture;
    void /* unknown type, empty encoding */ isAutoSwiping;
    void /* unknown type, empty encoding */ contentViews;
    void /* unknown type, empty encoding */ transitionViews;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cachedTransitionViews;
    void /* unknown type, empty encoding */ currentView;
    void /* unknown type, empty encoding */ leadingView;
    void /* unknown type, empty encoding */ trailingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mediaShowcaseConfig;
    void /* unknown type, empty encoding */ carouselBehaviorEnabled;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)didPanOnView:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
