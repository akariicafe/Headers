@class NSString, NSMutableDictionary, UICollectionView, NSHashTable, NSMutableArray;

@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject <UIScrollViewDelegate> {
    BOOL _shouldPreventFocusScrollPastContentSize;
    BOOL _isHandlingScrollViewDelegateCallout;
    UICollectionView *_collectionView;
    NSMutableDictionary *_sectionToScrollViewMap;
    NSMutableArray *_scrollViewsQueuedForRemoval;
    NSHashTable *_frontMostElements;
    NSHashTable *_elementsBelowOrthogonalScrollView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;

@end
