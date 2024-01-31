@class NSArray;

@interface OKMediaFeederURLs : OKMediaFeeder {
    NSArray *_mediaURLs;
}

+ (BOOL)isRemote;
+ (id)mediaFeederWithMediaObjects:(id)a0;
+ (id)mediaFeederWithMediaURLs:(id)a0;
+ (BOOL)supportLiveUpdates;
+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)initWithMediaObjects:(id)a0;
- (BOOL)canBePersisted;
- (id)feederSettings;
- (id)indexesForMediaObjects:(id)a0;
- (id)initWithMediaURLs:(id)a0;
- (id)mediaObjectURLsAtIndexes:(id)a0;
- (id)mediaObjectsAtIndexes:(id)a0;
- (unsigned long long)numberOfMediaObjects;
- (id)reloadMediaObjectsWithCompletionHandler:(id /* block */)a0;

@end
