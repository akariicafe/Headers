@class SUUIIndexBarEntryDescriptor, SUUIViewElement, SUUIIndexBarEntryViewElement;

@interface SUUIIndexBarSingleEntryListController : SUUIIndexBarEntryListController {
    SUUIIndexBarEntryDescriptor *_entryDescriptor;
    SUUIViewElement *_descriptiveViewElement;
}

@property (readonly, nonatomic) SUUIIndexBarEntryViewElement *entryViewElement;

- (void).cxx_destruct;
- (id)entryDescriptorAtIndex:(long long)a0;
- (BOOL)hidesIndexBar;
- (id)initWithEntryViewElement:(id)a0;
- (BOOL)needsRootTargetViewElement;
- (long long)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)a0 returningRelativeSectionIndex:(out long long *)a1;

@end
