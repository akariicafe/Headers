@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
    struct WebSecurityOriginPrivate { } *_private;
    id<WebQuotaManager> _applicationCacheQuotaManager;
    id<WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)a0;

- (id)protocol;
- (id)stringValue;
- (id)initWithURL:(id)a0;
- (unsigned long long)usage;
- (void)dealloc;
- (id)_initWithString:(id)a0;
- (id)host;
- (void)setQuota:(unsigned long long)a0;
- (unsigned long long)quota;
- (BOOL)isEqual:(id)a0;
- (id)databaseIdentifier;
- (unsigned short)port;
- (void *)_core;
- (id)applicationCacheQuotaManager;
- (id)databaseQuotaManager;
- (id)toString;
- (id)_initWithWebCoreSecurityOrigin:(void *)a0;

@end
