@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)group;
- (BOOL)isPlayable;
- (void)dealloc;
- (id)dictionary;
- (id)_groupMediaType;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_groupID;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;

@end
