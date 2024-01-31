@interface DTExpiredPidCacheService : XRExpiredPidCacheServiceProtected

+ (id)defaultCache;
+ (void)disableExpiredPidCaching;

- (id)init;
- (void)dealloc;
- (id)allExpiredSignatures;
- (void)enableCaching:(BOOL)a0;
- (id)signatureForExpiredPid:(id)a0;

@end
