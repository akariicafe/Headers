@class PPLocalEventStore;

@interface PPQuickTypeEventsServant : NSObject <PPQuickTypeServantProtocol> {
    PPLocalEventStore *_localEventStore;
}

- (id)init;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (void).cxx_destruct;

@end
