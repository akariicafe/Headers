@interface CUIKUnsliceOperation : CUIKSaveOperation

- (id)originalObjects;
- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (id)_inverseForUndoSliceOutcome:(id)a0;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;

@end
