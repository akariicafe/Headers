@class SUUIDynamicPageSectionIndexMapper, SUUIIndexBarEntryViewElement, SUUIIndexBarEntryListViewElement, SUUIViewElement;
@protocol SUUIEntityProviding;

@interface SUUIIndexBarDynamicElementEntryListController : SUUIIndexBarEntryListController {
    SUUIDynamicPageSectionIndexMapper *_dynamicIndexMapper;
    id<SUUIEntityProviding> _entityProvider;
    SUUIIndexBarEntryViewElement *_indexBarEntryViewElement;
    SUUIViewElement *_templateElement;
}

@property (readonly, nonatomic) SUUIIndexBarEntryListViewElement *entryListViewElement;

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
