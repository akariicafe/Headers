@class NSString, NSArray, PXAssetsDataSourceManager, PXAssetsDataSourceCountsController;

@interface CKPhotosGridFooterViewModel : PXFooterViewModel <PXChangeObserver, IMPhotoLibraryPersistenceManagerListener> {
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    NSArray *_syndicationIdentifiers;
    PXAssetsDataSourceCountsController *_assetsCountsController;
    struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } _detailedCounts;
    long long _savedCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateDetailedCounts;
- (void)setSavedCount:(long long)a0;
- (void).cxx_destruct;
- (id)initAssetsDataSourceManager:(id)a0 syndicationIdentifiers:(id)a1;
- (void)setDetailedCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)_updateSavedCount;
- (void)photoLibraryPersistedSyndicatedAssetSetDidChange;

@end
