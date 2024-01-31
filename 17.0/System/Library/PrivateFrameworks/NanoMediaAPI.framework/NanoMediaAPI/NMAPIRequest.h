@class NSURL;

@interface NMAPIRequest : MPStoreModelRequest

@property (nonatomic) unsigned long long cachePolicy;
@property (retain, nonatomic) NSURL *cacheURL;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDefaultMusicRequestProperties;
- (void)setEditorialRequestProperties;
- (Class)responseParserClass;
- (id)urlComponentsWithStoreURLBag:(id)a0 error:(id *)a1;

@end
