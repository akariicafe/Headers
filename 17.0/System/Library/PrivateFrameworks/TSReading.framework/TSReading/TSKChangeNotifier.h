@interface TSKChangeNotifier : NSObject {
    struct __CFDictionary { } *mChangeSourceObservers;
    struct __CFDictionary { } *mChangeSourceOfClassObservers;
    struct __CFArray { } *mQueuedObserverListChanges;
    unsigned long long mProcessingChanges;
    id mQueuedObserverLock;
}

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0 forChangeSource:(id)a1;
- (void)addObserver:(id)a0 forChangeSource:(id)a1;
- (void)addObserver:(id)a0 forChangeSourceOfClass:(Class)a1;
- (void)asyncProcessChanges:(id)a0;
- (void)p_addObserver:(id)a0 forChangeSource:(id)a1 isClass:(BOOL)a2;
- (id)p_findCountedObserverForObserver:(id)a0 inArray:(id)a1;
- (BOOL)p_pendingAddOrRemoveOfObserver:(id)a0 forChangeSource:(id)a1;
- (void)p_queueObserverListChange:(id)a0;
- (void)p_removeObserver:(id)a0 forChangeSource:(id)a1 isClass:(BOOL)a2;
- (void)p_updateObserverList;
- (void)removeObserver:(id)a0 forChangeSourceOfClass:(Class)a1;
- (void)syncProcessChanges:(id)a0;

@end
