@class UIPageControl, NSString, UIScrollView, UIView;
@protocol WKUIPagingTransitionControllerDelegate, WKUIPagingTransitionControllerAnimationDelegate;

@interface WKUIPagingTransitionController : NSObject <UIScrollViewDelegate> {
    UIView *_currentPageView;
    long long _actualPageNumber;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastVisibleRange;
    double _lastContentOffset;
    long long _pagingAxis;
    struct { int supportsTransitioningView; int supportsTransitioningPage; int supportsDidFinishTransitionForView; } _animationDelegateCache;
}

@property (nonatomic) long long currentPage;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGSize { double width; double height; } pageSize;
@property (nonatomic) double topPadding;
@property (weak, nonatomic) id<WKUIPagingTransitionControllerDelegate> delegate;
@property (weak, nonatomic) id<WKUIPagingTransitionControllerAnimationDelegate> animationDelegate;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (readonly, nonatomic) long long numberOfPages;
@property (readonly, nonatomic) long long dominantPage;
@property (nonatomic) double increaseMusicControlBottomOffset;
@property (nonatomic) long long musicControlPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (long long)_currentPage;
- (long long)_pageForOffset:(double)a0;
- (void)_cancelAnimatedTransitionFromPage:(long long)a0;
- (void)_endAnimatedTransitionToPage:(long long)a0;
- (void)_endTransitionAnimationForPage:(long long)a0 visible:(BOOL)a1;
- (void)_handleScrollViewScrollEnd;
- (BOOL)_isValidPage:(long long)a0;
- (id)_pageViewForPage:(unsigned long long)a0;
- (void)_prepareViewForPage:(unsigned long long)a0 pagingDirection:(long long)a1;
- (void)_setActualPageNumber:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForPage:(long long)a0;
- (long long)dominantPage;
- (id)initWithScrollView:(id)a0 pageSize:(struct CGSize { double x0; double x1; })a1 numberOfPages:(long long)a2 startingPage:(long long)a3 pagingAxis:(long long)a4 delegate:(id)a5;
- (void)reanimateCurrentView;
- (void)resetCurrentView;
- (void)setCurrentPage:(long long)a0 animated:(BOOL)a1;

@end
