@class NSArray, NSString, EKEventStore, NSError;

@interface CUIKUserOperation : NSObject

@property (readonly, nonatomic) NSArray *objects;
@property (weak, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) long long span;
@property (retain, nonatomic) NSArray *originalObjects;
@property (retain, nonatomic) NSArray *originalSliceDescriptions;
@property (retain, nonatomic) NSString *precomputedActionName;
@property (retain, nonatomic) CUIKUserOperation *precomputedInverseOperation;
@property (nonatomic) BOOL inverseOperationPrecomputed;
@property (nonatomic) BOOL createdAsInverseOfAnotherOperation;
@property (readonly, nonatomic) NSString *actionName;
@property (retain) NSError *error;

+ (id)operationForContext:(id)a0;
+ (id)operationWithObjects:(id)a0 span:(long long)a1;

- (void).cxx_destruct;
- (id)_actionName;
- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (void)_storeOriginalSliceDescriptions;
- (id)_inverseOperation;
- (Class)_inverseOperationClass;
- (long long)_inverseOperationSpan;
- (id)_objectsForInverse;
- (void)_precomputeActionName;
- (void)_precomputeInverseOperation;
- (long long)_spanFromSpan:(long long)a0 objects:(id)a1;
- (BOOL)executeWithUndoDelegate:(id)a0;
- (id)initWithObjects:(id)a0 span:(long long)a1 createdAsInverseOfAnotherOperation:(BOOL)a2;
- (id)inverseOperation;

@end
