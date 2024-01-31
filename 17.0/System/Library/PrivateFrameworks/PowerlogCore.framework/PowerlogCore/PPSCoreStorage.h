@class PPSSQLStorage, PPSFlatStorage, NSDictionary;

@interface PPSCoreStorage : NSObject

@property (retain) PPSSQLStorage *sqlStorage;
@property (retain) PPSFlatStorage *flatStorage;
@property (retain) NSDictionary *storageMap;

+ (void)setupStorage;
+ (void)startAllStorage;
+ (void)setupEntryObjects;
+ (void)setupMetadataStorage;
+ (id)sharedFlatStorage;
+ (id)sharedSQLStorage;
+ (id)storageClassForKey:(id)a0;
+ (id)storageClassForType:(int)a0;

- (id)init;
- (void)startStorage;
- (void).cxx_destruct;
- (void)mergePreUnlockDBFile;

@end
