@class PPLocalEventStore, PPLocalLocationStore, PPLocalContactStore, PPLocalNamedEntityStore, PPLocalTopicStore;

@interface PPTemporalClusterStorage : NSObject {
    PPLocalEventStore *_eventStore;
    PPLocalTopicStore *_topicStore;
    PPLocalNamedEntityStore *_entityStore;
    PPLocalLocationStore *_locationStore;
    PPLocalContactStore *_contactStore;
}

+ (id)defaultStorage;
+ (id)enrichEntities:(id)a0 mediaRecords:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)eventsWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithEventStore:(id)a0 topicStore:(id)a1 entityStore:(id)a2 locationStore:(id)a3 contactStore:(id)a4;
- (id)rankedTemporalClusterForStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;

@end
