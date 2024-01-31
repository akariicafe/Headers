@class NSString, TSUFileIOChannel, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {
    NSObject<OS_dispatch_queue> *_queue;
    TSUFileIOChannel *_channel;
    id /* block */ _handler;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_close;
- (void)close;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)writeData:(id)a0;
- (id)initWithChannel:(id)a0 handler:(id /* block */)a1;

@end
