@class NSString, NSDictionary, PHSuggestion, PFPosterMediaSuggestion;

@interface PXWallpaperSmartAlbumDataSource : PXPassiveContentDataSourceBase <PHPhotoLibraryChangeObserver>

@property (readonly, nonatomic) PFPosterMediaSuggestion *centerMedia;
@property (retain, nonatomic) PHSuggestion *workQueue_centerSuggestion;
@property (retain) NSDictionary *classificationByPreviewAssetUUID;
@property (retain) NSDictionary *shuffleSuggestionByKeyAssetUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedTypes;
+ (BOOL)isAnySmartAlbumAvailableInPhotoLibrary:(id)a0;
+ (id)suggestionPredicateForSmartAlbumTypes:(unsigned long long)a0;

- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)fetchAssetIfNeededForAssetUUID:(id)a0;
- (id)customPeopleSuggestions;
- (id)fetchShuffleSuggestionContainingAsset:(id)a0;
- (void)fetchSuggestions;
- (id)fetchSuggestionsForPersonLocalIdentifier:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 changeObserver:(id)a1 centerMedia:(id)a2;
- (id)initWithPhotoLibrary:(id)a0 changeObserver:(id)a1 registerForPhotoLibraryChanges:(BOOL)a2 centerMedia:(id)a3;
- (void)setupPreviewAssets;
- (BOOL)shouldIncludeCenterMediaWithPreviewAssets:(id)a0;

@end
