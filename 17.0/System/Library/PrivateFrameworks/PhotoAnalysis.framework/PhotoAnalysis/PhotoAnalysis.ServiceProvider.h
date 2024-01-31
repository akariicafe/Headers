@interface PhotoAnalysis.ServiceProvider : _TtCs12_SwiftObject <PLPhotoAnalysisServiceProviderProtocol> {
    void /* unknown type, empty encoding */ serviceCreationTaskByDescription;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ executive;
    void /* unknown type, empty encoding */ clientBundleID;
    void /* unknown type, empty encoding */ clientDescription;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ stateHolder;
}

- (void)notifyLibraryAvailableAtURL:(id)a0;
- (void)executiveServiceAt:(id)a0 reply:(id /* block */)a1;
- (void)legacyStorytellingServiceAt:(id)a0 reply:(id /* block */)a1;
- (void)momentGraphServiceAt:(id)a0 reply:(id /* block */)a1;
- (void)photoLibraryServiceAt:(id)a0 reply:(id /* block */)a1;
- (void)testServiceAt:(id)a0 reply:(id /* block */)a1;
- (void)wallpaperServiceAt:(id)a0 reply:(id /* block */)a1;

@end
