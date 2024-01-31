@class NSMutableDictionary;

@interface WBSSecIdentitiesCache : NSObject {
    NSMutableDictionary *_domainsToIdentities;
}

- (id)init;
- (void).cxx_destruct;
- (struct __SecIdentity { } *)secIdentityForDomain:(id)a0;
- (void)setSecIdentity:(struct __SecIdentity { } *)a0 forDomain:(id)a1;

@end
