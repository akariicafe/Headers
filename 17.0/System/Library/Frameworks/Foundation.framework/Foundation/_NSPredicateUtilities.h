@interface _NSPredicateUtilities : NSObject

+ (id)sum:(id)a0;
+ (id)min:(id)a0;
+ (id)stddev:(id)a0;
+ (id)now;
+ (id)objectFrom:(id)a0 withIndex:(id)a1;
+ (BOOL)_isReservedWordInParser:(id)a0;
+ (id)noindex:(id)a0;
+ (id)randomn:(id)a0;
+ (id)distanceToLocation:(id)a0 fromLocation:(id)a1;
+ (void)initialize;
+ (id)sqrt:(id)a0;
+ (id)raise:(id)a0 toPower:(id)a1;
+ (id)lowercase:(id)a0;
+ (id)_extendedExpressionClassesForSecureCoding;
+ (id)indexed:(id)a0 by:(id)a1;
+ (id)from:(id)a0 subtract:(id)a1;
+ (id)average:(id)a0;
+ (id)trunc:(id)a0;
+ (id)floor:(id)a0;
+ (id)onesComplement:(id)a0;
+ (id)canonical:(id)a0;
+ (id)add:(id)a0 to:(id)a1;
+ (id)leftshift:(id)a0 by:(id)a1;
+ (id)median:(id)a0;
+ (id)random;
+ (id)inverseOrderKey:(id)a0;
+ (id)rightshift:(id)a0 by:(id)a1;
+ (id)ln:(id)a0;
+ (id)length:(id)a0;
+ (void)_setDebugPredicateTestAction:(BOOL)a0;
+ (id)ceiling:(id)a0;
+ (id)multiply:(id)a0 by:(id)a1;
+ (id)max:(id)a0;
+ (id)exp:(id)a0;
+ (id)distinct:(id)a0;
+ (id)tokenize:(id)a0 using:(id)a1;
+ (id)log:(id)a0;
+ (id)uppercase:(id)a0;
+ (id)mode:(id)a0;
+ (id)bitwiseAnd:(id)a0 with:(id)a1;
+ (id)_compoundPredicateClassesForSecureCoding;
+ (id)bitwiseOr:(id)a0 with:(id)a1;
+ (id)count:(id)a0;
+ (id)abs:(id)a0;
+ (id)_constantValueClassesForSecureCoding;
+ (id)bitwiseXor:(id)a0 with:(id)a1;
+ (void)_setDebugPredicateSecurityScoping:(BOOL)a0;
+ (id)_predicateClassesForSecureCoding;
+ (id)divide:(id)a0 by:(id)a1;
+ (id)castObject:(id)a0 toType:(id)a1;
+ (id)_expressionClassesForSecureCoding;
+ (id)modulus:(id)a0 by:(id)a1;
+ (id)_operatorClassesForSecureCoding;

- (double)distanceFromLocation:(id)a0;

@end
