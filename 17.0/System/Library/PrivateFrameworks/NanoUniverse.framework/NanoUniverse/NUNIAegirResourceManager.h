@class NSString, CLKUIResourceProviderKey, MTLFunctionConstantValues, NSMapTable, _TtC12NanoUniverse22AegirCloudCoverService;
@protocol MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLBuffer;

@interface NUNIAegirResourceManager : NSObject <CLKUIResourceProviderDelegate> {
    id<MTLDevice> _device;
    CLKUIResourceProviderKey *_resourceProviderKey;
    unsigned long long _clients;
    unsigned long long _displayPixelFormat;
    id<MTLLibrary> _library;
    id<MTLRenderPipelineState> _pipelineStateLocationDot;
    id<MTLRenderPipelineState> _pipelineStateThreshold;
    id<MTLRenderPipelineState> _pipelineStatePost;
    id<MTLRenderPipelineState> _pipelineStateDisplay;
    id<MTLRenderPipelineState> _pipelineStateStarfield;
    id<MTLRenderPipelineState> _pipelineStateStar;
    id<MTLRenderPipelineState> _pipelineStateSpheroids[24][4];
    id<MTLBuffer> _rectVerticesBuffer;
    id<MTLBuffer> _starVerticesBuffer;
    MTLFunctionConstantValues *_pipelineConstants;
    NSMapTable *_textureGroupHashTable;
}

@property (readonly, nonatomic) _TtC12NanoUniverse22AegirCloudCoverService *cloudsService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_deallocInstance:(id)a0;
+ (id)sharedInstanceWithDisplayPixelFormat:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)_loadGeometry;
- (void)addClient;
- (id)provideAtlasBacking:(id)a0;
- (void)removeClient;
- (id)resourceProviderKey;
- (void)_deferredCloudDataFetchIfNeeded;
- (void)_handleCloudCoverTextureExpired;
- (id)_generatePipelineVshName:(id)a0 fshName:(id)a1 config:(unsigned long long)a2 blend0:(unsigned long long)a3 blend1:(unsigned long long)a4 pixelFormat0:(unsigned long long)a5 pixelFormat1:(unsigned long long)a6;
- (id)_provideEarthCloudsAtlasBacking:(id)a0;
- (id)initWithDisplayPixelFormat:(unsigned long long)a0;
- (void)purgeAllCloudCoverTextures;
- (id)rectVerticesBuffer;
- (id)renderDisplayPipeline;
- (id)renderOffscreenPipelineForLocationDot;
- (id)renderOffscreenPipelineForPost;
- (id)renderOffscreenPipelineForSpheroid:(unsigned long long)a0 config:(unsigned long long)a1;
- (id)renderOffscreenPipelineForStar;
- (id)renderOffscreenPipelineForStarfield;
- (id)renderOffscreenPipelineForThreshold;
- (void)setPipelineConstants:(struct NUNIAegirPipelineConstants { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; void /* unknown type, blank encoding */ x3; void /* unknown type, blank encoding */ x4; void /* unknown type, blank encoding */ x5; void /* unknown type, blank encoding */ x6; void /* unknown type, blank encoding */ x7; void /* unknown type, blank encoding */ x8; void /* unknown type, blank encoding */ x9; void /* unknown type, blank encoding */ x10; void /* unknown type, blank encoding */ x11; void /* unknown type, blank encoding */ x12; void /* unknown type, blank encoding */ x13; void /* unknown type, blank encoding */ x14; void /* unknown type, blank encoding */ x15; void /* unknown type, blank encoding */ x16; void /* unknown type, blank encoding */ x17; void /* unknown type, blank encoding */ x18; void /* unknown type, blank encoding */ x19; void /* unknown type, blank encoding */ x20; void /* unknown type, blank encoding */ x21; void /* unknown type, blank encoding */ x22; void /* unknown type, blank encoding */ x23; void /* unknown type, blank encoding */ x24; void /* unknown type, blank encoding */ x25; void /* unknown type, blank encoding */ x26; void /* unknown type, blank encoding */ x27; void /* unknown type, blank encoding */ x28; void /* unknown type, blank encoding */ x29; void /* unknown type, blank encoding */ x30; void /* unknown type, blank encoding */ x31; void /* unknown type, blank encoding */ x32; void /* unknown type, blank encoding */ x33; void /* unknown type, blank encoding */ x34; })a0;
- (id)starVerticesBuffer;
- (id)textureGroupWithSuffix:(id)a0;

@end
