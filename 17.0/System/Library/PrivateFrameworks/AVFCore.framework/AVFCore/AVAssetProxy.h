@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1 prefersNominalDurations:(BOOL)a2;

- (struct OpaqueFigAsset { } *)_figAsset;
- (void)dealloc;
- (id)tracks;
- (BOOL)isProxy;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (Class)_classForTrackInspectors;
- (id)initWithPropertyList:(id)a0;
- (id)_assetInspector;
- (id)_assetInspectorLoader;

@end
