@class NSDictionary;

@interface HFStaticItem : HFItem <NSCopying>

@property (retain, nonatomic) NSDictionary *staticResults;
@property (copy, nonatomic) id /* block */ resultsBlock;

+ (id)emptyItem;

- (id)init;
- (id)initWithResults:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResultsBlock:(id /* block */)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
