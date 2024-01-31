@class NSString, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _handler;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)writeData:(id)a0;
- (id)initWithQueue:(id)a0 handler:(id /* block */)a1;

@end
