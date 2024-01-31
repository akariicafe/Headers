@interface SHSheetActivityItemUtilities : NSObject

+ (id)itemProvidersFromActivityItems:(id)a0;
+ (void)_loadMetadataFromRemainingGroupActivityItemProviders:(id)a0 loadedMetadata:(id)a1 loadedError:(id)a2 completion:(id /* block */)a3;
+ (void)loadMetadataFromGroupActivityItemProviders:(id)a0 completion:(id /* block */)a1;
+ (id)urlForActivityItem:(id)a0;

@end
