@interface SBIconModelReadOnlyMemoryStore : SBIconModelMemoryStore

- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (BOOL)saveCurrentIconState:(id)a0 error:(id *)a1;
- (BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;

@end
