@interface HomeUI.ContainedSpeakersItemManager : HFItemManager {
    void /* unknown type, empty encoding */ accessoryElementItemModule;
    void /* unknown type, empty encoding */ removeItem;
    void /* unknown type, empty encoding */ mediaItem;
    void /* unknown type, empty encoding */ accessoryElementContext;
    void /* unknown type, empty encoding */ removeItemSectionIdentifier;
}

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
