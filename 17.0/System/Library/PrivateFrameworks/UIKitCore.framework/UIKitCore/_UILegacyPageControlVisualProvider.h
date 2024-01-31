@class UIImage, NSMutableArray, UIVisualEffectView;

@interface _UILegacyPageControlVisualProvider : _UIPageControlVisualProvider {
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    NSMutableArray *_currentPageImages;
    NSMutableArray *_pageImages;
    UIVisualEffectView *_backgroundVisualEffectView;
    NSMutableArray *_indicators;
}

- (id)preferredIndicatorImage;
- (void)invalidateIndicators;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)pruneArchivedSubviews:(id)a0;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (void)didUpdateNumberOfPages;
- (void)didEndTrackingWithTouch:(id)a0;
- (void)updateDisplayedPageToCurrentPage;
- (void)didUpdatePageIndicatorTintColor;
- (BOOL)_hasCustomImageForPage:(long long)a0 enabled:(BOOL)a1;
- (id)effectiveContentView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_indicatorFrameAtIndex:(long long)a0;
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)a0;
- (id)_pageIndicatorImageForPage:(long long)a0;
- (void)_setDisplayedPage:(long long)a0;
- (double)_indicatorSpacing;
- (id)_cachedPageIndicatorImageForPage:(long long)a0;
- (void)_cachePageIndicatorImages;
- (id)_pageIndicatorCurrentImageForPage:(long long)a0;
- (void)_transitionIndicator:(id)a0 toEnabled:(BOOL)a1 index:(long long)a2;
- (id)defaultActivePageIndicatorImage;
- (void)_drawModernIndicatorInView:(id)a0 enabled:(BOOL)a1;
- (id)_modernColorEnabled:(BOOL)a0;
- (double)_modernCornerRadius;
- (void).cxx_destruct;
- (void)prepare;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_modernBounds;
- (void)layoutSubviews;
- (id)_indicatorViewEnabled:(BOOL)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
