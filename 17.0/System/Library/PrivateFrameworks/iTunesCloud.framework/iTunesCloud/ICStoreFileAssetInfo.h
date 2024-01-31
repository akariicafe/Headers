@class NSString, NSArray, NSURL, ICStoreFinanceItemMetadata, NSData, NSDictionary;

@interface ICStoreFileAssetInfo : NSObject {
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic) NSURL *assetURL;
@property (copy, nonatomic) NSString *downloadKey;
@property (nonatomic) long long expectedProtectionType;
@property (copy, nonatomic) NSArray *fairPlayInfoList;
@property (nonatomic) long long flavorType;
@property (copy, nonatomic) NSString *fileExtension;
@property (nonatomic) unsigned long long fileSize;
@property (copy, nonatomic) ICStoreFinanceItemMetadata *metadata;
@property (copy, nonatomic) NSData *md5;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) long long protectionType;
@property (readonly, copy, nonatomic) NSString *playbackAuthorizationToken;

- (void).cxx_destruct;
- (id)_metadataDictionary;
- (id)initWithAssetURL:(id)a0;
- (id)initWithFileAssetResponseDictionary:(id)a0;

@end
