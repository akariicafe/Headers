@class NSString, NSMutableDictionary;
@protocol CRKInMemoryKeychainDelegate;

@interface CRKInMemoryKeychain : NSObject <CRKKeychain>

@property (readonly, nonatomic) NSMutableDictionary *keychainItemsByPersistentID;
@property (readonly, nonatomic) NSMutableDictionary *passwordDatasByService;
@property (weak, nonatomic) id<CRKInMemoryKeychainDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeItemWithPersistentID:(id)a0;
- (id)addCertificate:(id)a0 toAccessGroup:(id)a1;
- (id)addIdentity:(id)a0 toAccessGroup:(id)a1;
- (id)addItem:(id)a0 toAccessGroup:(id)a1;
- (id)addPrivateKey:(id)a0 toAccessGroup:(id)a1;
- (id)certificateWithPersistentID:(id)a0;
- (void)enumerateKeychainUsingBlock:(id /* block */)a0;
- (id)existingPersistentIDForItem:(id)a0;
- (id)identityWithPersistentID:(id)a0;
- (id)itemWithPersistentID:(id)a0 expectedProtocol:(id)a1;
- (id)makeCertificateWithData:(id)a0;
- (id)makeIdentityWithCertificate:(id)a0 privateKey:(id)a1;
- (id)makeIdentityWithConfiguration:(id)a0;
- (id)makePrivateKeyWithData:(id)a0;
- (id)passwordForService:(id)a0;
- (id)privateKeyWithPersistentID:(id)a0;
- (void)setPassword:(id)a0 forService:(id)a1 accessGroup:(id)a2;
- (id)validityDateIntervalForConfiguration:(id)a0;

@end
