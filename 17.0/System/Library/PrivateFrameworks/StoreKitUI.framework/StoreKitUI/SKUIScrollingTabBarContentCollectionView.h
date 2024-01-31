@protocol SKUIScrollingTabBarContentCollectionViewDelegate;

@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView

@property (nonatomic) id<SKUIScrollingTabBarContentCollectionViewDelegate> delegate;
@property (readonly, nonatomic, getter=isPerformingLayout) BOOL performingLayout;

- (void)layoutSubviews;
- (void)_reuseCell:(id)a0;

@end
