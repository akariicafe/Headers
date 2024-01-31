@class NSNumber, NSString;

@interface SBTraitsInputsValidator : NSObject <TRAArbitrationInputsValidating>

@property (readonly, nonatomic) NSNumber *validatorOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValidatorOrder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)validateInputs:(id)a0 withContext:(id)a1;

@end
