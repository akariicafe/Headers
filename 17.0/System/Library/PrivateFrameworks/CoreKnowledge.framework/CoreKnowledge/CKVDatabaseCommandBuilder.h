@class NSString, CKVSQLCommandCriterion;

@interface CKVDatabaseCommandBuilder : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) CKVSQLCommandCriterion *criterion;

- (id)init;
- (id)initWithTableName:(id)a0;
- (void).cxx_destruct;
- (void)setCommandCriterion:(id)a0;

@end
