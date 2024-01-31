@class NSArray, NSMutableArray, UIPageControl;
@protocol _UIPageIndicatorFeedDelegate;

@interface _UIPageIndicatorFeed : NSObject {
    UIPageControl *_pageControl;
}

@property (retain, nonatomic) NSMutableArray *activeQueue;
@property (retain, nonatomic) NSMutableArray *reuseQueue;
@property (readonly, nonatomic) NSArray *indicators;
@property (weak, nonatomic) id<_UIPageIndicatorFeedDelegate> delegate;

- (id)initWithPageControl:(id)a0;
- (void)updateReuseQueue;
- (void)invalidateIndicators;
- (void)reloadIndicatorImageForPage:(long long)a0;
- (id)activeIndicatorForPage:(long long)a0;
- (id)indicatorForPage:(long long)a0 forSizeOnly:(BOOL)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })indicatorSizeForPage:(long long)a0;
- (id)indicatorForPage:(long long)a0;
- (BOOL)_isPageWithinActiveBounds:(long long)a0;
- (void)reloadIndicatorImages;
- (void)prepareIndicatorsFrom:(long long)a0 to:(long long)a1;
- (struct CGSize { double x0; double x1; })indicatorSizeForCustomImage:(id)a0;

@end
