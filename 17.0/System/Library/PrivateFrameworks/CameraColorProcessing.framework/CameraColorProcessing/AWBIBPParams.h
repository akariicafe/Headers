@class NSMutableDictionary, NSDictionary, NSString, NSNumber;
@protocol MTLTexture;

@interface AWBIBPParams : NSObject <AWBIBPParams>

@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDictionary *registers;
@property (retain, nonatomic) NSDictionary *moduleConfig;
@property (retain, nonatomic) NSDictionary *setFileDict;
@property (retain, nonatomic) NSDictionary *cameraInfo;
@property (retain, nonatomic) id<MTLTexture> imageTex;
@property (retain, nonatomic) id<MTLTexture> clippedTex;
@property (retain, nonatomic) id<MTLTexture> lscGainsTex;
@property (retain, nonatomic) id<MTLTexture> skinMask;
@property (retain, nonatomic) NSNumber *firstPixel;
@property (retain, nonatomic) NSNumber *cfaLayout;
@property (retain, nonatomic) NSNumber *digitalFlash;
@property (retain, nonatomic) NSDictionary *validBufferRect;
@property (retain, nonatomic) NSNumber *skipDemosaic;
@property (retain, nonatomic) NSNumber *lscMaxGain;
@property (nonatomic) struct { unsigned int rGain; unsigned int gGain; unsigned int bGain; } awbComboGains;
@property (nonatomic) struct { unsigned int rGain; unsigned int gGain; unsigned int bGain; } awbComboGainsNormalized;
@property (nonatomic) struct { unsigned int rGain; unsigned int gGain; unsigned int bGain; } awbGains;
@property (retain, nonatomic) NSMutableDictionary *outputMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void).cxx_destruct;

@end
