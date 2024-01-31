@class NSString, NSArray;

@interface HDSQLiteDatabaseIndexSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *columns;
@property (nonatomic) BOOL isUnique;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
