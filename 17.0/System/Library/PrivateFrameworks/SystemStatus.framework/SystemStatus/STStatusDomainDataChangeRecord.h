@class NSString, BSIntegerSet, BSMutableIntegerMap;

@interface STStatusDomainDataChangeRecord : NSObject <BSDebugDescriptionProviding> {
    BSMutableIntegerMap *_fallbackDataByClientKeyByDomain;
    BSMutableIntegerMap *_entriesByDomain;
    BSMutableIntegerMap *_cachedCurrentDataByDomain;
}

@property (readonly, nonatomic) BSIntegerSet *domainsWithData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFallbackData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (id)init;
- (void)addDiff:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (void)setData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (id)succinctDescriptionBuilder;
- (id)fallbackDataForClientKey:(id)a0 domain:(unsigned long long)a1;
- (id)currentDataForDomain:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeAllEntriesForClientKey:(id)a0 domain:(unsigned long long)a1;
- (void)enumerateEntriesByDomainUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
