@protocol MTLTexture;

@interface ApplyBlurMapIntermediates : NSObject

@property (retain, nonatomic) id<MTLTexture> inputIntermediateTex;
@property (retain, nonatomic) id<MTLTexture> inputSmoothedBlurmap;
@property (retain, nonatomic) id<MTLTexture> inputHalfResTex1;
@property (retain, nonatomic) id<MTLTexture> inputHalfResTex2;
@property (retain, nonatomic) id<MTLTexture> inputHalfResTex1sRGB;
@property (retain, nonatomic) id<MTLTexture> inputHalfResTex2sRGB;
@property (retain, nonatomic) id<MTLTexture> inputHalfResRGTex;

- (void).cxx_destruct;
- (BOOL)validateForMetal;

@end
