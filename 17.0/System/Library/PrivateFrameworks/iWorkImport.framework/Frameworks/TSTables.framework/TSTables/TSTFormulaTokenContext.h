@class TSTExpressionNode;

@interface TSTFormulaTokenContext : NSObject

@property (readonly, nonatomic) TSTExpressionNode *expressionNode;
@property (readonly, nonatomic) unsigned long long parenNestingLevel;
@property (readonly, nonatomic) unsigned long long argumentIndex;

+ (id)tokenContextWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1 argumentIndex:(unsigned long long)a2;
+ (id)tokenContextWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1;
- (id)initWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1 argumentIndex:(unsigned long long)a2;

@end
