@class NSData;

@interface _SFAuthenticatedCiphertext : _SFCiphertext {
    id _authenticatedCiphertextInternal;
}

@property (readonly) NSData *authenticationCode;
@property (readonly) NSData *initializationVector;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCiphertext:(id)a0 authenticationCode:(id)a1 initializationVector:(id)a2;
- (id)initWithCoder:(id)a0;

@end
