@class NSData;

@interface WBSHistoryCrypto : NSObject {
    NSData *_cachedCryptographicKey;
}

@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) NSData *cryptographicKey;

- (id)init;
- (id)_createCryptographicKey;
- (void).cxx_destruct;
- (id)_createOrLoadCryptographicKey;
- (id)decryptDictionary:(id)a0;
- (id)encryptDictionary:(id)a0;
- (id)initWithCryptographicKey:(id)a0 salt:(id)a1;

@end
