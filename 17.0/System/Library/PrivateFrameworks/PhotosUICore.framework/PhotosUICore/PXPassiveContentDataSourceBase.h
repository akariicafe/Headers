@class NSMutableDictionary, PHFetchResult, NSDictionary, NSHashTable, PHPhotoLibrary, NSObject, NSArray;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXPassiveContentDataSourceBase : NSObject {
    NSMutableDictionary *_keyAssetBySuggestionUUID;
    NSMutableDictionary *_personSuggestionsByPersonLocalIdentifier;
}

@property (class, readonly, nonatomic) unsigned long long supportedTypes;

@property (retain, nonatomic) PHFetchResult *peopleSuggestions;
@property (retain, nonatomic) PHFetchResult *petSuggestions;
@property (retain, nonatomic) PHFetchResult *landscapeSuggestions;
@property (retain, nonatomic) PHFetchResult *cityscapeSuggestions;
@property (retain, nonatomic) PHFetchResult *featuredSuggestions;
@property (readonly, nonatomic) NSDictionary *keyAssetBySuggestionUUID;
@property (readonly, nonatomic) NSDictionary *personSuggestionsByPersonLocalIdentifier;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSHashTable *changeObservers;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long selectedTypes;
@property (retain, nonatomic) NSArray *peopleLocalIdentifiers;
@property unsigned long long availableTypes;
@property (retain) NSArray *previewAssets;

+ (id)baseSuggestionFetchOptionsForPhotoLibrary:(id)a0;
+ (id)fetchSuggestionsWithSubtype:(unsigned short)a0 options:(id)a1;
+ (id)localizedTitleForSingleSmartAlbumType:(unsigned long long)a0;
+ (id)suggestionPredicateForSmartAlbumTypes:(unsigned long long)a0;
+ (id)systemImageNameForSingleSmartAlbumType:(unsigned long long)a0;

- (void)addChangeObserver:(id)a0;
- (id)keyAssetFetchOptions;
- (void)removeChangeObserver:(id)a0;
- (void).cxx_destruct;
- (void)cacheKeyAssetForSuggestionOids:(id)a0;
- (void)cacheSuggestionsAndKeyAssetsForPersons:(id)a0;
- (id)combineSuggestionsForSelectedTypes:(unsigned long long)a0 maxCount:(long long)a1;
- (id)customPeopleSuggestions;
- (void)fetchSuggestions;
- (void)fetchSuggestionsAndAssets;
- (id)fetchSuggestionsForPersonLocalIdentifier:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 changeObserver:(id)a1;
- (void)notifyAvailableTypeDidChange;
- (void)notifyPreviewAssetsDidChange;
- (void)setupPreviewAssets;

@end
