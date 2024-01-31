@interface HUActivityLogItemModule : HFItemModule {
    void /* unknown type, empty encoding */ activityLogEnableItem;
    void /* unknown type, empty encoding */ home;
}

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithHome:(id)a0 itemUpdater:(id)a1;
- (id)initWithItemUpdater:(id)a0;

@end
