@class NSString, IKChangeSet, NSMutableSet, IKJSDataSourceView, NSArray, IKDOMBindingController;

@interface IKDOMBindingStrategy : NSObject <IKDOMBindingStrategy>

@property (retain, nonatomic) IKChangeSet *sourceItemsChangeSet;
@property (retain, nonatomic) NSMutableSet *updatedItemIDs;
@property (retain, nonatomic) IKChangeSet *filteredChangeSet;
@property (retain, nonatomic) IKJSDataSourceView *dataSourceView;
@property (readonly, weak, nonatomic) IKDOMBindingController *domBindingController;
@property (readonly, copy, nonatomic) NSString *itemsBindingKey;
@property (readonly, weak, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_applyItemsValueWithDataSource:(id)a0;
- (void)didResolveKeys:(id)a0;
- (id)_adjustedIndexTitlesFromDataSource:(id)a0 filteredItems:(id)a1 filteredChangeSet:(id)a2;
- (BOOL)applyValue:(id)a0 forKey:(id)a1;
- (id)initWithDOMBindingController:(id)a0 itemsBindingKey:(id)a1;
- (id)keysAffectingChildren;
- (id)prototypeDependentKeys;
- (void)valueDidChangeForKey:(id)a0 propertyPath:(id)a1 extraInfo:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleItemsRange;

@end
