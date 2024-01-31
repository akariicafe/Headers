@class _PASLock, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface _CDSpotlightContactResolver : NSObject {
    _PASLock *_cachedContactsForHandle;
    NSObject<OS_dispatch_queue> *_cacheInvalidationTimerQueue;
    NSObject<OS_dispatch_source> *_cacheInvalidationTimer;
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)sharedInstance;
+ (id)resolveContactIfPossibleFromContactIdentifierString:(id)a0;

- (id)init;
- (id)_getCachedContactForHandle:(id)a0;
- (void).cxx_destruct;
- (void)_setContact:(id)a0 forHandle:(id)a1;
- (void)_purge;
- (void)_validateCache;

@end
