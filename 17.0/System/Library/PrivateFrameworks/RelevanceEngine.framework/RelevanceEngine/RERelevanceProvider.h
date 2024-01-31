@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject <NSCopying> {
    unsigned long long _cachedHash;
    unsigned long long _priority;
    RERelevanceProviderEnvironment *_environment;
}

+ (id)customRelevanceProviderForFeature:(id)a0 withValue:(id)a1;
+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)init;
- (unsigned long long)hash;
- (void)setEnvironment:(id)a0;
- (id)environment;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryEncoding;
- (id)providerWithPriority:(unsigned long long)a0;
- (unsigned long long)relevancePriority;

@end
