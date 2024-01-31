@class NSMutableDictionary, HFItemProvider;

@interface HFTransformItemProvider : HFItemProvider

@property (retain, nonatomic) HFItemProvider *sourceProvider;
@property (copy, nonatomic) id /* block */ transformationBlock;
@property (retain, nonatomic) NSMutableDictionary *transformedItems;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithSourceProvider:(id)a0 transformationBlock:(id /* block */)a1;
- (id)invalidationReasons;

@end
