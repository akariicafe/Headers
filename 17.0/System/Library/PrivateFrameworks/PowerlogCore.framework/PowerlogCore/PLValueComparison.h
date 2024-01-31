@class NSString;

@interface PLValueComparison : NSObject

@property (readonly) NSString *key;
@property (readonly) id value;
@property (readonly) short comparisonOperation;
@property (readonly) BOOL hasNilComparisonComponent;
@property (readonly) BOOL hasEqualComparisonComponent;
@property (readonly) BOOL hasGreaterThanComparisonComponent;
@property (readonly) BOOL hasLessThanComparisonComponent;
@property (readonly) NSString *comparisonOperationString;
@property (readonly) NSString *sqlWhereClause;

- (id)initWithKey:(id)a0 withValue:(id)a1 withComparisonOperation:(short)a2;
- (id)description;
- (void).cxx_destruct;

@end
