@interface UICollectionViewControllerWrapperView : UIView

- (id)_deepestActionResponder;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (id)preferredFocusedView;
- (void)didMoveToSuperview;
- (id)_collectionViewController;

@end
