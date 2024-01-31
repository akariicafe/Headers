@class NSOrderedSet, NSArray;
@protocol SBRecentDisplayItemsPersistenceDelegate;

@interface SBRecentDisplayItemsDataStore : NSObject {
    NSArray *_recentLayouts;
    BOOL _shouldFallbackToRecentAppLayouts;
}

@property (copy, nonatomic) NSOrderedSet *displayItems;
@property (weak, nonatomic) id<SBRecentDisplayItemsPersistenceDelegate> persistenceDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)_displayItemsFromRecentAppLayouts:(id)a0;
- (id)initWithRecentLayouts:(id)a0 fallbackToRecentAppLayouts:(BOOL)a1;

@end
