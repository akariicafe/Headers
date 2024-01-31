@class NSString;

@interface HDSQLiteDatabaseTriggerSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *sql;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
