@class NSMapTable, NSMutableSet, HFItemProvider, HMHome;

@interface HUDashboardAccessoryTransformItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems;
@property (retain, nonatomic) NSMapTable *roomTransformedItems;
@property (readonly, nonatomic) HFItemProvider *sourceItemProvider;
@property (readonly, weak, nonatomic) HMHome *home;
@property (nonatomic) BOOL splitAccessoryGroupsByRoom;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)_roomTransformedItemsForItem:(id)a0;
- (id)allTransformedItemsForItem:(id)a0;
- (void)clearTransformedItemsForItem:(id)a0;
- (id)initWithSourceProvider:(id)a0 inHome:(id)a1;
- (id)invalidationReasons;
- (BOOL)needsTransform;
- (id)roomTransformedItemsForItem:(id)a0;
- (id)transformSourceResults:(id)a0;
- (BOOL)wantsRoomTransformForItem:(id)a0;

@end
