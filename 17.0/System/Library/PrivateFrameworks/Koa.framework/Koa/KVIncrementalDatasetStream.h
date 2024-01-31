@interface KVIncrementalDatasetStream : KVDatasetStream

- (unsigned long long)priorVersion;
- (BOOL)addOrUpdateItem:(id)a0 error:(id *)a1;
- (BOOL)removeItemWithItemId:(id)a0 error:(id *)a1;

@end
