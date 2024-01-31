@class NSString, PHFetchResult, PHPhotoLibrary, PHAssetCollection;

@interface PNWidgetAlbumSuggester : NSObject

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) unsigned short suggestionSubtype;
@property (readonly, nonatomic) NSString *suggestionContext;
@property (readonly, nonatomic) NSString *widgetIdentifier;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHFetchResult *suggestions;

+ (unsigned short)widgetSuggestionSubtypeForAssetCollectionType:(long long)a0;

- (void).cxx_destruct;
- (id)fetchSuggestionsWithOptions:(id)a0;
- (id)initWithAlbumLocalIdentifier:(id)a0 widgetIdentifier:(id)a1 photoLibrary:(id)a2;
- (unsigned long long)removeSuggestionsNotRelevantForDate:(id)a0;
- (id)updatedSuggestionLocalIdentifiersForDate:(id)a0 numberOfSuggestions:(unsigned long long)a1;
- (id)_assetFetchOptions;
- (id)_assetIndexesForDate:(id)a0 count:(unsigned long long)a1 from:(id)a2;
- (id)_makeSuggestionsFromAssets:(id)a0 numberOfSuggestions:(unsigned long long)a1 date:(id)a2;
- (id)_mutableAssetIndexesForAssetCount:(unsigned long long)a0;
- (id)_predicateForFeaturedSuggestions;
- (void)_shuffleAssetIndexes:(id)a0;

@end
