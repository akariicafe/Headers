@class UIPageControl;
@protocol UIPageControlProgressDelegate;

@interface UIPageControlProgress : NSObject {
    struct { unsigned char initialProgressForPage : 1; unsigned char visibilityDidChange : 1; } _delegateImplements;
}

@property (weak, nonatomic) UIPageControl *pageControl;
@property (weak, nonatomic) id<UIPageControlProgressDelegate> delegate;
@property (nonatomic) float currentProgress;
@property (readonly, nonatomic, getter=isProgressVisible) BOOL progressVisible;

- (id)init;
- (void).cxx_destruct;
- (void)_didChangeCurrentPage;
- (float)_initialProgressForPage:(long long)a0;
- (void)_pageControlDidMoveToWindow;
- (void)_progressVisibilityChanged:(BOOL)a0;

@end
