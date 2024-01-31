@class AAFKeychainManager;

@interface CDPRecoveryKeyCache : NSObject {
    AAFKeychainManager *_keychainManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)deleteCache;
- (BOOL)cacheRecoveryKey:(id)a0 forAltDSID:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)fetchRecoveryKeyFromCacheForAltDSID:(id)a0;

@end
