@class HFItem;

@interface HFTransformItem : HFItem <NSCopying>

@property (nonatomic, readonly) HFItem *transformedSourceItem;
@property (retain, nonatomic) HFItem *sourceItem;
@property (copy, nonatomic) id /* block */ optionsTransformBlock;
@property (copy, nonatomic) id /* block */ resultsTransformBlock;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithSourceItem:(id)a0 resultKeyExclusionFilter:(id)a1;
- (id)initWithSourceItem:(id)a0 resultKeyFilter:(id)a1;
- (id)initWithSourceItem:(id)a0 transformationBlock:(id /* block */)a1;
- (id)initWithSourceItem:(id)a0 updateOptionsTransformBlock:(id /* block */)a1 resultsTransformBlock:(id /* block */)a2;

@end
