@class NSData;

@interface ICDecryptable : NSObject

@property (retain, nonatomic) NSData *encryptedData;
@property (retain, nonatomic) NSData *cryptoTag;
@property (retain, nonatomic) NSData *cryptoInitializationVector;
@property (retain, nonatomic) NSData *fallbackCryptoTag;
@property (retain, nonatomic) NSData *fallbackCryptoInitializationVector;
@property (readonly, nonatomic) BOOL isValid;

- (void).cxx_destruct;
- (id)initWithEncryptedData:(id)a0 cryptoTag:(id)a1 cryptoInitializationVector:(id)a2;
- (id)initWithEncryptedData:(id)a0 cryptoTag:(id)a1 cryptoInitializationVector:(id)a2 fallbackCryptoTag:(id)a3 fallbackCryptoInitializationVector:(id)a4;

@end
