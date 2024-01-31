@class NSMutableArray, IMDispatchTimer;

@interface IDSRegistrationKeychainReader : NSObject {
    NSMutableArray *_registrationData;
    IMDispatchTimer *_purgeTimer;
    id /* block */ _purgeCancelBlock;
    id /* block */ _purgeEnqueueBlock;
}

+ (id)sharedInstance;
+ (id)keychainAccountForVersion:(unsigned long long)a0;
+ (id)keychainServiceForVersion:(unsigned long long)a0;
+ (id)keychainAccessGroupForVersion:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (void)_flush;
- (void)_setPurgeTimer;
- (id)registrationWithServiceType:(id)a0 accountType:(int)a1 isTemporary:(BOOL)a2 value:(id)a3;
- (void)_reloadFromDictionaryLocked:(id)a0;
- (id)registrationData;
- (void).cxx_destruct;
- (void)_reloadFromKeychainLocked;
- (void)flushCache;

@end
