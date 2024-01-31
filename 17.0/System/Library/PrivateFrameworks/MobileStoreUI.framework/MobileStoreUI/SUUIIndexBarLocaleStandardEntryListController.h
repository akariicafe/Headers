@class SUUIIndexBarEntryListViewElement, NSSet, IKViewElementStyle;

@interface SUUIIndexBarLocaleStandardEntryListController : SUUIIndexBarEntryListController {
    SUUIIndexBarEntryListViewElement *_entryListViewElement;
    NSSet *_requiredVisibilitySet;
    IKViewElementStyle *_style;
}

- (void).cxx_destruct;
- (id)entryDescriptorAtIndex:(long long)a0;
- (long long)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)a0 returningRelativeSectionIndex:(out long long *)a1;
- (id)initWithSUUIIndexBarEntryListViewElement:(id)a0;

@end
