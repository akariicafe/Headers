@protocol BKDevicePearlDelegate;

@interface BKDevicePearl : BKDevice

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate;
@property (readonly, nonatomic) long long pearlState;

+ (BOOL)deviceAvailableWithFailure:(BOOL *)a0;

- (void)removePeriocularEnrollmentsForUser:(unsigned int)a0 identityUUID:(id)a1 removeAll:(BOOL)a2 async:(BOOL)a3 reply:(id /* block */)a4;
- (void)removePeriocularEnrollmentsFromIdentity:(id)a0 removeAll:(BOOL)a1 reply:(id /* block */)a2;
- (id)supportsPeriocularEnrollmentWithError:(id *)a0;
- (id)periocularMatchStateWithError:(id *)a0;
- (id)createEnrollOperationWithError:(id *)a0;
- (long long)deviceStateWithStatus:(unsigned int)a0;
- (void)removePeriocularEnrollmentsForUser:(unsigned int)a0 removeAll:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)removePeriocularEnrollmentsFromIdentity:(id)a0 removeAll:(BOOL)a1 error:(id *)a2;
- (BOOL)clearIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;
- (id)createMatchOperationWithError:(id *)a0;
- (BOOL)removePeriocularEnrollmentsForUser:(unsigned int)a0 removeAll:(BOOL)a1 error:(id *)a2;
- (long long)deviceEventWithStatus:(unsigned int)a0;
- (id)createPresenceDetectOperationWithError:(id *)a0;
- (id)periocularMatchStateForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)setTemplate:(id)a0 forIdentity:(id)a1 error:(id *)a2;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;

@end
