@class _DKEventStream;
@protocol _DKKnowledgeQuerying;

@interface _CDSpotlightEventIndexerDataSource : NSObject

@property (class, readonly, nonatomic) unsigned long long currentVersion;

@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) _DKEventStream *stream;

- (id)bundleIDToSearchableItemsDictionaryFromEvents:(id)a0;
- (void).cxx_destruct;
- (id)bundleIDToSearchableItemsDictionaryWithCreationDateInInterval:(id)a0 limit:(long long)a1 nextBatch:(BOOL *)a2 latestCreationDate:(id *)a3 error:(id *)a4;
- (id)earliestEventCreationDateWithError:(id *)a0;
- (id)initWithKnowledgeStore:(id)a0 eventStream:(id)a1;
- (id)searchableItemIdentifiersForTombstonedEventsInInterval:(id)a0 latestTombstoneDate:(id *)a1 error:(id *)a2;
- (id)searchableItemUniqueIdentifierWithDomain:(id)a0 indexingIdentifier:(id)a1;

@end
