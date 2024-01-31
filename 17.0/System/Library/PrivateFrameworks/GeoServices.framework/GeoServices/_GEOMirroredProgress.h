@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
}

- (void)_update;
- (void)dealloc;
- (void)_unregisterForKVO;
- (id)initWithMirroredProgress:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_replaceObservedProgressWith:(id)a0;
- (void)_registerForKVO;
- (id)_initWithMirroredProgressForSubclasses:(id)a0;

@end
