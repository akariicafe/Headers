@interface CMLLocationPIRClient : CMLPIRClient

+ (id)new;

- (id)init;
- (id)dataByLatitude:(double)a0 longitude:(double)a1 error:(id *)a2;
- (id)constructPIRRequestWithLatitude:(double)a0 longitude:(double)a1 error:(id *)a2;
- (id)decryptPIRResponse:(id)a0 latitude:(double)a1 longitude:(double)a2 error:(id *)a3;
- (void)requestDataByLatitude:(double)a0 longitude:(double)a1 completionHandler:(id /* block */)a2;

@end
