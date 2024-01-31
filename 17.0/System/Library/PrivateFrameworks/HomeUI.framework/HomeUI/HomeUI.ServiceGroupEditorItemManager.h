@interface HomeUI.ServiceGroupEditorItemManager : HFItemManager {
    void /* unknown type, empty encoding */ creatingNew;
    void /* unknown type, empty encoding */ nameAndIconItem;
    void /* unknown type, empty encoding */ accessoryElementItemModule;
    void /* unknown type, empty encoding */ selectionController;
    void /* unknown type, empty encoding */ staticItemProvider;
    void /* unknown type, empty encoding */ accessoryElementContext;
}

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
