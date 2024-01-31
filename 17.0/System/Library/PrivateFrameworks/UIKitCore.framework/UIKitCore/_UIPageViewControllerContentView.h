@class _UIQueuingScrollView, UIPageViewController, UIPageControl;

@interface _UIPageViewControllerContentView : UIView {
    UIPageViewController *_pageViewController;
}

@property (readonly, nonatomic) _UIQueuingScrollView *scrollView;
@property (readonly, nonatomic) UIPageControl *pageControl;

- (double)_pageSpacing;
- (BOOL)canBecomeFocused;
- (id)preferredFocusedView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scrollViewFrame;
- (void)_setupPageControl:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPageViewController:(id)a1;
- (void)invalidatePageViewController;

@end
