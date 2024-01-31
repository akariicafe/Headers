@class NSString, NSArray;
@protocol SiriCoreSQLiteValue;

@interface SiriCoreSQLiteQueryCriterion : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *columnName;
@property (readonly, nonatomic) long long comparisonOperator;
@property (readonly, nonatomic) long long logicalOperator;
@property (readonly, copy, nonatomic) id<SiriCoreSQLiteValue> value;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy, nonatomic) NSArray *subcriteria;

+ (id)betweenQueryCriterionWithColumnName:(id)a0 fromValue:(id)a1 toValue:(id)a2 negation:(BOOL)a3;
+ (id)andQueryCriterionWithSubcriteria:(id)a0;
+ (id)andQueryCriterionWithSubcriteriaProvider:(id /* block */)a0;
+ (id)equalToQueryCriterionWithColumnName:(id)a0 value:(id)a1;
+ (id)greaterThanOrEqualToQueryCriterionWithColumnName:(id)a0 value:(id)a1;
+ (id)greaterThanQueryCriterionWithColumnName:(id)a0 value:(id)a1;
+ (id)inQueryCriterionWithColumnName:(id)a0 values:(id)a1 negation:(BOOL)a2;
+ (id)isNullQueryCriterionWithColumnName:(id)a0 negation:(BOOL)a1;
+ (id)isQueryCriterionWithColumnName:(id)a0 value:(id)a1 negation:(BOOL)a2;
+ (id)lessThanOrEqualToQueryCriterionWithColumnName:(id)a0 value:(id)a1;
+ (id)lessThanQueryCriterionWithColumnName:(id)a0 value:(id)a1;
+ (id)likeQueryCriterionWithColumnName:(id)a0 value:(id)a1 negation:(BOOL)a2;
+ (id)notEqualToQueryCriterionWithColumnName:(id)a0 value:(id)a1;
+ (id)orQueryCriterionWithSubcriteria:(id)a0;
+ (id)orQueryCriterionWithSubcriteriaProvider:(id /* block */)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColumnName:(id)a0 comparisonOperator:(long long)a1 logicalOperator:(long long)a2 value:(id)a3 values:(id)a4 subcriteria:(id)a5;
- (id)initWithColumnName:(id)a0 comparisonOperator:(long long)a1 logicalOperator:(long long)a2 value:(id)a3 values:(id)a4 subcriteriaProvider:(id /* block */)a5;

@end
