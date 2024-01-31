@interface PPSPredicateUtilities : NSObject

+ (id)constantValueForLeftExpression:(id)a0 inPredicate:(id)a1;
+ (id)constantValueForLeftKeyPath:(id)a0 inPredicate:(id)a1;
+ (id)keyPathsAndValuesForPredicate:(id)a0;
+ (id)predicateByRemovingSubpredicateWithLeftExpression:(id)a0 fromPredicate:(id)a1;
+ (id)predicateByRemovingSubpredicateWithLeftKeyPath:(id)a0 fromPredicate:(id)a1;
+ (id)predicateForDateInterval:(id)a0 withKeyPath:(id)a1;
+ (id)subpredicateForPredicate:(id)a0 withLeftExpression:(id)a1;
+ (id)subpredicateForPredicate:(id)a0 withLeftKeyPath:(id)a1;
+ (id)subpredicatesForPredicate:(id)a0 withLeftExpression:(id)a1;
+ (id)subpredicatesForPredicate:(id)a0 withLeftKeyPath:(id)a1;

@end
