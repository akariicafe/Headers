@interface ASKLoadResourceOperation : NSOperation

@property (nonatomic, setter=_setLoadReason:) long long _loadReason;
@property (copy) id /* block */ outputBlock;

+ (id)supportedScheme;

- (void)main;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (void).cxx_destruct;
- (void)didCompleteWithResource:(id)a0 error:(id)a1;

@end
