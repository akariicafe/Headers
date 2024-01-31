@interface MPModelRecentlyPlayedRequest : MPStoreModelRequest

+ (BOOL)supportsSecureCoding;
+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
