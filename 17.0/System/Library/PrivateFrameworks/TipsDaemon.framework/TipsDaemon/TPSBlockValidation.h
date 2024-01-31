@interface TPSBlockValidation : TPSTargetingValidation

@property (copy, nonatomic) id /* block */ validationBlock;

+ (id)blockValidationWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithValidationBlock:(id /* block */)a0;

@end
