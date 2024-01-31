@class NSData;

@interface KCSRPServerContext : KCSRPContext

@property (retain) NSData *verifier;
@property (readonly) NSData *salt;

- (void).cxx_destruct;
- (id)copyChallengeFor:(id)a0 error:(id *)a1;
- (id)copyConfirmationFor:(id)a0 error:(id *)a1;
- (id)initWithUser:(id)a0 password:(id)a1 digestInfo:(const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; int x8; } *)a2 group:(struct ccdh_gp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a3 randomSource:(struct ccrng_state { void /* function */ *x0; } *)a4;
- (id)initWithUser:(id)a0 salt:(id)a1 verifier:(id)a2 digestInfo:(const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; int x8; } *)a3 group:(struct ccdh_gp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a4 randomSource:(struct ccrng_state { void /* function */ *x0; } *)a5;
- (BOOL)resetWithPassword:(id)a0 error:(id *)a1;

@end
