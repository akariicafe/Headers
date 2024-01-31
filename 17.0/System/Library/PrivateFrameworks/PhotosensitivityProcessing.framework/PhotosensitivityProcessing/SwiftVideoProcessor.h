@interface SwiftVideoProcessor : NSObject {
    void /* unknown type, empty encoding */ needsInitialization;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ library;
    void /* unknown type, empty encoding */ previousSurfaceTime;
    void /* unknown type, empty encoding */ cptPSO_RiskComputePass0;
    void /* unknown type, empty encoding */ cptPSO_RiskComputePass1;
    void /* unknown type, empty encoding */ cptPSO_RiskComputePass2;
    void /* unknown type, empty encoding */ cptPSO_RiskComputePass3;
    void /* unknown type, empty encoding */ bufferFrameLumaSum;
    void /* unknown type, empty encoding */ bufferData;
    void /* unknown type, empty encoding */ bufferCurState;
    void /* unknown type, empty encoding */ bufferGammaKernel;
    void /* unknown type, empty encoding */ bufferEnergy;
    void /* unknown type, empty encoding */ bufferEnergy2;
    void /* unknown type, empty encoding */ bufferContrastKernel;
    void /* unknown type, empty encoding */ bufferContrast;
    void /* unknown type, empty encoding */ bufferResponses;
    void /* unknown type, empty encoding */ bufferResponsesNorm;
    void /* unknown type, empty encoding */ bufferResults;
    void /* unknown type, empty encoding */ bufferDataDebug;
    void /* unknown type, empty encoding */ protectionStatus;
    void /* unknown type, empty encoding */ sourceTexture;
    void /* unknown type, empty encoding */ sourceCbCrTexture;
    void /* unknown type, empty encoding */ processedTexture;
    void /* unknown type, empty encoding */ bufferConstants;
    void /* unknown type, empty encoding */ fps;
    void /* unknown type, empty encoding */ nits;
    void /* unknown type, empty encoding */ area;
    void /* unknown type, empty encoding */ avl;
    void /* unknown type, empty encoding */ gain;
    void /* unknown type, empty encoding */ energyPoolGammaShape;
    void /* unknown type, empty encoding */ energyPoolExponent;
    void /* unknown type, empty encoding */ energyPoolGammaScale;
    void /* unknown type, empty encoding */ probabilityPoolGammaShape;
    void /* unknown type, empty encoding */ probabilityPoolExponent;
    void /* unknown type, empty encoding */ cA;
    void /* unknown type, empty encoding */ tauAdapt;
    void /* unknown type, empty encoding */ tauMitigation;
    void /* unknown type, empty encoding */ idxFrameRate;
    void /* unknown type, empty encoding */ idxEquivalentSize;
    void /* unknown type, empty encoding */ idxEquivalentKernelIndex;
    void /* unknown type, empty encoding */ frameDeltas;
    void /* unknown type, empty encoding */ framePoolIndex;
    void /* unknown type, empty encoding */ validationCallback;
}

@property (nonatomic, copy) id /* block */ validationCallback;
@property (nonatomic) void /* unknown type, empty encoding */ inTestingMode;
@property (nonatomic) void /* unknown type, empty encoding */ debugMode;
@property (nonatomic) void /* unknown type, empty encoding */ copySourceOnlyDebugging;

- (id)init;
- (void).cxx_destruct;
- (void)processSurfaceWithSourceSurface:(id)a0 timestamp:(double)a1 destinationSurface:(id)a2 options:(id)a3;

@end
