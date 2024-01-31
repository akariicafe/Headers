@interface REScriptASTFeatureBuilder : REScriptASTObjectBuilder

- (BOOL)_loadIndexFromNode:(id)a0 index:(unsigned long long *)a1 error:(id *)a2;
- (id)_buildTransformedFeature:(id)a0 features:(id)a1 node:(id)a2 error:(id *)a3;
- (id)buildObjectWithBinaryExpressionNode:(id)a0 previousExpression:(id)a1 error:(id *)a2;
- (id)buildObjectWithFunctionNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithIdentifierNode:(id)a0 error:(id *)a1;
- (id)buildObjectWithSubscriptExpressionNode:(id)a0 error:(id *)a1;
- (id)objectTypeErrorDescription;

@end
