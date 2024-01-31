@class NSMutableDictionary;

@interface AFConnectionEntitlementCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_bundleIDToPIDMap;
}

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)cacheEntitlement:(id)a0 forPID:(int)a1 bundleID:(id)a2;
- (BOOL)hasEntitlement:(id)a0 forPID:(int)a1;

@end
