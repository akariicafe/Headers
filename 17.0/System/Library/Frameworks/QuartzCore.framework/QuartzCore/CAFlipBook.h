@class NSMutableArray;

@interface CAFlipBook : NSObject {
    unsigned int _serverPort;
    unsigned long long _maximumSize;
    unsigned int _displayId;
    unsigned long long _lastFrameId;
    unsigned int _generation;
    NSMutableArray *_frames;
}

@property (nonatomic) unsigned int contextId;
@property (nonatomic) BOOL wantsTransform;
@property (nonatomic, getter=isInverted) BOOL inverted;
@property (nonatomic) unsigned long long maximumMemoryUsageForDiagnostics;
@property (nonatomic) BOOL powerSavingEnabled;

- (void)purge;
- (void)dealloc;
- (unsigned long long)memoryUsage;
- (id)description;
- (id)cancel;
- (void)collect;
- (void)_collectFlipBookFrames;
- (id)_frameById:(unsigned long long)a0;
- (id)_initWithDisplayId:(unsigned int)a0 options:(id)a1;
- (id)activeFrames;
- (id)copyCurrentFrame;
- (id)frameAtTime:(unsigned long long)a0;
- (id)renderForTime:(unsigned long long)a0 options:(id)a1 userInfo:(id)a2 error:(id *)a3;

@end
