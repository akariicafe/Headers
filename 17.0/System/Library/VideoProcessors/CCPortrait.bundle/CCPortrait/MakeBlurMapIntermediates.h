@protocol MTLTexture;

@interface MakeBlurMapIntermediates : NSObject

@property (retain, nonatomic) id<MTLTexture> inputFaceMaskAdjBlurTex;
@property (retain, nonatomic) id<MTLTexture> inputWeightsXTex;
@property (retain, nonatomic) id<MTLTexture> inputWeightsYTex;
@property (retain, nonatomic) id<MTLTexture> inputPreprocTex;
@property (retain, nonatomic) id<MTLTexture> inputSampledDTex;
@property (retain, nonatomic) id<MTLTexture> inputDisparityRefineBlurTex;
@property (retain, nonatomic) id<MTLTexture> inputAlphaMaskDeltaTex;
@property (retain, nonatomic) id<MTLTexture> inputHairMaskDeltaTex;
@property (retain, nonatomic) id<MTLTexture> inputBlurRefineIntermediateTex;

- (void).cxx_destruct;
- (BOOL)validateForMetal;

@end
