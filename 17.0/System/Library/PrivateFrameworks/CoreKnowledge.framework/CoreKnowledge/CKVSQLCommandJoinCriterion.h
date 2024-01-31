@class NSString, NSArray;

@interface CKVSQLCommandJoinCriterion : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *columnName;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSString *comparingColumnName;
@property (readonly, nonatomic) NSString *comparingTableName;
@property (readonly, nonatomic) long long sqlOperator;
@property (readonly, nonatomic) NSArray *subCriteria;

+ (id)criterionWithANDSubCriteria:(id)a0;
+ (id)criterionWithColumnName:(id)a0 onTable:(id)a1 EQUALSColumnName:(id)a2 comparingTableName:(id)a3;

- (id)initWithSubCriteria:(id)a0 sqlOperator:(long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColumnName:(id)a0 onTable:(id)a1 comparingColumnName:(id)a2 comparingTableName:(id)a3 sqlOperator:(long long)a4;

@end
