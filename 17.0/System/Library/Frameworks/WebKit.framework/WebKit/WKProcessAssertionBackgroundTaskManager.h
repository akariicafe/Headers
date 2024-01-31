@class NSString;

@interface WKProcessAssertionBackgroundTaskManager : NSObject <RBSAssertionObserving> {
    struct RetainPtr<RBSAssertion> { void *m_ptr; } _backgroundTask;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _backgroundTaskWasInvalidated;
    struct ThreadSafeWeakHashSet<WebKit::ProcessAndUIAssertion> { struct HashMap<const WebKit::ProcessAndUIAssertion *, WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>, WTF::DefaultHash<const WebKit::ProcessAndUIAssertion *>, WTF::HashTraits<const WebKit::ProcessAndUIAssertion *>, WTF::HashTraits<WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>>, WTF::HashTableTraits> { struct HashTable<const WebKit::ProcessAndUIAssertion *, WTF::KeyValuePair<const WebKit::ProcessAndUIAssertion *, WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const WebKit::ProcessAndUIAssertion *, WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>>>, WTF::DefaultHash<const WebKit::ProcessAndUIAssertion *>, WTF::HashMap<const WebKit::ProcessAndUIAssertion *, WTF::RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits>>::KeyValuePairTraits, WTF::HashTraits<const WebKit::ProcessAndUIAssertion *>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_map; unsigned int m_operationCountSinceLastCleanup; unsigned int m_maxOperationCountWithoutCleanup; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_lock; } _assertionsNeedingBackgroundTask;
    id /* block */ _pendingTaskReleaseTask;
    struct unique_ptr<WebKit::ProcessStateMonitor, std::default_delete<WebKit::ProcessStateMonitor>> { struct __compressed_pair<WebKit::ProcessStateMonitor *, std::default_delete<WebKit::ProcessStateMonitor>> { struct ProcessStateMonitor *__value_; } __ptr_; } m_processStateMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)assertionWillInvalidate:(id)a0;
- (void)_cancelPendingReleaseTask;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (id)init;
- (void)dealloc;
- (void)_notifyAssertionsOfImminentSuspension;
- (void)_updateBackgroundTask;
- (void)_scheduleReleaseTask;
- (void)addAssertionNeedingBackgroundTask:(void *)a0;
- (id).cxx_construct;
- (void)_handleBackgroundTaskExpirationOnMainThread;
- (void).cxx_destruct;
- (void)setProcessStateMonitorEnabled:(BOOL)a0;
- (void)removeAssertionNeedingBackgroundTask:(void *)a0;
- (void)_handleBackgroundTaskExpiration;
- (void)_releaseBackgroundTask;
- (BOOL)_hasBackgroundTask;

@end
