@class HDKeyValueDomain, NSMutableDictionary, NSString;

@interface ACHAwardsKeyValueServer : HDStandardTaskServer <ACHAwardsKeyValueServerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _domainLock;
}

@property (retain, nonatomic) NSMutableDictionary *domainsByName;
@property (retain, nonatomic) HDKeyValueDomain *legacyDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)remote_removeValuesForKeys:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (id)remoteInterface;
- (void)remote_setValuesWithDomainDictionary:(id)a0 completion:(id /* block */)a1;
- (id)_transactionContextForWritingProtectedDataWithIdentifier:(id)a0;
- (void)remote_valueForKey:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)remote_setLegacyValuesWithDictionary:(id)a0 completion:(id /* block */)a1;
- (void)remote_protectedDataAvailableWithCompletion:(id /* block */)a0;
- (void)remote_removeValuesForKeysInDomains:(id)a0 completion:(id /* block */)a1;
- (id)_domainForName:(id)a0;
- (void)remote_setValuesWithDictionary:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)remote_valuesForKeys:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)remote_setValue:(id)a0 forKey:(id)a1 domain:(id)a2 completion:(id /* block */)a3;

@end
