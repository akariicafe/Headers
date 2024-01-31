@interface GKLoadResourceOperation : NSOperation

@property (nonatomic, setter=_setLoadReason:) long long _loadReason;
@property (copy) id /* block */ outputBlock;

- (void)main;
- (void).cxx_destruct;
- (void)didCompleteWithResource:(id)a0 error:(id)a1;

@end
