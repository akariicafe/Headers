@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}

- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionary;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (id)options;
- (id)asset;
- (id)_groupMediaCharacteristics;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
- (id)defaultOption;
- (BOOL)isEqual:(id)a0;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (BOOL)_isStreamingGroup;

@end
