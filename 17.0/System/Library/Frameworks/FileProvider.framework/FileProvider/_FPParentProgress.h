@class FPProgressProxy;

@interface _FPParentProgress : NSProgress

@property (readonly) FPProgressProxy *progressProxy;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isCancellable;
- (BOOL)isPausable;
- (void)setProgressProxy:(id)a0;

@end
