@interface DTDSCSymbolicatorCache : NSObject {
    struct __CFDictionary { } *_sharedCacheUUIDSymbolicators;
}

- (id)init;
- (void)dealloc;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorForSharedCacheUUID:(id)a0;

@end
