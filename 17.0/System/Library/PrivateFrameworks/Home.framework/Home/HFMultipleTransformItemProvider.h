@class HFItemProvider, NSMutableDictionary, NSMutableSet;

@interface HFMultipleTransformItemProvider : HFItemProvider

@property (copy, nonatomic) id /* block */ transformationBlock;
@property (retain, nonatomic) NSMutableDictionary *transformedItems;
@property (retain, nonatomic) NSMutableSet *allItems;
@property (readonly, nonatomic) HFItemProvider *sourceProvider;

- (id)items;
- (void).cxx_destruct;
- (id)initWithSourceProvider:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)_subclass_transformItem:(id)a0;
- (id)initWithSourceProvider:(id)a0 multipleTransformationBlock:(id /* block */)a1;
- (id)invalidationReasons;

@end
