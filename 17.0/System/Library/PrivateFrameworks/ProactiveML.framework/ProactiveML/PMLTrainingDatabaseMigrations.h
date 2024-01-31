@class NSDictionary;

@interface PMLTrainingDatabaseMigrations : NSObject

@property (readonly, nonatomic) NSDictionary *migrations;
@property (readonly, nonatomic) unsigned int maxVersion;

+ (id)skipFromZeroSchema:(unsigned int *)a0;
+ (id)mockMigrationsByAddingQueries:(id)a0;

- (id)initWithMigrations:(id)a0;
- (id)init;
- (unsigned int)maxVersion;
- (void).cxx_destruct;

@end
