@class NSArray;

@interface HKEnumeratedValueDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) NSArray *enumeratedValueOrder;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_enumeratedValueOrderMapping;
- (id)_enumeratedValuesToIndices:(id)a0 mapping:(id)a1;
- (void)_handleSamples:(id)a0 blockStart:(id)a1 blockEnd:(id)a2 intervalComponents:(id)a3 completion:(id /* block */)a4;

@end
