@class NSMutableDictionary;

@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource>

@property (retain, nonatomic) NSMutableDictionary *batches;

+ (id)batchesFromEvents:(id)a0;

- (void)didFinishBatching;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;
- (BOOL)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)skipEvents:(id)a0 error:(id *)a1;
- (id)initWithEvents:(id)a0;

@end
