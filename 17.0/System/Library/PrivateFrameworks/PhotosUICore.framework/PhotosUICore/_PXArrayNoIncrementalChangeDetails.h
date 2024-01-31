@interface _PXArrayNoIncrementalChangeDetails : PXArrayChangeDetails

- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)a0;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)a0;
- (BOOL)hasIncrementalChanges;

@end
