@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)group;
- (BOOL)isPlayable;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionary;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (id)metadataForFormat:(id)a0;
- (id)mediaType;
- (int)trackID;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)_groupID;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (BOOL)displaysNonForcedSubtitles;
- (id)mediaSubTypes;
- (id)track;

@end
