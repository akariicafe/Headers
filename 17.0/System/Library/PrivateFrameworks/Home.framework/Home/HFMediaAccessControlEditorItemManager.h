@class HFMediaAccessControlEditorItemModule;

@interface HFMediaAccessControlEditorItemManager : HFItemManager

@property (readonly, nonatomic) HFMediaAccessControlEditorItemModule *accessControlEditorItemModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 home:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
