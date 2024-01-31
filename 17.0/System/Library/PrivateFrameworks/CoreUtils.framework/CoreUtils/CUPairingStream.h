@class NSString;

@interface CUPairingStream : NSObject {
    struct CryptoAEADPrivate { } *_decryptAEAD;
    unsigned char _decryptNonce[12];
    struct CryptoAEADPrivate { } *_encryptAEAD;
    unsigned char _encryptNonce[12];
}

@property (nonatomic) unsigned long long authTagLength;
@property (copy, nonatomic) NSString *name;

- (void)_cleanup;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)decryptData:(id)a0 aadBytes:(const void *)a1 aadLength:(unsigned long long)a2 error:(id *)a3;
- (id)decryptData:(id)a0 aadData:(id)a1 error:(id *)a2;
- (BOOL)decryptInputBytes:(const void *)a0 inputLength:(unsigned long long)a1 inputAADBytes:(const void *)a2 inputAADLength:(unsigned long long)a3 inputAuthTagPtr:(const void *)a4 inputAuthTagLength:(unsigned long long)a5 outputBytes:(void *)a6 error:(id *)a7;
- (id)encryptData:(id)a0 aadBytes:(const void *)a1 aadLength:(unsigned long long)a2 error:(id *)a3;
- (id)encryptData:(id)a0 aadData:(id)a1 error:(id *)a2;
- (BOOL)encryptInputBytes:(const void *)a0 inputLength:(unsigned long long)a1 inputAADBytes:(const void *)a2 inputAADLength:(unsigned long long)a3 outputBytes:(void *)a4 outputAuthTagBytes:(void *)a5 outputAuthTagLength:(unsigned long long)a6 error:(id *)a7;
- (BOOL)prepareWithName:(id)a0 isClient:(BOOL)a1 pskData:(id)a2 error:(id *)a3;

@end
