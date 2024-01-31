@protocol VSJSMessagePortDelegate;

@interface VSJSMessagePort : IKJSObject <VSJSMessagePort>

@property (weak, nonatomic) id<VSJSMessagePortDelegate> delegate;

- (void).cxx_destruct;
- (void)postMessage:(id)a0;

@end
