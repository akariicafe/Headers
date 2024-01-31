@interface KCSRPClientContext : KCSRPContext

- (id)copyResposeToChallenge:(id)a0 password:(id)a1 salt:(id)a2 error:(id *)a3;
- (id)copyStart:(id *)a0;
- (BOOL)verifyConfirmation:(id)a0 error:(id *)a1;

@end
