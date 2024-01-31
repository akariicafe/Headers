@class VNEspressoResources;

@interface VNEspressoModelFileBasedDetector : VNDetector

@property (readonly, nonatomic) VNEspressoResources *espressoResources;
@property (readonly, nonatomic) unsigned long long networkRequiredInputImageWidth;
@property (readonly, nonatomic) unsigned long long networkRequiredInputImageHeight;
@property (readonly, nonatomic) unsigned long long inputImageAspectRatioHandling;

+ (id)configurationOptionKeysForDetectorKey;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)espressoModelPathForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;

- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)_bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkBlobName:(id)a1 bindMode:(int)a2 bindPtr:(int)a3 error:(id *)a4;
- (BOOL)_bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkBlobName:(id)a1 bindMode:(int)a2 bindPtr:(int)a3 forModel:(id)a4 error:(id *)a5;
- (BOOL)_bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkBlobName:(id)a1 bindMode:(int)a2 error:(id *)a3;
- (BOOL)_loadEspressoModelWithConfigurationOptions:(id)a0 error:(id *)a1;
- (BOOL)bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkInputBlobName:(id)a1 error:(id *)a2;
- (BOOL)bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkInputBlobName:(id)a1 forModel:(id)a2 error:(id *)a3;
- (BOOL)bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkOutputBlobName:(id)a1 error:(id *)a2;
- (BOOL)bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkOutputBlobName:(id)a1 forModel:(id)a2 error:(id *)a3;
- (BOOL)bindClientBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkInputBlobName:(id)a1 error:(id *)a2;
- (BOOL)bindClientBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkInputBlobName:(id)a1 forModel:(id)a2 error:(id *)a3;
- (BOOL)bindLockedPixelBuffer:(struct __CVBuffer { } *)a0 toNetworkInputBlobName:(id)a1 error:(id *)a2;
- (BOOL)bindLockedPixelBuffer:(struct __CVBuffer { } *)a0 toNetworkInputBlobName:(id)a1 forModel:(id)a2 error:(id *)a3;
- (BOOL)bindPixelBuffer:(struct __CVBuffer { } *)a0 toNetworkBlobName:(id)a1 error:(id *)a2;
- (BOOL)bindPixelBuffer:(struct __CVBuffer { } *)a0 toNetworkBlobName:(id)a1 forModel:(id)a2 error:(id *)a3;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)a0;
- (BOOL)executePlanAndReturnError:(id *)a0;
- (BOOL)executePlanForModel:(id)a0 error:(id *)a1;
- (BOOL)getWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 ofEspressoModelNetworkBlobNamed:(id)a2 error:(id *)a3;

@end
