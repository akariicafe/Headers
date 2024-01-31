@class NSString;

@interface REMDatabaseMigrationAccountInfo : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (BOOL)isCloudKit;
- (id)initWithAccountType:(long long)a0 identifier:(id)a1 name:(id)a2;

@end
