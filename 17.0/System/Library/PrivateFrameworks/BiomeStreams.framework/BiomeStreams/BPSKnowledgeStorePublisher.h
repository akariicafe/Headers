@class _DKEventQuery, NSMutableArray;
@protocol _DKKnowledgeQuerying;

@interface BPSKnowledgeStorePublisher : BPSPublisher

@property (nonatomic) long long remaining;
@property (retain, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) _DKEventQuery *query;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> store;

+ (id)new;

- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (id)init;
- (void)reset;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)_updateCachedQueryResults;
- (id)initWithEventQuery:(id)a0 knowledgeStore:(id)a1;

@end
