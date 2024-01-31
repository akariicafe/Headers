@class SKUIViewElement, SKUIIndexBarEntryViewElement, SKUIIndexBarEntryDescriptor;

@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController {
    SKUIIndexBarEntryDescriptor *_entryDescriptor;
    SKUIViewElement *_descriptiveViewElement;
}

@property (readonly, nonatomic) SKUIIndexBarEntryViewElement *entryViewElement;

- (void).cxx_destruct;
- (id)entryDescriptorAtIndex:(long long)a0;
- (BOOL)hidesIndexBar;
- (id)initWithEntryViewElement:(id)a0;
- (BOOL)needsRootTargetViewElement;
- (long long)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)a0 returningRelativeSectionIndex:(out long long *)a1;

@end
