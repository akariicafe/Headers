@class NSArray, NSString;

@interface VNDetectBarcodesRequest : VNImageBasedRequest

@property (class, readonly, copy, nonatomic) NSArray *availableLocateModes;
@property (class, readonly, copy, nonatomic) NSArray *supportedSymbologies;

@property (copy, nonatomic) NSString *locateMode;
@property (nonatomic) BOOL stopAtFirstPyramidWith2DCode;
@property (nonatomic) BOOL useSegmentationPregating;
@property (nonatomic) BOOL useMLDetector;
@property (copy, nonatomic) NSArray *symbologies;
@property (nonatomic) BOOL coalesceCompositeSymbologies;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)privateRevisionsSet;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (struct __CFString { } *)MRCSymbologyForBarcodeSymbology:(id)a0;
+ (id)supportedSymbologiesRev3Private;
+ (id)ACBSBarcodeTypeForBarcodeSymbology:(id)a0;
+ (id)supportedSymbologiesRev2Private;
+ (id)supportedSymbologiesRev4Private;
+ (id)_allBarcodeSymbologiesRev1;
+ (id)_allBarcodeSymbologiesRev2;
+ (id)_allBarcodeSymbologiesRev2Private;
+ (id)_allBarcodeSymbologiesRev3;
+ (id)_allBarcodeSymbologiesRev3Private;
+ (id)_allBarcodeSymbologiesRev4;
+ (id)_allBarcodeSymbologiesRev4Private;
+ (id)_ourACBSBarcodeTypeToBarcodeSymbologyMap;
+ (id)_ourBarcodeSymbologyToACBSBarcodeTypeMap;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMap;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapPrivate;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapRev3;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapRev3Private;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapRev4;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapRev4Private;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMap;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapPrivate;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapRev3;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapRev3Private;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapRev4;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapRev4Private;
+ (id)availableLocateModesRev1;
+ (id)availableLocateModesRev2;
+ (id)barcodeSymbologyForACBSBarcodeType:(id)a0;
+ (id)barcodeSymbologyForMRCSymbology:(struct __CFString { } *)a0;
+ (id)supportedSymbologiesRev1;
+ (id)supportedSymbologiesRev2;
+ (id)supportedSymbologiesRev3;
+ (id)supportedSymbologiesRev4;

- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)a0;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;
- (id)supportedSymbologiesAndReturnError:(id *)a0;
- (int)_ACBarcodeRecognizerLocateMode;
- (long long)_MRCLocateMode;
- (id)_barcodesDetectedInImageBuffer:(id)a0 usingACBSConfig:(struct ACBSConfig { } *)a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;
- (struct ACBSConfig { } *)_createACBSConfigAndReturnError:(id *)a0;
- (id)_createMRCDecoderOptionsForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_getCornerPointsFromCodeLocationPoints:(id)a0 bottomLeft:(struct CGPoint { double x0; double x1; } *)a1 topLeft:(struct CGPoint { double x0; double x1; } *)a2 topRight:(struct CGPoint { double x0; double x1; } *)a3 bottomRight:(struct CGPoint { double x0; double x1; } *)a4;
- (id)_machineReadableCodesDetectedInImageBuffer:(id)a0 originatingRequestSpecifier:(id)a1 inContext:(id)a2 mrcDetector:(id)a3 error:(id *)a4;
- (id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)a0;
- (id)_newVNBarcodeSymbologyAztecDescriptorForMRCDescriptor:(struct __MRCDescriptor { } *)a0 error:(id *)a1;
- (id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)a0;
- (id)_newVNBarcodeSymbologyPDF417DescriptorForMRCDescriptor:(struct __MRCDescriptor { } *)a0 error:(id *)a1;
- (id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)a0;
- (id)_newVNBarcodeSymbologyQRDescriptorForMRCDescriptor:(struct __MRCDescriptor { } *)a0 error:(id *)a1;
- (id)availableLocateModesAndReturnError:(id *)a0;
- (id)newBarcodeObservationForACBSBarcodeInfo:(id)a0 imageWidth:(unsigned long long)a1 imageHeight:(unsigned long long)a2 roiCroppingPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 originatingRequestSpecifier:(id)a4 error:(id *)a5;
- (id)newBarcodeObservationForMRCDescriptor:(struct __MRCDescriptor { } *)a0 roiCroppingPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;

@end
