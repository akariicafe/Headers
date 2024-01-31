@class NSString, NSDictionary, NSURL, NSNumber;

@interface MPCModelGenericAVItemAssetLoadResult : NSObject

@property (nonatomic) BOOL allowsAssetCaching;
@property (nonatomic) BOOL allowsAssetInfoCaching;
@property (copy, nonatomic) NSString *assetPathExtension;
@property (nonatomic) long long assetProtectionType;
@property (nonatomic) long long assetQualityType;
@property (copy, nonatomic) NSURL *assetURL;
@property (nonatomic) BOOL isHomeSharingAsset;
@property (nonatomic) BOOL isHLSAsset;
@property (nonatomic) BOOL isCloudStreamingAsset;
@property (nonatomic) BOOL onlineSubscriptionKeysRequired;
@property (copy, nonatomic) NSURL *protectedContentSupportStorageFileURL;
@property (copy, nonatomic) NSDictionary *purchaseBundleDictionary;
@property (copy, nonatomic) NSURL *streamingKeyCertificateURL;
@property (copy, nonatomic) NSURL *streamingKeyServerURL;
@property (copy, nonatomic) NSString *keyServerProtocolType;
@property (copy, nonatomic) NSNumber *streamingKeyAdamID;
@property (copy, nonatomic) NSURL *alternateHLSPlaylistURL;
@property (copy, nonatomic) NSURL *alternateHLSKeyServerURL;
@property (copy, nonatomic) NSURL *alternateHLSKeyCertificateURL;
@property (retain, nonatomic) id suzeLeaseID;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (copy, nonatomic) id /* block */ willBecomeActivePlayerItemHandler;
@property (readonly, nonatomic) BOOL hasValidAsset;
@property (copy, nonatomic) NSString *playbackAuthorizationToken;
@property (nonatomic) long long audioAssetType;
@property (nonatomic, getter=isDownloadedAsset) BOOL downloadedAsset;
@property (nonatomic) long long source;

+ (id)assetLoadResultWithStoreAssetPlaybackResponse:(id)a0 assetLoadProperties:(id)a1 source:(long long)a2 error:(id *)a3;

- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;

@end
