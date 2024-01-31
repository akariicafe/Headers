@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
    int _contextLock;
    struct { id x0; void *x1; long long x2; } *_regexContext;
}

- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)symbol;
- (void)dealloc;
- (SEL)selector;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2;
- (void)_clearContext;
- (BOOL)_shouldEscapeForLike;

@end
