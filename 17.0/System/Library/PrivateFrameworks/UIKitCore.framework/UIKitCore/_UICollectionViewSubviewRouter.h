@class UIView, NSMutableArray, NSMapTable;

@interface _UICollectionViewSubviewRouter : NSObject {
    NSMutableArray *_bookmarks;
    NSMapTable *_subviewToBookmarkMap;
    UIView *_managedUpdateView;
    BOOL _useLegacyRouting;
    UIView *_container;
}

- (void)willRemoveSubview:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)shouldAddSubview:(id)a0 atPosition:(long long *)a1 relativeTo:(id)a2;
- (BOOL)shouldBringSubviewToFront:(id)a0;
- (BOOL)shouldExchangeSubviewAtIndex:(long long)a0 withSubviewAtIndex:(long long)a1;
- (BOOL)shouldSendSubviewToBack:(id)a0;

@end
