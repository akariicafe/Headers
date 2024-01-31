@class NSString;

@interface PLGlobalKeyValueAttributes : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) short type;
@property (nonatomic) BOOL includeInMigrationHistory;
@property (retain, nonatomic) Class anyValueClass;

+ (id)attributesWithKey:(id)a0 type:(short)a1 includeInMigrationHistory:(BOOL)a2 anyValueClass:(Class)a3;
+ (id)attributesWithKey:(id)a0 type:(short)a1;

- (id)initWithKey:(id)a0 type:(short)a1 includeInMigrationHistory:(BOOL)a2 anyValueClass:(Class)a3;
- (void).cxx_destruct;

@end
