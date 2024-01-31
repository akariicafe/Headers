@interface TRIExpressionValidator : NSObject

- (BOOL)_validSystemCovariateFunction:(id)a0;
- (BOOL)_validUserCovariateFunction:(id)a0;
- (id)_validationErrorWithDetails:(id)a0;
- (BOOL)validateExpression:(id)a0 outError:(id *)a1;
- (BOOL)validatePredicate:(id)a0 outError:(id *)a1;

@end
