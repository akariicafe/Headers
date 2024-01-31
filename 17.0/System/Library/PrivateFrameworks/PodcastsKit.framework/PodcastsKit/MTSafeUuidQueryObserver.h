@class NSMutableSet;

@interface MTSafeUuidQueryObserver : MTBaseQueryObserver {
    NSMutableSet *currentInserts;
    NSMutableSet *currentDeletes;
    NSMutableSet *currentUpdates;
    NSMutableSet *currentItems;
}

- (void)startObserving;
- (void)controllerDidChangeContent:(id)a0;
- (void)notifyObservers;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void).cxx_destruct;
- (void)controllerWillChangeContent:(id)a0;
- (id)addResultsChangedHandler:(id /* block */)a0;
- (id)initWithFetchRequest:(id)a0 managedObjectContext:(id)a1;

@end
