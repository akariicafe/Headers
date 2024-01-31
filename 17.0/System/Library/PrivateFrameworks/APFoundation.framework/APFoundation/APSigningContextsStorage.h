@class NSString, APSigningKeychainServices, APUnfairLock;

@interface APSigningContextsStorage : NSObject

@property (retain, nonatomic) NSString *launchID;
@property (retain, nonatomic) APUnfairLock *lock;
@property (retain, nonatomic) APSigningKeychainServices *keychainServices;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_checkDuplicate:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)_destroyAndClearAllPreviousContextsForType:(long long)a0;
- (void)_destroyAndClearAllPreviousLaunchContexts;
- (void)_removeStoredContext:(unsigned long long)a0 forType:(long long)a1;
- (void)destroyAndClearAllContexts;
- (void)removeStoredContext:(unsigned long long)a0;
- (id)retrieveSuccessfulContexts;
- (void)storeInProgressContext:(unsigned long long)a0 isStashed:(BOOL)a1;
- (void)storeSuccessfulContext:(unsigned long long)a0;
- (void)storeUsedContext:(unsigned long long)a0;

@end
