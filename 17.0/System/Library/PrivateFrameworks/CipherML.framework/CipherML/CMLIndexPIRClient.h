@interface CMLIndexPIRClient : CMLPIRClient

+ (id)new;

- (id)init;
- (id)decryptPIRResponse:(id)a0 index:(unsigned long long)a1 error:(id *)a2;
- (id)constructPIRBatchRequestWithIndices:(id)a0 error:(id *)a1;
- (id)constructPIRRequestWithIndex:(unsigned long long)a0 error:(id *)a1;
- (id)dataByIndex:(unsigned long long)a0 error:(id *)a1;
- (id)dataByIndices:(id)a0 error:(id *)a1;
- (id)decryptPIRBatchResponse:(id)a0 indices:(id)a1 error:(id *)a2;
- (void)requestDataByIndex:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)requestDataByIndices:(id)a0 completionHandler:(id /* block */)a1;

@end
