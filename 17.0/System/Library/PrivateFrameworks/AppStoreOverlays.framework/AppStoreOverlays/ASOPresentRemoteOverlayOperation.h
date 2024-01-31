@class ASORemoteOverlay;

@interface ASOPresentRemoteOverlayOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (retain, nonatomic) ASORemoteOverlay *remoteOverlay;

- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishExecuting;
- (id)initWithRemoteOverlay:(id)a0;

@end
