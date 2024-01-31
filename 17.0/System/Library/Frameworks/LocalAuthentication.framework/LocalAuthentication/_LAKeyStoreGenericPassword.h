@class NSString, NSData;
@protocol LAKeyStoreKey, _LAKeyStoreGenericPasswordCryptor;

@interface _LAKeyStoreGenericPassword : NSObject <LAKeyStoreGenericPassword> {
    NSString *_identifier;
    NSData *_wrappedData;
    NSData *_publicKeyHash;
    id<LAKeyStoreKey> _wrapperKey;
}

@property (weak, nonatomic) id<_LAKeyStoreGenericPasswordCryptor> cryptor;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)fetchDataWithContext:(id)a0 completion:(id /* block */)a1;

@end
