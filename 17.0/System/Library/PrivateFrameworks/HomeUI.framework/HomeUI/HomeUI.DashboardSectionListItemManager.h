@class HMHome;

@interface HomeUI.DashboardSectionListItemManager : HFItemManager {
    void /* unknown type, empty encoding */ roomItemProvider;
    void /* unknown type, empty encoding */ categoryItemProvider;
    void /* unknown type, empty encoding */ staticItemProvider;
    void /* unknown type, empty encoding */ sceneSectionItem;
    void /* unknown type, empty encoding */ cameraSectionItem;
    void /* unknown type, empty encoding */ favoriteSectionItem;
    void /* unknown type, empty encoding */ room;
    void /* unknown type, empty encoding */ reorderableSectionList;
}

@property (nonatomic, retain) HMHome *home;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
