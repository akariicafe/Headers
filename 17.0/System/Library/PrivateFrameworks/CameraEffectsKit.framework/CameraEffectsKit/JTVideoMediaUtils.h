@class PVColorSpace;

@interface JTVideoMediaUtils : NSObject

@property (nonatomic) BOOL cachedAssetInformationValid;
@property (nonatomic) struct CGSize { double width; double height; } cachedNaturalSize;
@property (nonatomic) float cachedFrameRate;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } cachedTransform;
@property (nonatomic) unsigned int cachedCodec4cc;
@property (retain, nonatomic) PVColorSpace *cachedColorSpace;
@property (nonatomic) int cachedDurationAt30fps;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cachedPreciseAssetDuration;
@property (nonatomic) unsigned long long cachedVideoTrackCount;
@property (nonatomic) unsigned long long cachedAudioTrackCount;
@property (nonatomic) BOOL cacheWillDieDuringLoad;

- (id)colorSpace;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void).cxx_destruct;
- (float)frameRate;
- (BOOL)isProRes;
- (struct CGSize { double x0; double x1; })naturalSizeWithIsMissing:(BOOL)a0 asset:(id)a1;
- (void)cacheTrackInformationWithAVAsset:(id)a0;
- (int)durationAt30fpsWithAssetDuration:(double)a0;
- (BOOL)hasAudibleCharacteristicWithIsMissing:(BOOL)a0;
- (BOOL)hasAudioTracks;
- (BOOL)hasVideoTracks;
- (void)invalidateCachedAssetInformation;
- (BOOL)isOriginalHEVC4k;
- (BOOL)isUnsupportedAudio;
- (void)requestAVAssetAsyncWithAsset:(id)a0 needsDerivativeMedia:(BOOL)a1 frameRate:(float)a2 completion:(id /* block */)a3;

@end
