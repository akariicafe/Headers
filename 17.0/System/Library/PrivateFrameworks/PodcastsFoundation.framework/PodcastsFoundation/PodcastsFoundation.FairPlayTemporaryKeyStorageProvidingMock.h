@interface PodcastsFoundation.FairPlayTemporaryKeyStorageProvidingMock : _TtCs12_SwiftObject <PFFairPlayTemporaryKeyStorageProviding> {
    void /* unknown type, empty encoding */ createDirectoryHandler;
    void /* unknown type, empty encoding */ removeDirectoryHandler;
    void /* unknown type, empty encoding */ directoryExistsHandler;
    void /* unknown type, empty encoding */ directoryLocationHandler;
}

- (id)createDirectoryFor:(long long)a0 error:(id *)a1;
- (BOOL)directoryExistsFor:(long long)a0;
- (id)directoryLocationFor:(long long)a0;
- (BOOL)removeDirectoryFor:(long long)a0 error:(id *)a1;

@end
