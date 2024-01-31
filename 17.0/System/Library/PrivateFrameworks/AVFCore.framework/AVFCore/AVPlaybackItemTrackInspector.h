@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })dimensions;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void)dealloc;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (float)estimatedDataRate;
- (id)formatDescriptions;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isEnabled;
- (id)asset;
- (id)mediaType;
- (int)trackID;
- (BOOL)isEqual:(id)a0;
- (float)peakDataRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned int)_figMediaType;

@end
