@interface WebAVSampleBufferStatusChangeListener : NSObject {
    struct RetainPtr<CALayer> { void *m_ptr; } _displayLayer;
    struct ThreadSafeWeakPtr<WebCore::LocalSampleBufferDisplayLayer> { struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; struct LocalSampleBufferDisplayLayer *m_objectOfCorrectType; } _parent;
}

- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithParent:(void *)a0;
- (void)begin:(id)a0;

@end
