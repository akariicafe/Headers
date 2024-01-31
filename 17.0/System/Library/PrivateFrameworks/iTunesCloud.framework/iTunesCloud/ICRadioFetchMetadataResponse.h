@class NSArray;

@interface ICRadioFetchMetadataResponse : ICRadioResponse

@property (readonly, copy, nonatomic) NSArray *allStorePlatformMetadata;

- (id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:(id)a0;
- (id)storePlatformMetadataForStoreAdamID:(long long)a0;

@end
