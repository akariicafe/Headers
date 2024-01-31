@protocol SUUIScrollingTabBarContentCollectionViewDelegate;

@interface SUUIScrollingTabBarContentCollectionView : SUUIViewControllerContainerCollectionView

@property (nonatomic) id<SUUIScrollingTabBarContentCollectionViewDelegate> delegate;
@property (readonly, nonatomic, getter=isPerformingLayout) BOOL performingLayout;

- (void)layoutSubviews;
- (void)_reuseCell:(id)a0;

@end
