@class NSString, HSHomeSharingLibrary;

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource <MPArtworkDataSourceIdentifiable>

@property (class, readonly, nonatomic) NSString *artworkDataSourceShortDescription;

@property (retain, nonatomic) HSHomeSharingLibrary *library;
@property (readonly, nonatomic) NSString *artworkDataSourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)artworkDataSourceWithIdentifier:(id)a0;

- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)supportedSizesForCatalog:(id)a0;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;

@end
