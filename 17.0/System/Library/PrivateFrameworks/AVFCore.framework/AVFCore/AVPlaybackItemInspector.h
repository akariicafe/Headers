@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem { } *playbackItem;

- (long long)trackCount;
- (id)lyrics;
- (unsigned long long)hash;
- (id)trackIDs;
- (void)dealloc;
- (BOOL)providesPreciseDurationAndTiming;
- (id)availableMetadataFormats;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 trackIDs:(id)a1;
- (id)commonMetadata;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)metadataForFormat:(id)a0;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isEqual:(id)a0;

@end
