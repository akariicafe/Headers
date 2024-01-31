@interface AAVersionUpdater : NSObject <AAVersionUpdaterProtocol_Internal, AAVersionUpdaterProtocol>

@property (nonatomic) unsigned long long currentVersion;

- (BOOL)needsUpdate;
- (id)_latestVersion;
- (void)_performVersionUpdate:(unsigned long long)a0;
- (id)initWithStartingVersion:(unsigned long long)a0;
- (void)performMigrations;

@end
