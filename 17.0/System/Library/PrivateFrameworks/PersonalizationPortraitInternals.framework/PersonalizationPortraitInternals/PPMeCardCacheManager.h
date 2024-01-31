@class _PASLock;

@interface PPMeCardCacheManager : NSObject {
    _PASLock *_lock;
}

- (id)initWithPath:(id)a0;
- (id)init;
- (void)accessCacheWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
