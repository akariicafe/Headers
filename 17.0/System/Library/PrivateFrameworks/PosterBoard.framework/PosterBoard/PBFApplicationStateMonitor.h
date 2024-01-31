@class PBFApplicationStateNode, NSOrderedSet, NSMutableOrderedSet, NSHashTable, PBFApplicationStateContext;

@interface PBFApplicationStateMonitor : NSObject {
    NSMutableOrderedSet *_applicationStateStack;
    NSHashTable *_stateTrackingObservers;
}

@property (readonly) NSOrderedSet *applicationStateStack;
@property (readonly) PBFApplicationStateNode *rootNode;
@property (readonly) PBFApplicationStateContext *currentApplicationContext;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_fireStateTrackingObserverSelector:(SEL)a0 block:(id /* block */)a1;
- (void)_updateApplicationContextIfNeeded;
- (void)addMonitorObserver:(id)a0;
- (void)pushState:(id)a0;
- (void)removeMonitorObserver:(id)a0;
- (void)setCurrentApplicationContext:(id)a0;
- (void)state:(id)a0 didUpdateComponents:(id)a1;
- (void)stateWasInvalidated:(id)a0;

@end
