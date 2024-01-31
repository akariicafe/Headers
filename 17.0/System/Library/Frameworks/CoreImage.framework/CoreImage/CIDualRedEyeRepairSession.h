@class CIContext, NSArray, CIRenderDestination, NSDictionary, NSDate, CIImage, CIDualRedEyeRepairTuning;
@protocol MTLCommandQueue, MTLCommandBuffer, MTLTexture;

@interface CIDualRedEyeRepairSession : NSObject {
    struct __CVBuffer { } *_primary;
    struct __CVBuffer { } *_secondary;
    struct __CVBuffer { } *_output;
}

@property (retain, nonatomic) NSArray *observations;
@property (retain, nonatomic) CIRenderDestination *destination;
@property (retain, nonatomic) CIImage *primaryImage;
@property (retain, nonatomic) CIImage *secondaryImage;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDictionary *imageProperties;
@property (retain, nonatomic) NSArray *faces;
@property (retain, nonatomic) CIDualRedEyeRepairTuning *tuning;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDictionary *tuningParametersByPortType;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) CIContext *context;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLTexture> primaryTexture;
@property (retain, nonatomic) id<MTLTexture> secondaryTexture;
@property (retain, nonatomic) id<MTLTexture> outputTexture;

+ (id)_contextRGBAh;

- (BOOL)prewarm;
- (id)init;
- (void)dealloc;
- (void)cleanupState;
- (BOOL)_repairPrimaryWithSecondary:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;
- (BOOL)renderUsingProvidedCommandQueue;
- (void)customizeRepairFilter:(id)a0 forFace:(id)a1;
- (void)dumpInputs;
- (void)dumpObservation:(id)a0 index:(int)a1;
- (void)dumpSecondary;
- (BOOL)prepareRepair;
- (BOOL)prepareRepairWithTuningParametersByPortType:(id)a0;
- (id)redEyeFaceFromObservation:(id)a0 exifOrientation:(int)a1;
- (BOOL)renderUsingPixelBuffers;
- (BOOL)repairFace:(id)a0 filter:(id)a1;
- (BOOL)repairPrimaryWithSecondary:(struct __CVBuffer { } *)a0;
- (BOOL)setPrimary:(struct __CVBuffer { } *)a0 observations:(id)a1 metadata:(id)a2;
- (BOOL)validateRenderState;
- (int)validateRepair;
- (int)validateSetPrimary;

@end
