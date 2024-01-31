@interface RegionalResourceObserver : NSObject {
    void *_resourceProvider;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _resourceProviderLock;
    id _observer;
}

- (id)initWithResourceProvider:(void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearProvider;

@end
