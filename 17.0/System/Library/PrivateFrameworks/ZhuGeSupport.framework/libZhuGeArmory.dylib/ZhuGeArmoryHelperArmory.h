@class ZhuGeCacheArmory, NSDictionary, NSArray;

@interface ZhuGeArmoryHelperArmory : NSObject

@property (retain) ZhuGeCacheArmory *propertiesCache;
@property (readonly) NSDictionary *keysConfig;
@property (readonly) NSDictionary *aliasesMap;
@property (readonly) NSArray *flexibleList;

- (void).cxx_destruct;
- (id)getConfigOfKey:(id)a0 withError:(id *)a1;
- (id)getObfuscatedKey:(id)a0 withError:(id *)a1;
- (id)getPrimarykeyOfKey:(id)a0 withError:(id *)a1;
- (id)getPropertiesOfKey:(id)a0 withError:(id *)a1;
- (id)getSubkeyOfKey:(id)a0 withError:(id *)a1;
- (id)initWithRawConfig:(id)a0;
- (id)isKeyAlias:(id)a0 withError:(id *)a1;
- (id)pickFlexibleFromUnionizedConfig:(id)a0 withError:(id *)a1;
- (id)propertiesByKey:(id)a0 andSuperKeyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withError:(id *)a2;
- (id)propertiesOfKey:(id)a0 withError:(id *)a1;
- (id)sortAliasFromUnionizedConfig:(id)a0 withError:(id *)a1;
- (id)unionizeRawConfig:(id)a0 withError:(id *)a1;

@end
