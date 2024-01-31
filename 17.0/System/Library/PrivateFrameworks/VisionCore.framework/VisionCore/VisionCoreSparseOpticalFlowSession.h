@class NSMutableDictionary, VisionCoreMetalContext, VisionCoreSparseOpticalFlowResult, NSMutableArray, LKTSparseGPU;
@protocol MTLTexture;

@interface VisionCoreSparseOpticalFlowSession : NSObject {
    VisionCoreMetalContext *_mtlContext;
}

@property (retain, nonatomic) NSMutableArray *trackedQuads;
@property (retain, nonatomic) NSMutableDictionary *tQuadsTfx;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } sceneHomography;
@property (nonatomic) struct vector<__fp16, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *__begin_; void /* unknown type, blank encoding */ *__end_; struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *__value_; } __end_cap_; } allSrcPoints;
@property (nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } quadPointCounts;
@property (nonatomic) struct vector<__fp16, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *__begin_; void /* unknown type, blank encoding */ *__end_; struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *__value_; } __end_cap_; } allDstPoints;
@property (retain, nonatomic) NSMutableArray *groupingMemoryQuadIDs;
@property (nonatomic) struct vector<__fp16, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *__begin_; void /* unknown type, blank encoding */ *__end_; struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *__value_; } __end_cap_; } groupingMemorySrcPoints;
@property (nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } groupingMemoryQuadPointsCounts;
@property (nonatomic) struct vector<__fp16, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *__begin_; void /* unknown type, blank encoding */ *__end_; struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *__value_; } __end_cap_; } groupingMemoryDstPoints;
@property (readonly) VisionCoreMetalContext *mtlContext;
@property (retain) LKTSparseGPU *lktSparseGPUContext;
@property unsigned long long frameCountSinceLastGrouping;
@property (retain, nonatomic) VisionCoreSparseOpticalFlowResult *debuggingResult;
@property (retain, nonatomic) VisionCoreSparseOpticalFlowResult *debuggingMemoryResult;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) struct __CVBuffer { } *prevFrame;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)findClosestQuadIndex:(int)a0 candidateIndices:(struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; })a1;
- (void)moveMemoryKeypointsToSessionKpts;
- (void)resetGroupingMemory;
- (void)saveCurrentMatchingToMemoryMatchCounts:(struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; })a0;
- (unsigned long long)updateKeypointsWithOpticalFlowResultsSourceBuffer:(const void /* unknown type, blank encoding */ *)a0 destBuffer:(const void /* unknown type, blank encoding */ *)a1 matchBuffer:(const BOOL *)a2 matchCount:(void *)a3;
- (void)updateMemoryKeypointsWithOpticalFlowResultsSourceBuffer:(const void /* unknown type, blank encoding */ *)a0 destBuffer:(const void /* unknown type, blank encoding */ *)a1 matchBuffer:(const BOOL *)a2 start:(unsigned long long)a3;
- (void)updateReferenceTexture:(id)a0 frame:(struct __CVBuffer { } *)a1;

@end
