@class NSString, NSArray, NSURL;

@interface NanoUniverse.AegirCloudCoverService : NSObject {
    void /* unknown type, empty encoding */ directory;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ refreshTimeIntervalInSeconds;
    void /* unknown type, empty encoding */ imageScale;
    void /* unknown type, empty encoding */ privateQueue;
    void /* unknown type, empty encoding */ startBackoffInterval;
    void /* unknown type, empty encoding */ maxBackoffInterval;
    void /* unknown type, empty encoding */ dispatchSourceTimer;
    void /* unknown type, empty encoding */ operationsInProgress;
    void /* unknown type, empty encoding */ backoffInterval;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ authenticator;
}

@property (class, nonatomic, readonly) NSString *cloudLevelPrefix;
@property (class, nonatomic, readonly) NSString *cloudLevelLowFileName;
@property (class, nonatomic, readonly) NSString *cloudLevelMidFileName;
@property (class, nonatomic, readonly) NSString *cloudLevelHighFileName;

@property (nonatomic, readonly) NSArray *allCloudLevelFileNames;
@property (nonatomic, retain) void /* unknown type, empty encoding */ fileConverter;
@property (nonatomic) void /* unknown type, empty encoding */ disableFetch;
@property (nonatomic, copy) NSURL *directory;
@property (nonatomic, readonly) BOOL canFetchData;

- (id)currentURLForCloudLevelWith:(id)a0;
- (id)urlForCloudLevelWith:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)cloudTextureURLs;
- (id)initWithImageScale:(float)a0;
- (void)retrieveCloudTextureURLsWithNotifyOn:(id)a0 completionHandler:(id /* block */)a1;

@end
