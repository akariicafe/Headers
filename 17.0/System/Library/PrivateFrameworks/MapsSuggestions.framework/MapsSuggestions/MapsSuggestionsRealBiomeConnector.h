@class NSString, BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsRealBiomeConnector : NSObject <MapsSuggestionsBiomeConnector> {
    NSObject<OS_dispatch_queue> *_queue;
    double _lookbackDuration;
    long long _maxEvents;
    BOOL _registerForSmartRepliesUpdates;
    BMBiomeScheduler *_smartRepliesScheduler;
    BPSSink *_smartRepliesSink;
    id /* block */ _smartRepliesUpdateHandler;
    BOOL _registerForFindMyUpdates;
    BMBiomeScheduler *_findMyScheduler;
    BPSSink *_findMySink;
    id /* block */ _findMyUpdateHandler;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)getFindMyStreamsWithHandler:(id /* block */)a0;
- (BOOL)getSmartRepliesStreamsWithHandler:(id /* block */)a0;
- (BOOL)registerForFindMyUpdatesWithHandler:(id /* block */)a0;
- (BOOL)registerForSmartRepliesUpdatesWithHandler:(id /* block */)a0;
- (void)unregisterFindMyUpdates;
- (void)unregisterSmartRepliesUpdates;

@end
