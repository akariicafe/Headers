@class NSURL, NSDictionary;

@interface TSPDocumentResourceRegistry : NSObject {
    NSDictionary *_metadataDictionary;
}

@property (class, copy, nonatomic) NSURL *sharedRegistryMetadataURL;

@property (readonly) NSDictionary *metadataDictionary;

+ (id)sharedRegistry;

- (id)initWithMetadataDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)documentResourceInfoForDigestString:(id)a0 locator:(id)a1;
- (id)documentResourceInfosForTags:(id)a0;
- (id)initWithMetadataURL:(id)a0;
- (id)localStrategyProviderForDocumentResourceInfos:(id)a0;

@end
