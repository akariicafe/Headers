@interface SPRAttestationManager : SPRObject

- (BOOL)ping;
- (BOOL)start;
- (BOOL)stop;
- (BOOL)verify;
- (id)getToken;
- (BOOL)isValidToken:(id)a0;
- (BOOL)startWithMinimum:(double)a0 maximum:(double)a1 error:(id *)a2;
- (BOOL)attestWithCheckpoint:(long long)a0 error:(id *)a1;
- (BOOL)refreshAndReturnError:(id *)a0;
- (id)requestTokenAndReturnError:(id *)a0;
- (BOOL)verifyWithRenewalPeriod:(double)a0;

@end
