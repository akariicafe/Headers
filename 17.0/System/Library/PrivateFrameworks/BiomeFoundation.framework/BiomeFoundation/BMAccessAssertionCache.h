@class _PASLock;

@interface BMAccessAssertionCache : NSObject {
    _PASLock *_lock;
}

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (id)_makeAssertionWithDescriptor:(id)a0 extensionToken:(id)a1 path:(id)a2;
- (id)assertionForAccessDescriptor:(id)a0;
- (id)createAssertionForAccessDescriptor:(id)a0 extensionToken:(id)a1 path:(id)a2;

@end
