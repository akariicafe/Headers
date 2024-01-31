@class NSMapTable, DYPlaybackEngine;
@protocol DYCaptureStore;

@interface DYFunctionPlayer : NSObject {
    void /* function */ *_executePlatform;
    SEL _executePlatformSEL;
    void /* function */ *_executeGraphics;
    SEL _executeGraphicsSEL;
    void /* function */ *_shouldExecuteGraphics;
    SEL _shouldExecuteGraphicsSEL;
    void /* function */ *_isFrameBoundary;
    SEL _isFrameBoundarySEL;
    struct MemoryManager { unsigned int _state; unsigned int _alignment; unsigned int _bufferSize; unsigned int _bufferCounter; void *_pBuffer; void *_pBufferBegin; void *_pBufferEnd; void *_pBufferPosition; struct MemBlock *_pMemBlockHead; unsigned long long _memBlockSizeTotalMax; unsigned int _memBlockCounter; } _memoryManager;
    struct SequenceCache { unsigned int _state; unsigned int _streamIdx; unsigned int _streamNum; unsigned int _dataIdx; unsigned int _dataNum; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _dataList; struct vector<std::vector<std::pair<unsigned int, unsigned int>>, std::allocator<std::vector<std::pair<unsigned int, unsigned int>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<std::pair<unsigned int, unsigned int>> *, std::allocator<std::vector<std::pair<unsigned int, unsigned int>>>> { void *__value_; } __end_cap_; } _compressedDataList; } _functionIndexSequence;
    void *_pointers[16];
    unsigned int _pointers_alloc_bitfield;
    BOOL _lastCommandWasFrameBoundary;
    struct unordered_map<void *, unsigned long, std::hash<void *>, std::equal_to<void *>, std::allocator<std::pair<void *const, unsigned long>>> { struct __hash_table<std::__hash_value_type<void *, unsigned long>, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>>, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>>, std::allocator<std::__hash_value_type<void *, unsigned long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>>> { float __value_; } __p3_; } __table_; } _dataSizeMap;
    NSMapTable *_variables;
    void *_argumentPointers[16];
    struct vector<std::pair<std::string, bool>, std::allocator<std::pair<std::string, bool>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<std::string, bool> *, std::allocator<std::pair<std::string, bool>>> { void *__value_; } __end_cap_; } _argumentURLs[16];
    void *_retval_buffer;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } _argumentStorePositions[16];
}

@property (nonatomic) unsigned int frameCounter;
@property (weak, nonatomic) DYPlaybackEngine *engine;
@property (readonly, nonatomic) BOOL mainExecutionMode;
@property (readonly, retain, nonatomic) id<DYCaptureStore> captureStore;
@property (nonatomic) BOOL skipOptionalFunctions;
@property (readonly, nonatomic) unsigned long long ctxID;
@property (readonly, nonatomic) struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } *function;
@property (readonly, nonatomic) unsigned int currentFileFunctionIndex;
@property (readonly, nonatomic) unsigned int currentExecutionModeFunctionIndex;

+ (struct CGSize { double x0; double x1; })shrinkSourceSize:(struct CGSize { double x0; double x1; })a0 toDestSize:(struct CGSize { double x0; double x1; })a1;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)setCurrentContext:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)executeGraphicsFunction;
- (void)executePlatformFunction;
- (id)initWithCaptureStore:(id)a0;
- (void)processArguments;
- (BOOL)shouldExecuteGraphicsFunction;
- (BOOL)isFrameBoundary;
- (void)addPointerDataSizeMap:(void *)a0;
- (void *)copyDataForFilename:(const char *)a0 dataSize:(unsigned long long *)a1;
- (void)executeFunctions:(struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } *)a0 count:(unsigned long long)a1;
- (void)executeFunctions:(struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } *)a0 count:(unsigned long long)a1 subCommandIndex:(unsigned int)a2;
- (void)performNewExecutionFileActions;
- (void)performNewFrameActions;
- (void)performPostDispatchFrameBoundaryActions;
- (void)performPreDispatchFrameBoundaryActions;
- (void)prepareForCaptureExecution;
- (void)prepareForNonCaptureExecution;
- (void)releaseArguments;
- (void)releaseDataForArgument:(int)a0;
- (void)releaseDataForPosition:(unsigned long long)a0;
- (void *)requestDataForFilename:(const char *)a0 dataSize:(unsigned long long *)a1 position:(unsigned long long *)a2;
- (void *)requestDataForPosition:(unsigned long long)a0 dataSize:(unsigned long long *)a1;

@end
