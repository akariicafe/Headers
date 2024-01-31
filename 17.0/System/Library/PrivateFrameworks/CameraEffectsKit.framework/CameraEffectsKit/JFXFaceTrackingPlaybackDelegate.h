@class JFXFaceTrackingPlaybackProperties, NSString, JFXARMetadataMediaReader, JFXSharedMediaDataReaderManager, NSObject;
@protocol OS_dispatch_queue, JFXPlayableElement;

@interface JFXFaceTrackingPlaybackDelegate : NSObject <PVEffectTimedPropertiesDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mediaDataReaderUpdateQueue;
@property (retain, nonatomic) JFXARMetadataMediaReader *arMetadataReader;
@property (readonly, nonatomic) JFXSharedMediaDataReaderManager *sharedMediaDataReaderManager;
@property (readonly, nonatomic) id<JFXPlayableElement> playableElement;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedFaceTrackingPropertiesQueue;
@property (retain, nonatomic) JFXFaceTrackingPlaybackProperties *cachedFaceTrackingProperties;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playbackElementPlaybackPresentationOffset;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } playbackElementPlaybackMediaRange;
@property (nonatomic) BOOL isScrubbing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)effect:(id)a0 didStopRequestingTimedProperties:(id)a1;
- (id)effect:(id)a0 timedPropertiesForGroup:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 userContext:(id)a3;
- (void)effect:(id)a0 willStartRequestingTimedProperties:(id)a1;
- (id)supportedTimedPropertyGroupsForEffect:(id)a0;
- (id)JFX_arMetadataForMediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 foundTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;
- (void)JFX_cacheFaceTrackingProperties:(id)a0;
- (void)JFX_initFaceTrackingCachingProperties;
- (void)JFX_loadMediaDataReaders;
- (void)JFX_setMediaDataReaderScrubbingMode:(BOOL)a0;
- (id)JFX_cachedFaceTrackingPropertiesForMediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forDisplayingMediaAtInterfaceOrientation:(long long)a1;
- (id)JFX_faceTrackingPlaybackPropertiesAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forDisplayingMediaAtInterfaceOrientation:(long long)a1;
- (void)JFX_initMetadataReadingProperties;
- (void)JFX_unloadMediaDataReaders;
- (id)arDataAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forDisplayingMediaAtInterfaceOrientation:(long long)a1;
- (id)faceTrackingTransformAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forDisplayingMediaAtInterfaceOrientation:(long long)a1;
- (id)initWithPlayableElement:(id)a0 sharedMediaDataReaderManager:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })jfx_mediaTimeFromPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
