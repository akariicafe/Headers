@class NSDictionary, NSSet, NSArray;

@interface PUPickerSuggestionResultFetcherResult : NSObject {
    void /* unknown type, empty encoding */ suggestion;
    void /* unknown type, empty encoding */ suggestionSubtypeByAssetUUID;
    void /* unknown type, empty encoding */ inlinePlaybackDisallowedAssetUUIDs;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ fetchResult;
@property (nonatomic, readonly) NSDictionary *suggestionSubtypeByAssetUUID;
@property (nonatomic, readonly) NSSet *inlinePlaybackDisallowedAssetUUIDs;
@property (nonatomic, readonly) BOOL shouldReverseSortOrder;
@property (nonatomic, readonly) BOOL selectedFilterableSuggestion;
@property (nonatomic, readonly) unsigned long long posterClassification;
@property (nonatomic, readonly) long long numberOfItemsToPlayInline;
@property (nonatomic, readonly) NSArray *allowedColumnsOverride;
@property (nonatomic, readonly) BOOL isLiveWallpaperSuggestion;

- (id)init;
- (void).cxx_destruct;

@end
