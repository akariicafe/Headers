@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey;

- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithPCSData:(id)a0 encryptedPrivateKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
