@class NSString, NSArray;

@interface BMSQLSchema : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSArray *columns;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (id)initWithTableName:(id)a0 columns:(id)a1;
- (id)description;
- (id)createTableSQL;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
