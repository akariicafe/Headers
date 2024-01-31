@class NSISObjectiveLinearExpression;

@interface NSISObjectiveLinearExpressionProxy : NSObject {
    NSISObjectiveLinearExpression *_expression;
}

- (unsigned long long)variableCount;
- (id)initWithEngine:(id)a0;
- (void)addVar:(struct { unsigned int x0; })a0 priority:(double)a1 times:(double)a2;
- (void)removeVar:(struct { unsigned int x0; })a0;
- (void)replaceVar:(struct { unsigned int x0; })a0 withExpression:(struct { unsigned short x0; unsigned int x1; double x2; union { struct { id x0; struct *x1; unsigned long long x2; } x0; struct { unsigned long long x0; } x1; unsigned char x2[48]; } x3; } *)a1 processVarNewToReceiver:(id /* block */)a2 processVarDroppedFromReceiver:(id /* block */)a3;
- (BOOL)restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(struct { unsigned int x0; } *)a0;

@end
