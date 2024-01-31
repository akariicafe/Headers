@interface HealthVisualization.AggregateChangeDetector : NSObject {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ includeChangeDetails;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ deliveryQueue;
    void /* unknown type, empty encoding */ changesHandler;
    void /* unknown type, empty encoding */ queries;
    void /* unknown type, empty encoding */ otherChangePublishers;
    void /* unknown type, empty encoding */ otherChanges;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ lock_pendingChangeSet;
    void /* unknown type, empty encoding */ lock_pendingError;
    void /* unknown type, empty encoding */ lock_dispatchPending;
    void /* unknown type, empty encoding */ lock_state;
}

- (id)init;
- (void).cxx_destruct;

@end
