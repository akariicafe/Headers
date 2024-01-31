@class NSProgress, NSString;

@interface PLModelMigrationAction_RelocateBundleScopeData : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)legacyPrefixPathWithType:(unsigned char)a0;
- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;
- (long long)renameWithDestinationPath:(unsigned char)a0 error:(id *)a1;
- (long long)updateResourceFilePathWithManagedObjectContext:(id)a0 bundleScope:(unsigned short)a1 progress:(id)a2 error:(id *)a3;

@end
