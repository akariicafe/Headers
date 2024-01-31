@interface SBSStateDumpService : SBSAbstractSystemService

- (void)writeStateDump:(unsigned long long)a0 toTextFileAtPath:(id)a1;
- (void)requestStateDump:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)enableRemoteStateDumpWithTimeout:(long long)a0 completion:(id /* block */)a1;
- (void)disableRemoteStateDumpWithCompletion:(id /* block */)a0;

@end
