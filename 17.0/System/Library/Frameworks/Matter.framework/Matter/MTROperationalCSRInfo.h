@class NSData;

@interface MTROperationalCSRInfo : NSObject

@property (readonly, copy, nonatomic) NSData *csr;
@property (readonly, copy, nonatomic) NSData *csrNonce;
@property (readonly, copy, nonatomic) NSData *csrElementsTLV;
@property (readonly, copy, nonatomic) NSData *attestationSignature;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initWithValidatedCSR:(id)a0 csrNonce:(id)a1 csrElementsTLV:(id)a2 attestationSignature:(id)a3;
- (id)initWithCSR:(id)a0 csrNonce:(id)a1 csrElementsTLV:(id)a2 attestationSignature:(id)a3;
- (id)initWithCSRElementsTLV:(id)a0 attestationSignature:(id)a1;
- (id)initWithCSRNonce:(id)a0 csrElementsTLV:(id)a1 attestationSignature:(id)a2;
- (id)initWithCSRResponseParams:(id)a0;

@end
