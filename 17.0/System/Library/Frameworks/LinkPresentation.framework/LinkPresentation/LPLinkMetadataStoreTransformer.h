@class NSURL, LPLinkMetadata;

@interface LPLinkMetadataStoreTransformer : NSObject {
    LPLinkMetadata *_metadata;
    NSURL *_URL;
}

- (id)storeIdentifier;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 URL:(id)a1;

@end
