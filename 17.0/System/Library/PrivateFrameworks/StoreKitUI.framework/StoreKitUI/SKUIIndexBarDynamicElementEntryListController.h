@class SKUIDynamicPageSectionIndexMapper, SKUIIndexBarEntryListViewElement, SKUIViewElement, SKUIIndexBarEntryViewElement;
@protocol SKUIEntityProviding;

@interface SKUIIndexBarDynamicElementEntryListController : SKUIIndexBarEntryListController {
    SKUIDynamicPageSectionIndexMapper *_dynamicIndexMapper;
    id<SKUIEntityProviding> _entityProvider;
    SKUIIndexBarEntryViewElement *_indexBarEntryViewElement;
    SKUIViewElement *_templateElement;
}

@property (readonly, nonatomic) SKUIIndexBarEntryListViewElement *entryListViewElement;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)a0;
- (id)entryDescriptorAtIndex:(long long)a0;
- (BOOL)hidesIndexBar;
- (id)initWithEntryListViewElement:(id)a0;
- (BOOL)needsRootTargetViewElement;
- (long long)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)rootTargetIndexBarEntryID;
- (void)setRootTargetViewElement:(id)a0;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)a0 returningRelativeSectionIndex:(out long long *)a1;

@end
