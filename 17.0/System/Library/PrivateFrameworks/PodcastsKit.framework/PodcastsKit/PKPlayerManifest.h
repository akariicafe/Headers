@interface PKPlayerManifest : NSObject {
    void /* unknown type, empty encoding */ playableContent;
    void /* unknown type, empty encoding */ assetInfo;
    void /* unknown type, empty encoding */ siriContext;
}

+ (id)manifestForEpisode:(id)a0;
+ (id)manifestForEpisodeStoreId:(id)a0 assetInfo:(id)a1;
+ (id)manifestForEpisodeStoreId:(id)a0 siriContext:(id)a1;
+ (id)manifestForPlayMyPodcastsWithSiriContext:(id)a0;
+ (id)manifestForShow:(id)a0;
+ (id)manifestForShowStoreId:(id)a0 assetInfo:(id)a1;
+ (id)manifestForShowStoreId:(id)a0 siriContext:(id)a1;
+ (id)manifestForShowUuid:(id)a0 siriContext:(id)a1;
+ (id)manifestForStationId:(id)a0 siriContext:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
