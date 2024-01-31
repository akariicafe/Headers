@interface HUAccessoryRepresentableItemModule : HomeUI.AccessoryItemModule {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ selectionController;
    void /* unknown type, empty encoding */ accessoryItemProvider;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 in:(id)a1 itemUpdater:(id)a2;
- (id)buildItemProviders;

@end
