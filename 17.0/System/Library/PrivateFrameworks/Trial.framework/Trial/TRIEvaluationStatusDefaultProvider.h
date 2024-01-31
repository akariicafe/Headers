@class _PASXPCClientHelper;

@interface TRIEvaluationStatusDefaultProvider : NSObject <TRIEvaluationStatusProvider> {
    _PASXPCClientHelper *_clientHelper;
}

- (id)init;
- (id)syncProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)enumerateStatusOfEvaluationsForMLRuntimeWithCursor:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)enumerateActiveBMLTWithError:(id *)a0 block:(id /* block */)a1;
- (BOOL)enumerateActiveEvaluationsForMLRuntimeWithError:(id *)a0 block:(id /* block */)a1;

@end
