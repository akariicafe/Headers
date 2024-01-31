@class NSMutableDictionary, EKEventStore;
@protocol EKSyncStatusChangeListenerDelegate;

@interface EKSyncStatusChangeListener : NSObject {
    EKEventStore *_eventStore;
    NSMutableDictionary *_sourceLastSyncingEndDates;
}

@property (weak, nonatomic) id<EKSyncStatusChangeListenerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithEventStore:(id)a0;
- (void)_eventStoreChanged:(id)a0;
- (void)_setupSources;

@end
