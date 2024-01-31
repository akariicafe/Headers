@class NSString, EFSQLValueSource;
@protocol EFSQLValueExpressable, EFSQLExpressable;

@interface EFSQLGeneratorComparisonPredicateNode : NSObject <EFSQLGeneratorPredicateNode>

@property (readonly, nonatomic) EFSQLValueSource *valueSource;
@property (readonly, nonatomic) unsigned long long predicateOperator;
@property (readonly, nonatomic) id<EFSQLExpressable> constantValue;
@property (readonly, nonatomic) EFSQLValueSource *comparisonSource;
@property (readonly, nonatomic) id<EFSQLValueExpressable> sqlExpressable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithValueSource:(id)a0 predicateOperator:(unsigned long long)a1 comparisonSource:(id)a2;
- (id)initWithValueSource:(id)a0 predicateOperator:(unsigned long long)a1 constantValue:(id)a2;

@end
