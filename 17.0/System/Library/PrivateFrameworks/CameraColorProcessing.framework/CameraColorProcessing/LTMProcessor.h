@class LTMGeometryData, CMIExternalMemoryResource, NSDictionary, NSString, FigMetalContext, LTMComputeProxy, LTMStats;
@protocol LTMIBPParams, MTLCommandQueue, MTLComputePipelineState;

@interface LTMProcessor : NSObject <LTMImageBufferProcessor> {
    FigMetalContext *_metalContext;
    unsigned long long _allocatorForceSize;
    BOOL _allocatorWireMemory;
    BOOL _allocatorSetupComplete;
    LTMComputeProxy *_computeLTM;
    LTMStats *_statLTM;
    struct sCLRProcHITHStat { unsigned int thumbnailWindow; unsigned short thumbnailEnable[6]; unsigned short thumbnailDownsampleX; unsigned short thumbnailDownsampleY; unsigned int thumbnailTotal; unsigned int localHistWindow; unsigned short localHistEnable; unsigned short localHistBinSize; unsigned short localHistBlockSizeX; unsigned short localHistBlockSizeY; unsigned short localHistStrideX; unsigned short localHistStrideY; unsigned short localHistNumHorBlocks; unsigned short localHistNumVerBlocks; unsigned char localHistCountBitShift; unsigned short globalHistEnable; unsigned int globalHistWindow; void *thumbnailStat; unsigned int thumbnailOffset; unsigned int thumbnailStatSize; void *localHistStat; unsigned int localHistOffset; unsigned int localHistStatSize; void *globalHistStat; unsigned int globalHistOffset; unsigned int globalHistStatSize; unsigned int gridOriginX; unsigned int gridOriginY; unsigned int localHistogramOriginalTilePixelCount; unsigned int localHistLowThreshold; unsigned int localHistHighThreshold; } _procHITHStat;
    unsigned short thumbnailStat[4420];
    unsigned short localHistStat[3264];
    unsigned int globalHistStat[1024];
    id<MTLComputePipelineState> _ltmDownsampleYCbCrToRGB;
    id<MTLComputePipelineState> _ltmDownsampleRGBAFloatToRGB;
    id<MTLComputePipelineState> _ltmCompressHighlight;
    LTMGeometryData *_geometryData;
}

@property (readonly, nonatomic) id<LTMIBPParams> ltmParams;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)resetState;
- (int)prewarm;
- (int)finishProcessing;
- (int)process;
- (void).cxx_destruct;
- (int)prepareToProcess:(unsigned int)a0;
- (id)initWithCommandQueue:(id)a0;
- (int)purgeResources;
- (void)_readDefaults;
- (int)setup;
- (void)_addAverageLTMToMetadata:(id)a0 curvesType:(int)a1;
- (void)_addGlobalLTMLookUpTableAlignedToFinalCropRect:(id)a0;
- (void)_addHighlightCompression:(id)a0;
- (void)_addLTMCurveToMetadata:(id)a0;
- (void)_addLTMCurvesToMetadata:(id)a0 curvesType:(int)a1;
- (void)_addLTMEnabledToMetadata:(id)a0;
- (void)_addLocalClippingDataToMetadata:(id)a0;
- (void)_addLocalHistToMetadata:(id)a0;
- (void)_addSoftDGainToMetadata:(id)a0;
- (void)_addSpatialCCMDataToMetadata:(id)a0;
- (id)_compressHighlight:(id)a0;
- (id)_computeLTMForRGBImage;
- (void)_readDefaultsLTMparam;
- (id)_updateOutputMetadata:(id)a0;
- (id)createIntermediateRGBAMetalTexture:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)createLTMInTextureFromLuma:(id)a0 chroma:(id)a1;
- (id)createLTMInTextureFromRGBAFloatTex:(id)a0;
- (int)createShaders:(id)a0;
- (struct sCLRProcHITHStat { unsigned int x0; unsigned short x1[6]; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned char x14; unsigned short x15; unsigned int x16; void *x17; unsigned int x18; unsigned int x19; void *x20; unsigned int x21; unsigned int x22; void *x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; } *)getHITHStat;

@end
