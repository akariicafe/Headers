@class NSString, TRAArbiter, NSNumber, NSMutableArray;
@protocol BSInvalidatable;

@interface TRAArbitrationInputsValidationStage : NSObject <BSDescriptionProviding, TRAArbitrationInputsValidating> {
    NSMutableArray *_inputsValidators;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (weak, nonatomic) TRAArbiter *arbiter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *validatorOrder;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)validateInputs:(id)a0 withContext:(id)a1;
- (void)addInputsValidator:(id)a0;
- (void)addInputsValidator:(id)a0 update:(BOOL)a1;
- (void)removeInputsValidator:(id)a0;
- (void)removeInputsValidator:(id)a0 update:(BOOL)a1;
- (id)_setupStateDump;
- (id)initWithValidators:(id)a0 arbiter:(id)a1;

@end
