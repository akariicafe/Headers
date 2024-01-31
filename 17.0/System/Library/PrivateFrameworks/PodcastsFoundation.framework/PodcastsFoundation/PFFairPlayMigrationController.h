@interface PFFairPlayMigrationController : NSObject {
    void /* unknown type, empty encoding */ metadataLoader;
    void /* unknown type, empty encoding */ validationManager;
    void /* unknown type, empty encoding */ secureKeyRequestStorage;
    void /* unknown type, empty encoding */ invalidationManager;
    void /* unknown type, empty encoding */ fairPlayEpisodeDataFetcher;
    void /* unknown type, empty encoding */ legacyDownloadRenewalManager;
    void /* unknown type, empty encoding */ internalQueue;
}

@property (class, nonatomic, readonly) PFFairPlayMigrationController *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)migrateIfNecessaryWithCompletion:(id /* block */)a0;
- (void)rollbackIfNecessaryWithCompletion:(id /* block */)a0;

@end
