@class _SFTripleDESKeySpecifier;

@interface SFTripleDESEncryptionOperation : SFSymmetricEncryptionOperation {
    id _tripleDESEncryptionOperationInternal;
}

@property (copy, nonatomic) _SFTripleDESKeySpecifier *encryptionKeySpecifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)decrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)encrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (id)initWithKeySpecifier:(id)a0 mode:(long long)a1;

@end
