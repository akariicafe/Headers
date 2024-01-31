@class NSArray, AVMediaSelectionOption, AVMediaSelectionGroupInternal;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) AVMediaSelectionOption *defaultOption;
@property (readonly, nonatomic) BOOL allowsEmptySelection;

+ (id)mediaSelectionGroupWithAsset:(id)a0 dictionary:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 filteredAndSortedAccordingToPreferredLanguages:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withLocale:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withMediaCharacteristics:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withoutMediaCharacteristics:(id)a1;
+ (id)playableMediaSelectionOptionsFromArray:(id)a0;

- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)init;
- (void)dealloc;
- (id)dictionary;
- (id)_groupMediaType;
- (id)description;
- (id)asset;
- (id)_groupMediaCharacteristics;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)_weakReference;
- (id)_groupID;
- (BOOL)_isStreamingGroup;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)currentBundleIdentifier;
- (BOOL)_matchesGroupID:(id)a0 mediaType:(id)a1;
- (id)_primaryMediaCharacteristic;
- (void)setCurrentBundleIdentifier:(id)a0;

@end
