@class NSIndexSet, NSDictionary, IKChangeSet;

@interface IKDOMItemsBindingStrategy : IKDOMBindingStrategy

@property (copy, nonatomic) NSIndexSet *autoHighlightedIndexes;
@property (retain, nonatomic) NSDictionary *usedAppPrototypesByIdentifier;
@property (retain, nonatomic) IKChangeSet *itemsChangeSet;

- (void).cxx_destruct;
- (void)didResolveKeys:(id)a0;
- (id)_appDataItemFromDataItem:(id)a0 binding:(id)a1 prototypeIdentifier:(id)a2 autoHighlighted:(BOOL *)a3;
- (void)_reevaluateVisibleIndexRange;
- (void)_updateChildDOMElements;
- (id)initWithDOMBindingController:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleItemsRange;
- (void)willUpdateWithItems:(id)a0 indexTitles:(id)a1 usedPrototypesByIdentifier:(id)a2 changeSet:(id)a3;

@end
