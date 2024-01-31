@class NSString;

@interface FHDatabaseClause : NSObject

@property (copy, nonatomic) NSString *comparisonOperator;
@property (copy, nonatomic) NSString *fieldName;
@property (copy, nonatomic) NSString *expression;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQuoteWrapOption:(id)a0 fieldName:(id)a1 expression:(id)a2 quoteWrapExpression:(BOOL)a3;

@end
