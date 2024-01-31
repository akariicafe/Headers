@class _SFAESKeySpecifier;

@interface _SFAESKey : _SFSymmetricKey {
    id _aesKeyInternal;
}

@property (readonly, copy, nonatomic) _SFAESKeySpecifier *keySpecifier;

- (id)initRandomKeyWithSpecifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
