@class NSArray, NSDictionary, NSString, PHPhotoLibrary, NSMutableArray, PHUserFeedbackCalculator;

@interface PXTimelineDataSource : NSObject

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) struct CGSize { double width; double height; } widgetSize;
@property (retain, nonatomic) NSMutableArray *memoryCandidates;
@property (retain, nonatomic) NSMutableArray *featuredPhotoCandidates;
@property (retain, nonatomic) NSMutableArray *filteredContent;
@property (retain, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator;
@property (readonly, nonatomic) NSArray *memories;
@property (readonly, nonatomic) NSDictionary *keyAssetByMemoryLocalIdentifier;
@property (readonly, nonatomic) NSArray *featuredPhotos;
@property (readonly, nonatomic) NSDictionary *keyAssetByFeaturedPhotoLocalIdentifier;
@property (readonly, nonatomic) NSDictionary *suggestedCropByFeaturedPhotoLocalIdentifier;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) unsigned long long widgetSizeClass;
@property (readonly, nonatomic) NSString *sourceIdentifier;

+ (BOOL)_momentIsLocationTypeAtWork:(id)a0;

- (id)init;
- (id)_gatedCropSpecBySuggestionLocalIdentiferFromSuggestions:(id)a0;
- (id)_fetchSuggestionsWithFeaturedState:(unsigned short)a0;
- (id)keyAssetFetchOptions;
- (id)_fetchMemoriesWithFeaturedState:(long long)a0;
- (id)_fetchMomentByAssetUUIDForAssets:(id)a0;
- (void)_initializeWithForceEntryUUID:(id)a0;
- (id)_fetchFallbackSuggestionsAndSetFeatured;
- (void)_initializeFeaturedCandidatesWithMemoryResult:(id)a0 suggestionResult:(id)a1;
- (id)_fetchSuggestionsWithFeaturedState:(unsigned short)a0 fetchLimit:(unsigned long long)a1;
- (id)_fetchFallbackMemoriesAndSetFeatured;
- (id)_fetchMemoriesWithFeaturedState:(long long)a0 fetchLimit:(unsigned long long)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)_isAcceptableUserFeedbackForAssetCollection:(id)a0 personUUIDs:(id)a1 asset:(id)a2;
- (void).cxx_destruct;
- (id)initWithAlbumLocalIdentifier:(id)a0 widgetIdentifier:(id)a1 widgetSize:(struct CGSize { double x0; double x1; })a2 photoLibrary:(id)a3;
- (id)initWithPhotoLibrary:(id)a0 forWidgetSize:(struct CGSize { double x0; double x1; })a1;
- (id)_gatedKeyAssetByMemoryLocalIdentifierWithMemories:(id)a0;
- (id)_defaultSortDescriptors;
- (id)_gatedKeyAssetBySuggestionLocalIdentifierWithSuggestions:(id)a0;

@end
