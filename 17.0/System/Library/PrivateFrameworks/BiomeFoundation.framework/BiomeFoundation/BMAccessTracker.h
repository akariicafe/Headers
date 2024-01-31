@class _PASLock;

@interface BMAccessTracker : NSObject {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_logMissingEntitlementsForAccess:(id)a0 useCase:(id)a1;
- (void)logMissingEntitlementsForAccessToResource:(id)a0 domain:(unsigned long long)a1 withMode:(unsigned long long)a2 useCase:(id)a3;

@end
