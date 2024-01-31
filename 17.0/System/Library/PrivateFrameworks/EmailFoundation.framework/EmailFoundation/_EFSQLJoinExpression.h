@class NSString, EFSQLSelectStatement;
@protocol EFSQLExpressable;

@interface _EFSQLJoinExpression : NSObject <EFSQLExpressable, EFSQLSelectComponent>

@property (readonly, weak, nonatomic) EFSQLSelectStatement *select;
@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly, copy, nonatomic) NSString *tableAlias;
@property (readonly, nonatomic) id<EFSQLExpressable> joinConstraint;
@property (readonly, nonatomic) BOOL isLeftOuter;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leftOuterJoin:(id)a0 sourceColumn:(id)a1 targetColumn:(id)a2;
- (id)join:(id)a0 on:(id)a1;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void)orderByColumn:(id)a0 ascending:(BOOL)a1;
- (id)leftOuterJoin:(id)a0 on:(id)a1;
- (id)join:(id)a0 alias:(id)a1 on:(id)a2;
- (id)join:(id)a0 alias:(id)a1 sourceColumn:(id)a2 targetColumn:(id)a3;
- (void)groupByColumn:(id)a0;
- (id)leftOuterJoin:(id)a0 alias:(id)a1 sourceColumn:(id)a2 targetColumn:(id)a3;
- (id)join:(id)a0 sourceColumn:(id)a1 targetColumn:(id)a2;
- (void).cxx_destruct;
- (void)addResultColumn:(id)a0 alias:(id)a1;
- (void)addResultColumn:(id)a0;
- (id)leftOuterJoin:(id)a0 alias:(id)a1 on:(id)a2;
- (id)initWithSelect:(id)a0 tableName:(id)a1 tableAlias:(id)a2 joinConstraint:(id)a3 isLeftOuter:(BOOL)a4;

@end
