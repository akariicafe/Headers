@class NSDictionary, ICStorePlatformMetadata;

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement {
    ICStorePlatformMetadata *_storeItem;
}

@property (readonly, nonatomic) NSDictionary *lookupDictionary;

- (void).cxx_destruct;
- (id)initWithLookupDictionary:(id)a0 additionalTrackMetadata:(id)a1;
- (id)storeItem;

@end
