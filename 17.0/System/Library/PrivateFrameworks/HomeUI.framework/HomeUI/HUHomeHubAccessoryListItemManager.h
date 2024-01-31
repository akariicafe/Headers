@class NSSet;

@interface HUHomeHubAccessoryListItemManager : HFItemManager

@property (retain, nonatomic) NSSet *accessories;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_itemForAccessory:(id)a0;
- (id)initWithAccessories:(id)a0 delegate:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
