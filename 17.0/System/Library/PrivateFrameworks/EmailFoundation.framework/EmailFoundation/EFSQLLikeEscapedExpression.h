@class NSString;

@interface EFSQLLikeEscapedExpression : NSObject <EFSQLValueExpressable>

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) unsigned short escapeCharacter;
@property (readonly, nonatomic) unsigned long long pattern;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 pattern:(unsigned long long)a1;
- (id)initWithValue:(id)a0 pattern:(unsigned long long)a1 escapeCharacter:(unsigned short)a2;

@end
