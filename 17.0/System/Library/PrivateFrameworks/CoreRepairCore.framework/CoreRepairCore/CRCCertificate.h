@class NSArray;

@interface CRCCertificate : NSObject

@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *referenceKey;
@property (retain, nonatomic) NSArray *certificates;
@property (nonatomic) long long certifcateType;

- (id)init;
- (void).cxx_destruct;
- (id)copyCertificatePEMWithError:(id *)a0;
- (BOOL)evaluateTrustWithScrt:(BOOL)a0 verifyIdentity:(BOOL)a1 referenceDate:(id)a2 error:(id *)a3;
- (id)extractCAAAttestationOIDDataWithError:(id *)a0;
- (id)extractRepairHistoryWithError:(id *)a0;
- (id)initWithRefKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 certificates:(id)a1 certType:(long long)a2;

@end
