@class NSString, UIWebOverflowScrollView;

@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {
    UIWebOverflowScrollView *_scrollView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidScrollToTop:(id)a0;
- (id)initWithScrollView:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_didCompleteScrolling;

@end
