@interface TSTGroupByChangeDistributor : TSCEDistributor <TSTGroupByChangeProtocol>

- (id)protocol;
- (void)didCreateGroup:(id)a0;
- (void)didRemoveGroup:(id)a0;
- (void)didAddRowUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 toGroup:(id)a1;
- (void)didChangeGroupByStructure;
- (void)didRemoveRowUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 fromGroup:(id)a1;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;
- (void)willRemoveGroup:(id)a0;

@end
