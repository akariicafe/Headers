@class HFItem, NSSet, HMAccessory, HFServiceItemProvider, HMHome;
@protocol HFServiceLikeItem;

@interface HUChildServiceEditorItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *sourceItem;
@property (retain, nonatomic) HFServiceItemProvider *childServiceItemProvider;
@property (readonly, nonatomic) unsigned long long editingMode;
@property (readonly, nonatomic) HMHome *home;

+ (id /* block */)childItemComparator;
+ (id)supportedServiceTypes;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)_createItemProviders;
- (id)_isConfiguredControlItemForItem:(id)a0;
- (BOOL)canToggleConfigurationStateForItem:(id)a0;
- (long long)configurationStateForItem:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 sourceItem:(id)a2 mode:(unsigned long long)a3;
- (id)toggleConfigurationStateForItem:(id)a0;

@end
