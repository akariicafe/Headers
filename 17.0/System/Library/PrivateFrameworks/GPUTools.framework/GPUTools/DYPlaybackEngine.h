@class DYCaptureFile, DYFunctionPlayer, NSObject;
@protocol OS_dispatch_queue, DYCaptureStore;

@interface DYPlaybackEngine : NSObject {
    DYFunctionPlayer *_player;
    NSObject<OS_dispatch_queue> *_playbackQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _playerLock;
    void *_cache;
    struct __wrap_iter<std::unique_ptr<GPUTools::Playback::FunctionStreamEntry> *> { void *__i_; } _fseIterator;
    unsigned int _functionBatchOffset;
    BOOL _active;
}

@property (readonly, retain, nonatomic) DYFunctionPlayer *player;
@property (nonatomic) unsigned int targetFunctionIndex;
@property (nonatomic) unsigned int targetSubCommandIndex;
@property (readonly, nonatomic) unsigned int currentFunctionIndex;
@property (nonatomic) BOOL waitUntilCompleteAfterEveryFrame;
@property (nonatomic) BOOL verbose;
@property (readonly, retain, nonatomic) id<DYCaptureStore> captureStore;
@property (nonatomic) unsigned int loopCount;
@property (readonly, nonatomic) DYCaptureFile *currentFile;

- (void)waitUntilCompleted;
- (id)init;
- (id)playback;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCaptureStore:(id)a0;
- (void)_addPointerDataSizeMapToPlayer;
- (void)_allocateAndFillDataCache;
- (BOOL)_executeDFS:(void *)a0;
- (void)_executeDeltaFSEs;
- (BOOL)_executeFSE:(void *)a0;
- (BOOL)_executeFunctionStream:(void *)a0;
- (void)_executeFunctionStreamEntriesPerformingLoopIterationActions:(BOOL)a0 iteration:(unsigned int)a1;
- (BOOL)_executeFunctions:(struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } *)a0 count:(unsigned long long)a1;
- (void)_performPlaybackRequest:(unsigned int)a0;
- (id)newFunctionPlayer;
- (void)onPlaybackRequestCompleted;
- (void)onPlaybackRequestStart;
- (void)performPlaybackLoopIterationPostCaptureActions:(unsigned int)a0;
- (void)performPlaybackLoopIterationPreCaptureActions:(unsigned int)a0;
- (id)playbackToFunction:(unsigned int)a0;
- (void)playbackToFunction:(unsigned int)a0 subCommandIndex:(int)a1 withLoops:(unsigned int)a2;
- (void)playbackToFunction:(unsigned int)a0 withLoops:(unsigned int)a1;
- (void)setWireframeLineWidth:(float)a0;
- (BOOL)shouldPerformPlaybackLoopIteration:(unsigned int)a0;

@end
