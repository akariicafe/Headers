@class TabController, ContinuousReadingItem;

@interface ContinuousReadingController : NSObject {
    TabController *_tabController;
    int _activeDocumentBookmarkID;
    ContinuousReadingItem *_currentContinuousItem;
    ContinuousReadingItem *_nextContinuousItem;
    ContinuousReadingItem *_previousContinuousItem;
}

@property (nonatomic) BOOL unreadReadingListItemsOnly;

- (void)dealloc;
- (id)previousReadingListItem;
- (id)initWithTabController:(id)a0;
- (id)_tabDocument;
- (void)_updateCachedItemsIfNeeded;
- (id)currentReadingListItem;
- (void).cxx_destruct;
- (id)nextReadingListItem;
- (void)_clearCachedItems;
- (id)_itemAtIndex:(unsigned int)a0 inReadingList:(id)a1;

@end
