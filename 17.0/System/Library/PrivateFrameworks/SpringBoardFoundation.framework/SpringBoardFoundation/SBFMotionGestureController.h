@class NSMutableDictionary, CMGestureManager;

@interface SBFMotionGestureController : NSObject {
    NSMutableDictionary *_observersByPriority;
    CMGestureManager *_motionGestureManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)removeGestureObserver:(id)a0;
- (void).cxx_destruct;
- (id)_observersForPriority:(unsigned long long)a0;
- (void)addGestureObserver:(id)a0;
- (void)_addGestureManager;
- (void)_addGestureObserver:(id)a0 withPriority:(unsigned long long)a1;
- (void)_enumerateObserversByPriority:(id /* block */)a0;
- (BOOL)_hasObservers;
- (id)_highestPriorityObservers;
- (void)_notifyObserversOfGesture:(int)a0;
- (void)_removeGestureManager;
- (void)_removeGestureObserver:(id)a0;
- (void)_updateGestureManager;
- (void)addGestureObserver:(id)a0 withPriority:(unsigned long long)a1;

@end
