@class NSArray, NSString;
@protocol MTLDevice;

@interface ARSpatialMappingResultData : NSObject <ARResultData>

@property (retain, nonatomic) NSArray *meshChunks;
@property (nonatomic) struct CV3DReconMeshList { } *meshList;
@property (nonatomic) unsigned long long sceneReconstruction;
@property (nonatomic) double timestamp;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) id<MTLDevice> mtlDevice;
@property (readonly, nonatomic) BOOL meshConfidenceEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyResultData;

- (void)dealloc;
- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;
- (id)anchorsFromMeshChunksForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;
- (id)anchorsFromMeshListForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;
- (id)initWithMeshChunks:(id)a0;
- (id)initWithMeshList:(struct CV3DReconMeshList { } *)a0 sceneReconstruction:(unsigned long long)a1 timestamp:(double)a2;
- (void)updateSemanticsFromSamplingData:(struct __CFData { } *)a0;

@end
