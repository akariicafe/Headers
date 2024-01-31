@class NSArray, NSMutableArray, NSMutableDictionary;

@interface BLSHFlipbookHistory : NSObject {
    unsigned long long _frameLimit;
    unsigned long long _memoryLimit;
    NSMutableArray *_lock_frames;
    NSMutableDictionary *_lock_framesDict;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (readonly, nonatomic) NSArray *allFrames;

- (id)frameWithUUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrameLimit:(unsigned long long)a0 memoryLimit:(unsigned long long)a1;
- (void)addRenderedFrameToHistory:(id)a0;

@end
