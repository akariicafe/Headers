@class TSCH3DDictionaryOfDictionary, NSMutableSet;

@interface TSCH3DSceneRenderCache : NSObject {
    NSMutableSet *_enabledKeys;
    TSCH3DDictionaryOfDictionary *_cache;
}

+ (id)cache;
+ (id)cacheFromScene:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)cacheEnabledForKey:(id)a0;
- (id)cacheObjectForKey:(id)a0 cacheID:(id)a1 created:(BOOL *)a2 ifAbsent:(id /* block */)a3;
- (void)enableCache:(BOOL)a0 forKey:(id)a1;
- (void)setCacheObject:(id)a0 forKey:(id)a1 cacheID:(id)a2;

@end
