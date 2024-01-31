@class NSString, ARCV3DPlaneDetectionPlaneList, NSDictionary;

@interface ARPlaneData : NSObject <ARResultData, ARQATraceable> {
    NSDictionary *_planeIdentifiers;
    BOOL _sceneUnderstandingEnabled;
    BOOL _applyPivotRotation;
    struct { void /* unknown type, empty encoding */ columns[4]; } _renderingFromVision;
}

@property (readonly, nonatomic) ARCV3DPlaneDetectionPlaneList *detectionResult;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned long long detectionTypeMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *tracingEntry;

+ (float)_pivotForPlane:(struct CV3DPlaneDetectionPlane { } *)a0;
+ (float)_surfacePivotForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })_surfaceToWorldTransformForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0 pivot:(float)a1;
+ (id)anchorForDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane *x0; unsigned long long x1; } *)a0;
+ (void)setSemanticsFromCV3D:(int)a0 labelProbabilities:(id)a1 sceneUnderstandingEnabled:(BOOL)a2 onPlane:(id)a3;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;
- (BOOL)applyPivotRotation;
- (id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList { } *)a0 detectionTypeMask:(unsigned long long)a1 sceneUnderstandingEnabled:(BOOL)a2;
- (id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList { } *)a0 detectionTypeMask:(unsigned long long)a1 sceneUnderstandingEnabled:(BOOL)a2 renderingFromVision:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 atTimestamp:(double)a4;

@end
