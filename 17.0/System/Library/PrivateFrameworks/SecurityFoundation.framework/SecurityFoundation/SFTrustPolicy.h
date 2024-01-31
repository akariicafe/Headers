@interface SFTrustPolicy : NSObject <NSCopying> {
    id _trustPolicyInternal;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluateCertificateChain:(id)a0 error:(id *)a1;

@end
