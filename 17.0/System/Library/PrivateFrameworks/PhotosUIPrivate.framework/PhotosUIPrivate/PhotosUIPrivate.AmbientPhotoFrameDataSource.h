@interface PhotosUIPrivate.AmbientPhotoFrameDataSource : PXPassiveContentDataSourceBase {
    void /* unknown type, empty encoding */ maxAssets;
    void /* unknown type, empty encoding */ maxSuggestions;
    void /* unknown type, empty encoding */ restrictToSmartAlbumTypes;
    void /* unknown type, empty encoding */ randomSeed;
    void /* unknown type, empty encoding */ featuredAssets;
    void /* unknown type, empty encoding */ coldStartMode;
    void /* unknown type, empty encoding */ snapshotMode;
}

@property (class, nonatomic, readonly) unsigned long long supportedTypes;

+ (id)suggestionPredicateForSmartAlbumTypes:(unsigned long long)a0;

- (id)keyAssetFetchOptions;
- (void).cxx_destruct;
- (void)fetchSuggestions;
- (id)fetchSuggestionsForPersonLocalIdentifier:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 changeObserver:(id)a1;
- (void)setupPreviewAssets;

@end
