@class NSString, NSSet, EKEventStore, NSNumber;

@interface EKOccurrenceCacheSearch : NSObject <EKCancellableRemoteOperation> {
    NSSet *_calendars;
    NSString *_searchTerm;
    EKEventStore *_store;
    id /* block */ _callback;
    NSNumber *_replyID;
    BOOL _canceled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchWithCalendars:(id)a0 searchTerm:(id)a1 store:(id)a2 callback:(id /* block */)a3;

- (id)searchTerm;
- (void)run;
- (void)disconnected;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCalendars:(id)a0 searchTerm:(id)a1 store:(id)a2 callback:(id /* block */)a3;
- (int)performSearchOperation:(unsigned int)a0 inCalendars:(id)a1 withEventStore:(id)a2 andSearchTerm:(id)a3;
- (void)receivedBatchResultsFromServer:(id)a0 finished:(BOOL)a1;

@end
