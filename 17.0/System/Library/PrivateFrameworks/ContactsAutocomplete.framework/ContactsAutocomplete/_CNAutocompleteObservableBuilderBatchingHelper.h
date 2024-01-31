@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject

@property (readonly, nonatomic) NSArray *batches;

- (void).cxx_destruct;
- (void)addObservable:(id)a0 toBatchAtIndex:(unsigned long long)a1;
- (id)batchedObservables;
- (id)initWithBatchCount:(unsigned long long)a0;

@end
