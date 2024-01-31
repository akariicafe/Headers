@class NSError, AVAsset, NSSet;

@interface TSDMovieCompatibilityChecker : NSObject {
    AVAsset *mAsset;
    struct { int width; int height; } mCustomMaxPlayableVideoDimensions;
    NSSet *mCustomPlayableVideoCodecTypes;
    int mCustomMaxPlayableVideoPixelsPerFrame;
}

@property (readonly, nonatomic) long long compatibilityLevel;
@property (readonly, nonatomic) NSError *error;

- (id)init;
- (void)dealloc;
- (id)initWithAsset:(id)a0;
- (void)cancel;
- (void)checkCompatibilityUpToLevel:(long long)a0 completionHandler:(id /* block */)a1;
- (void)checkCustomCompatibilityWithVideoCodecTypes:(id)a0 maxPlayableVideoDimensions:(struct CGSize { double x0; double x1; })a1 maxPlayableVideoPixelsPerFrame:(int)a2 completionHandler:(id /* block */)a3;
- (BOOL)p_assetHasSupportedFileTypeOnAllDevices;
- (void)p_didFinishCheckingCompatibilityUpToLevel:(long long)a0 actualLevel:(long long)a1 didCancel:(BOOL)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)p_isAudioTrackPlayableOnAllDevices:(id)a0;
- (BOOL)p_isH263VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)p_isH264VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)p_isLoadedAssetPlayableOnAllDevices;
- (BOOL)p_isMPEG4VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)p_isSorenson3VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)p_isVideoTrackPlayableOnAllDevices:(id)a0;
- (id)p_sampleDescriptionExtensionAtomDataFromVideoFormatDescription:(struct opaqueCMFormatDescription { } *)a0 forAtomType:(id)a1;

@end
