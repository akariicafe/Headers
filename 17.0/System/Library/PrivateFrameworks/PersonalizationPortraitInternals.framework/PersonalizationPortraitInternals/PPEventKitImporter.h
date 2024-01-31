@class PPLocalTopicStore, PPLocalNamedEntityStore, PPLocalEventStore, PPLocalLocationStore, SGSqlEntityStore, PPNamedEntityDissector, SGURLDissector, PPSQLDatabase;

@interface PPEventKitImporter : NSObject {
    PPLocalEventStore *_eventStore;
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalLocationStore *_locationStore;
    PPLocalTopicStore *_topicStore;
    SGSqlEntityStore *_urlStore;
    PPSQLDatabase *_sqlDatabase;
    SGURLDissector *_urlDissector;
    PPNamedEntityDissector *_neDissector;
    Class _dataDetectorMatchClass;
    struct atomic_flag { _Atomic BOOL _Value; } _fullImportInProgress;
}

+ (id)defaultInstance;

- (id)init;
- (id)initWithEventStore:(id)a0 namedEntityStore:(id)a1 locationStore:(id)a2 topicStore:(id)a3 urlStore:(id)a4 urlDissector:(id)a5 namedEntityDissector:(id)a6 dataDetectorMatchClass:(Class)a7 sqlDatabase:(id)a8;
- (BOOL)deleteAndReimportAllData;
- (void).cxx_destruct;
- (id)importEventData;
- (void)importEvent:(id)a0;
- (void)importChangedEvents:(id)a0;
- (id)importEventDataWithShouldContinueBlock:(id /* block */)a0;

@end
