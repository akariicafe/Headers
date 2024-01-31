@class NSString, NSPredicate;

@interface _CSVisualizerPredicate : NSPredicate {
    NSString *_title;
    NSString *_searchString;
    unsigned long long _operator;
    NSPredicate *_numericPredicate;
}

+ (id)constantValueForExpression:(id)a0;
+ (void)getRanges:(void *)a0 matchingPredicate:(id)a1 inDescription:(id)a2;
+ (BOOL)operatorIsNumeric:(unsigned long long)a0;
+ (id)predicateWithFormatString:(id)a0 error:(id *)a1;
+ (id)translateNSPredicate:(id)a0 error:(id *)a1;

- (BOOL)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)evaluateNumerically:(id)a0;
- (BOOL)getRanges:(void *)a0 inDescription:(id)a1 options:(unsigned long long)a2 limit:(unsigned long long)a3 searchedInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4;
- (id)initWithExpression:(id)a0;
- (id)initWithSearchString:(id)a0 forTitle:(id)a1 operator:(unsigned long long)a2 error:(id *)a3;
- (id)initWithSearchString:(id)a0 operator:(unsigned long long)a1 error:(id *)a2;

@end
