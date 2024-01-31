@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {
    NSMutableArray *_queuedIdentifiers;
    NSMutableDictionary *_latestUpdateByIdentifier;
}

- (id)init;
- (void)removeAllStatusUpdates;
- (void).cxx_destruct;
- (id)dequeueNextStatusUpdate;
- (void)enqueueStatusUpdate:(id)a0 forIdentifier:(id)a1;

@end
