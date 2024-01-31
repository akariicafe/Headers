@protocol CRCTLDDelegate;

@interface CRCTLD : NSObject

@property double angleThresholdForRotationCorrection;
@property (readonly, weak) id<CRCTLDDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)groupAndOrderRegions:(id)a0 config:(id)a1;
- (struct CTLDRegion { int x0; id x1; float x2; float x3; float x4; float x5; struct CGPoint { double x0; double x1; } x6; struct CGPoint { double x0; double x1; } x7; struct CGPoint { double x0; double x1; } x8; struct CGPoint { double x0; double x1; } x9; float x10; struct vector<CRTextRecognition::CRCTLD::CTLDRegion, std::allocator<CRTextRecognition::CRCTLD::CTLDRegion>> { struct CTLDRegion *x0; struct CTLDRegion *x1; struct __compressed_pair<CRTextRecognition::CRCTLD::CTLDRegion *, std::allocator<CRTextRecognition::CRCTLD::CTLDRegion>> { struct CTLDRegion *x0; } x2; } x11; })CTLDRegionFromCRRegion:(id)a0 index:(int)a1 imageSize:(struct CGSize { double x0; double x1; })a2 rotationAngle:(float)a3 mainDirection:(unsigned long long)a4;
- (unsigned long long)getFeaturesMainLayoutDirection:(id)a0;
- (void)enforceQuadrilateralOrder:(struct CGPoint { double x0; double x1; } *)a0;
- (float)getBaselineAngle:(id)a0;
- (float)getFeaturesGlobalAngle:(id)a0;
- (float)getQuadrantOrientation:(id)a0;
- (id)groupAndOrderRegions:(id)a0 config:(id)a1 delegate:(id)a2;
- (void)mirrorAxisX:(struct CGPoint { double x0; double x1; } *)a0;
- (id)singleCTLDGroupingPass:(struct CRConstrainedTextLineDetectionImpl { float x0; int x1; int x2; float x3; float x4; float x5; float x6; float x7; int x8; int x9; float x10; float x11; BOOL x12; } *)a0 textRegions:(id)a1;

@end
