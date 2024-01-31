@class NSString;

@interface QLPXNumberFilter : QLPXObservable <QLPXMutableNumberFilter> {
    struct { BOOL output; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setOutput:) double output;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double lastTime;
@property (readonly, nonatomic) double input;
@property (nonatomic) double time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)didPerformChanges;
- (BOOL)_needsUpdate;
- (id)mutableChangeObject;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (double)updatedOutput;
- (id)initWithInput:(double)a0;
- (void)_setLastTime:(double)a0;
- (void)setInput:(double)a0;
- (void)_invalidateOutput;
- (void)_updateOutputIfNeeded;
- (double)initialOutputForInput:(double)a0;
- (void)invalidateOutput;

@end
