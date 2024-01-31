@class NSDictionary;

@interface HDSQLiteDatabaseSchema : NSObject

@property (retain, nonatomic) NSDictionary *tables;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
