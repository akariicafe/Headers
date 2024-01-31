@class NSString, IPLocalStateUpdateStreamSink, IPLocalStateUpdateStreamSource, NSObject;
@protocol OS_dispatch_queue;

@interface IPLocalStateUpdateStream : NSObject <IPStateUpdateStream> {
    NSObject<OS_dispatch_queue> *_asyncDeliveryQueue;
    IPLocalStateUpdateStreamSource *_source;
    IPLocalStateUpdateStreamSink *_sink;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sink;
- (void).cxx_destruct;
- (id)source;
- (id)initWithSourceDeliveryQueue:(id)a0;
- (void)sink:(id)a0 sendMessage:(id)a1;

@end
