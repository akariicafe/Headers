@interface STSTestReader : STSReader

- (void)sendDocumentRequest:(id)a0 timeoutInterval:(double)a1 responseHandler:(id /* block */)a2;
- (id)startWithHandoverType:(unsigned long long)a0 connectionHandler:(id /* block */)a1 invalidationErrorHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)startWithHandoverType:(unsigned long long)a0 connectionHandler:(id /* block */)a1 invalidationHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)startWithHandoverType:(unsigned long long)a0 tnepStatusHandler:(id /* block */)a1 connectionHandler:(id /* block */)a2 invalidationErrorHandler:(id /* block */)a3 completion:(id /* block */)a4;

@end
