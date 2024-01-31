@class NSCache, NSString;

@interface AMSCookieService : NSObject <NSCacheDelegate, AMSCookieServiceInterface>

@property (class, readonly, nonatomic) AMSCookieService *sharedService;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } inMemoryStorageLock;
@property (readonly) NSCache *inMemoryStorage;
@property BOOL isObservingNotifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isEntitledForDirectCookieAccess;

- (id)init;
- (void)_unregisterFromCookieChangeNotifications;
- (void)clearCookieCacheForAccount:(id)a0;
- (void)clearCookieCache;
- (void)getCookiesForAccount:(id)a0 cookieDatabaseOnly:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_registerForCookieChangeNotifications;
- (void)_cacheCookies:(id)a0 forAccount:(id)a1;
- (void)updateCookiesWithCookiesToAdd:(id)a0 cookiesToRemove:(id)a1 forAccount:(id)a2 withCompletion:(id /* block */)a3;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;
- (id)getCookiesForAccount:(id)a0 error:(id *)a1;
- (void)getCookiesForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)getCookieDatabasePathForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (id)_cachedCookiesForAccount:(id)a0;
- (id)getCookiesForAccount:(id)a0 cookieDatabaseOnly:(BOOL)a1 error:(id *)a2;

@end
