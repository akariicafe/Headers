@interface SNObjectUtils : NSObject

+ (BOOL)checkEqualityAllowingNilBetweenObject:(id)a0 andOther:(id)a1;
+ (BOOL)checkTransformDoesNotChangeObject:(id)a0 transform:(id /* block */)a1;
+ (BOOL)checkTransformsDoNotChangeObject:(id)a0 transforms:(id)a1;
+ (BOOL)classOfObject:(id)a0 isKindOfAnyOfOptions:(id)a1;
+ (BOOL)validateClassOfObject:(id)a0 isKindOf:(Class)a1 error:(id *)a2;
+ (BOOL)validateClassOfObject:(id)a0 isKindOfAnyOfOptions:(id)a1 error:(id *)a2;
+ (BOOL)validateEqualityBetweenObject:(id)a0 expected:(id)a1 error:(id *)a2;

- (id)init;

@end
