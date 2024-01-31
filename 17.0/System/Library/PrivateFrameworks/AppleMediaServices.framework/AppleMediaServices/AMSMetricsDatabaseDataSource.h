@class NSString, NSObject, AMSMetricsDatabase;
@protocol OS_dispatch_queue;

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource>

@property (readonly, nonatomic) AMSMetricsDatabase *database;
@property (retain, nonatomic) NSString *currentLockKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long eventCount;

- (id)enqueueEvents:(id)a0;
- (void)dealloc;
- (void)didFinishBatching;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;
- (BOOL)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;
- (void)removeAllEvents;
- (id)initWithContainerIdentifier:(id)a0;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)skipEvents:(id)a0 error:(id *)a1;

@end
