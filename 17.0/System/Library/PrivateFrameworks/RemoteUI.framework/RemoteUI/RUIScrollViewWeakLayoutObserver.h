@protocol _UIScrollViewLayoutObserver;

@interface RUIScrollViewWeakLayoutObserver : NSObject <_UIScrollViewLayoutObserver> {
    id<_UIScrollViewLayoutObserver> _weakLayoutObserver;
}

- (void).cxx_destruct;
- (void)_scrollViewDidLayoutSubviews:(id)a0;
- (id)initWithLayoutObserver:(id)a0;

@end
