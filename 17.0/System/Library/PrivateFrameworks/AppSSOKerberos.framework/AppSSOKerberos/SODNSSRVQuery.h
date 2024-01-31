@interface SODNSSRVQuery : NSObject

- (id)init;
- (void)lookupHost:(id)a0 port:(id)a1 bundleIdentifier:(id)a2 auditTokenData:(id)a3 completion:(id /* block */)a4;
- (id)lookupSRVWithQuery:(id)a0 bundleIdentifier:(id)a1 auditTokenData:(id)a2;
- (void)lookupSRVWithQuery:(id)a0 bundleIdentifier:(id)a1 auditTokenData:(id)a2 completion:(id /* block */)a3;

@end
