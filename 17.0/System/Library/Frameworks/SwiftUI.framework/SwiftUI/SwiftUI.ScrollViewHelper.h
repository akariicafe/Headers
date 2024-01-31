@interface SwiftUI.ScrollViewHelper : NSObject <UIScrollViewDelegate, _UIUpdateCycleIdleObserver> {
    void /* unknown type, empty encoding */ _layoutState;
    void /* unknown type, empty encoding */ _eventState;
    void /* unknown type, empty encoding */ _prefetchState;
    void /* unknown type, empty encoding */ _containerSize;
    void /* unknown type, empty encoding */ axes;
    void /* unknown type, empty encoding */ properties;
    void /* unknown type, empty encoding */ contentMargins;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ defaultDismissKeyboardMode;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ decelerationBias;
    void /* unknown type, empty encoding */ beginPanningOffset;
    void /* unknown type, empty encoding */ isAnimationCheckPending;
    void /* unknown type, empty encoding */ lastEventModes;
    void /* unknown type, empty encoding */ lastVelocity;
    void /* unknown type, empty encoding */ lastOffsetChange;
    void /* unknown type, empty encoding */ lastBoundsSize;
    void /* unknown type, empty encoding */ ignoreUpdates;
    void /* unknown type, empty encoding */ pendingUpdate;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)_updateCycleIdleUntil:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
