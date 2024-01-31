@class NSArray, MTLAccelerationStructureDescriptor;

@interface MTLBVHDescriptor : NSObject {
    unsigned long long _maxDepth;
    unsigned long long _clampedMaxDepth;
    unsigned long long _fragmentCount;
    unsigned long long _primitiveDataSize;
    MTLAccelerationStructureDescriptor *_mtlDescriptor;
    struct PipelineKey { struct { unsigned char pipelineIndex : 8; unsigned char polygonType : 2; unsigned char minFragmentsPerLeaf : 4; unsigned char maxFragmentsPerLeaf : 8; unsigned char indexStride : 4; unsigned char spatialSplits : 1; unsigned char useResourceBuffer : 1; unsigned char primitiveMotion : 1; unsigned char branchingFactor : 4; unsigned char motion : 1; unsigned char useBatching : 1; unsigned char useChildIndices : 1; unsigned char vertexFormat : 6; unsigned char logThreadgroupSize : 4; unsigned char maxFragmentsPerInnerNode : 8; unsigned char createLeafNodes : 1; unsigned char enforceMaxDepth : 1; unsigned char useTemporalSplits : 1; unsigned char disallowMixingTemporalSplitsAndLeafNodes : 1; unsigned char useFastWideBuild : 1; unsigned char deterministic : 1; unsigned char fragmentPhase : 1; unsigned char supportsSIMDReduction : 1; unsigned char supportsSIMDShuffleAndFill : 1; unsigned char useFastBestObjectSplit : 1; unsigned char maxSubKeyframeTemporalSplits : 4; unsigned char disallowTemporalSplits : 1; } ; unsigned int vertexStride; unsigned int boundingBoxStride; float minOverlap; float traversalCost; float fragmentCost; float temporalSplitBias; } _pipelineKey;
    BOOL _pipelineKeyValid;
}

@property (nonatomic) unsigned long long maxDepth;
@property (nonatomic) unsigned long long branchingFactor;
@property (nonatomic) unsigned long long minPrimitivesPerLeaf;
@property (nonatomic) unsigned long long maxPrimitivesPerLeaf;
@property (nonatomic) unsigned long long minPrimitivesPerInnerNode;
@property (nonatomic) unsigned long long maxPrimitivesPerInnerNode;
@property (nonatomic) float traversalCost;
@property (nonatomic) float primitiveCost;
@property (nonatomic) unsigned long long splitHeuristic;
@property (nonatomic) float splitCapacity;
@property (nonatomic) float minOverlap;
@property (nonatomic) float motionTraversalCost;
@property (nonatomic) BOOL motion;
@property (nonatomic) unsigned long long primitiveKeyframeCount;
@property (nonatomic) float primitiveMotionStartTime;
@property (nonatomic) float primitiveMotionEndTime;
@property (nonatomic) BOOL useTemporalSplits;
@property (nonatomic) float temporalSplitBias;
@property (nonatomic) BOOL disallowMixingTemporalSplitsAndLeafNodes;
@property (nonatomic) BOOL useFastBuild;
@property (nonatomic) BOOL deterministic;
@property (nonatomic) unsigned long long maxSubKeyframeTemporalSplits;
@property (nonatomic) unsigned long long fragmentCount;
@property (nonatomic) unsigned long long primitiveDataSize;
@property (weak, nonatomic) NSArray *geometryDescriptors;

- (id)init;
- (void).cxx_destruct;
- (BOOL)primitiveMotion;
- (unsigned long long)actualMaxDepth;
- (struct PipelineKey { struct { unsigned char x0 : 8; unsigned char x1 : 2; unsigned char x2 : 4; unsigned char x3 : 8; unsigned char x4 : 4; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 4; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 6; unsigned char x13 : 4; unsigned char x14 : 8; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 4; unsigned char x26 : 1; } x0; unsigned int x1; unsigned int x2; float x3; float x4; float x5; float x6; })cachedPipelineKey;
- (BOOL)requiresResourceBuffer;
- (void)updateMaxDepth;
- (void)updatePipelineKey;

@end
