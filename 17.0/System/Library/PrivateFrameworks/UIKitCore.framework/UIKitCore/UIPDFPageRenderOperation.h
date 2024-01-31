@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {
    BOOL executing;
    BOOL finished;
}

@property (retain) UIPDFPageRenderJob *job;

- (BOOL)isExecuting;
- (void)dealloc;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (void)completeOperation;
- (BOOL)isConcurrent;
- (id)initWithJob:(id)a0;

@end
