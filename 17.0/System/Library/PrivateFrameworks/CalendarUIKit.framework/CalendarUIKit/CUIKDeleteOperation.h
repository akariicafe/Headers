@class NSArray;

@interface CUIKDeleteOperation : CUIKUserOperation

@property (retain, nonatomic) NSArray *precomputedInverseObjects;

- (void).cxx_destruct;
- (id)_actionName;
- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (BOOL)_canBeUndone;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;

@end
