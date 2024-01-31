@interface MTRClusterBasic : MTRClusterBasicInformation

- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (void)mfgSpecificPingWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)mfgSpecificPingWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;

@end
