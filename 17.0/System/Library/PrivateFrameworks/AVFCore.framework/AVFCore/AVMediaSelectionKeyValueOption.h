@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)group;
- (BOOL)isPlayable;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionary;
- (id)_groupMediaType;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (id)metadataForFormat:(id)a0;
- (id)mediaType;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)_groupID;

@end
