@class NSString, PFFairPlayAsset;

@interface PodcastsFoundation.FairPlayKeySessionMock : _TtCs12_SwiftObject <PFFairPlayKeySession> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ adamIDHandler;
    void /* unknown type, empty encoding */ assetHandler;
    void /* unknown type, empty encoding */ bypassCacheHandler;
    void /* unknown type, empty encoding */ keyStoreFilePathHandler;
    void /* unknown type, empty encoding */ registerHandler;
    void /* unknown type, empty encoding */ deregisterHandler;
    void /* unknown type, empty encoding */ processHandler;
    void /* unknown type, empty encoding */ stopAndInvalidateHandler;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) PFFairPlayAsset *asset;
@property (nonatomic) BOOL bypassCache;
@property (nonatomic, readonly) NSString *keyStoreFilePath;

- (void)register;
- (void)deregister;
- (void)processKeyWith:(id)a0 completion:(id /* block */)a1;
- (void)stopAndInvalidateKeysWithCompletion:(id /* block */)a0;

@end
