@class MTTimerStorage, NSString, MTXPCConnectionListenerProvider;
@protocol NAScheduler;

@interface MTTimerServer : NSObject <MTTimerObserver, MTTimerServer, MTDurationUpdateDelegate, MTAgentDiagnosticDelegate>

@property (readonly, nonatomic) MTTimerStorage *storage;
@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, nonatomic, getter=isSystemReady) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)printDiagnostics;
- (void)addRecentDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)checkIn;
- (id)initWithStorage:(id)a0 connectionListenerProvider:(id)a1;
- (void)getTimersWithCompletion:(id /* block */)a0;
- (void)updateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithStorage:(id)a0;
- (void)getTimerDurationsWithCompletion:(id /* block */)a0;
- (BOOL)_isSystemReady;
- (void)handleSystemReady;
- (void)saveLatestDuration:(id)a0 withCompletion:(id /* block */)a1;
- (id)gatherDiagnostics;
- (void)addTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeRecentDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (void)startListening;
- (void)removeFavoriteDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)nextTimerDidChange:(id)a0;
- (void)recentTimerDurationsDidUpdate:(id)a0;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (void)repeatTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (id)_systemNotReadyError;
- (void)latestTimerDurationDidUpdate:(id)a0;
- (void).cxx_destruct;
- (void)favoriteTimerDurationsDidUpdate:(id)a0;
- (void)dismissTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)addFavoriteDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (void)stopListening;
- (void)source:(id)a0 didUpdateTimers:(id)a1;

@end
