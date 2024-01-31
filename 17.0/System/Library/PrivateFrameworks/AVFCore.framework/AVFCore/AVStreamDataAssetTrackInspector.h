@class AVWeakReference;

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {
    AVWeakReference *_weakReferenceToAsset;
    int _trackID;
}

- (struct CGSize { double x0; double x1; })dimensions;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void)dealloc;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)formatDescriptions;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isEnabled;
- (id)mediaType;
- (int)trackID;
- (unsigned int)figMediaType;
- (id)mediaCharacteristics;

@end
