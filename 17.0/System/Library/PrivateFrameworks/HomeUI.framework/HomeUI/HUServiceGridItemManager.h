@interface HUServiceGridItemManager : HFItemManager

@property (copy, nonatomic) id /* block */ itemProvidersCreator;
@property (nonatomic) long long actionSetSectionIndex;
@property (nonatomic) BOOL shouldGroupByRoom;
@property (nonatomic) BOOL shouldShowSectionHeaders;

- (void).cxx_destruct;
- (id /* block */)_roomComparator;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)_roomForItem:(id)a0;
- (id)initWithDelegate:(id)a0 shouldGroupByRoom:(BOOL)a1 itemProvidersCreator:(id /* block */)a2;
- (id)initWithDelegate:(id)a0 shouldGroupByRoom:(BOOL)a1 shouldShowSectionHeaders:(BOOL)a2 itemProvidersCreator:(id /* block */)a3;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1 shouldGroupByRoom:(BOOL)a2 shouldShowSectionHeaders:(BOOL)a3 itemProvidersCreator:(id /* block */)a4;

@end
