@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLIndexedColumnSchema : NSObject

@property (readonly, nonatomic) id<EFSQLExpressable> expression;
@property (readonly, nonatomic) unsigned long long collation;
@property (readonly, nonatomic) unsigned long long orderDirection;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *definition;

- (void).cxx_destruct;
- (id)initWithExpression:(id)a0;
- (id)initWithColumnName:(id)a0;
- (id)initWithColumnName:(id)a0 orderDirection:(unsigned long long)a1;
- (id)initWithColumnName:(id)a0 collation:(unsigned long long)a1 orderDirection:(unsigned long long)a2;
- (id)initWithExpression:(id)a0 collation:(unsigned long long)a1 orderDirection:(unsigned long long)a2;
- (id)initWithExpression:(id)a0 orderDirection:(unsigned long long)a1;

@end
