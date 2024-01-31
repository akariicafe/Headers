@class _PASLock, _PASXPCClientHelper;

@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider> {
    _PASXPCClientHelper *_clientHelper;
    _PASXPCClientHelper *_internalHelper;
    _PASLock *_lock;
}

- (id)init;
- (void)dealloc;
- (id)activeExperimentInformationWithError:(id *)a0;
- (id)_defaultQueue;
- (id)activeBMLTInformationWithError:(id *)a0;
- (id)enumerateExperimentStatusesForTestingPrivacyFilterPolicyWithEnvironment:(int)a0 startingFromCursor:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (id)syncProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)enumerateActiveExperimentsForEnvironment:(int)a0 error:(id *)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)enumerateSampledActiveExperimentsForEnvironment:(int)a0 correlationID:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateSampledActiveRolloutsForCorrelationID:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)addStatusUpdateHandlerForEnvironment:(int)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)enumerateExperimentStatusesForEnvironment:(int)a0 privacyFilterPolicy:(unsigned char)a1 startingFromCursor:(id)a2 error:(id *)a3 block:(id /* block */)a4;
- (BOOL)removeUpdateHandlerForToken:(id)a0;
- (id)enumerateExperimentStatusesForEnvironment:(int)a0 startingFromCursor:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateActiveRolloutsWithError:(id *)a0 block:(id /* block */)a1;

@end
