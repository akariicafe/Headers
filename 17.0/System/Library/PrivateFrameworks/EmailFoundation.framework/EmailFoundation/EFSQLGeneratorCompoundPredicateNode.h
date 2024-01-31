@class NSArray, NSString;
@protocol EFSQLValueExpressable;

@interface EFSQLGeneratorCompoundPredicateNode : NSObject <EFSQLGeneratorPredicateNode>

@property (readonly, nonatomic) unsigned long long predicateType;
@property (readonly, nonatomic) NSArray *childPredicates;
@property (readonly, nonatomic) id<EFSQLValueExpressable> sqlExpressable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPredicateType:(unsigned long long)a0 childPredicates:(id)a1;

@end
