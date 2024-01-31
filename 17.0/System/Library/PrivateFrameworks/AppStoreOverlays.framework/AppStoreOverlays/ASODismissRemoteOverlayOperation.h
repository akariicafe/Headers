@protocol ASORemoteContextProvider;

@interface ASODismissRemoteOverlayOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (weak, nonatomic) id<ASORemoteContextProvider> contextProvider;

- (id)initWithContextProvider:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishExecuting;

@end
