@class NSMutableArray;

@interface TRIGroupedPredicate : TRIPBMessage

@property (nonatomic) int logicalOperator;
@property (nonatomic) BOOL hasLogicalOperator;
@property (retain, nonatomic) NSMutableArray *predicateGroupArray;
@property (readonly, nonatomic) unsigned long long predicateGroupArray_Count;
@property (retain, nonatomic) NSMutableArray *singlePredicateArray;
@property (readonly, nonatomic) unsigned long long singlePredicateArray_Count;

+ (id)descriptor;

@end
