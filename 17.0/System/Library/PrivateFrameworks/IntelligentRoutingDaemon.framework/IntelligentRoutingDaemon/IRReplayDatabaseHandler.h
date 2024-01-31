@class IRPersistenceManager;

@interface IRReplayDatabaseHandler : NSObject {
    IRPersistenceManager *_persistanceManager;
}

+ (id)exportDatabaseToPath:(id)a0;

- (void).cxx_destruct;
- (id)deviceAttributesFromCandidateIdentifier:(id)a0 withServiceIdentifier:(id)a1;
- (id)deviceAttributesSetFromCandidateIdentifier:(id)a0 withServiceIdentifier:(id)a1;
- (id)getAllServices;
- (id)getEventsForServiceIdentifier:(id)a0;
- (id)getSortedEventsForServiceIdentifier:(id)a0;
- (id)getSortedHistoryEventsForServiceIdentifier:(id)a0;
- (id)getSortedHistoryEventsForServiceIdentifier:(id)a0 useRealTimeMilo:(BOOL)a1;
- (id)initWithPeristenceManager:(id)a0;
- (id)initWithStoreDirectory:(id)a0;
- (id)inspectEventByDate:(id)a0 andServiceIdentifier:(id)a1 historyEvents:(id)a2;

@end
