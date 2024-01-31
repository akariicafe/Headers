@class NSString, IPXPCEventStateUpdateStreamSource, IPXPCEventStateUpdateStreamSink, NSObject;
@protocol OS_dispatch_queue;

@interface IPXPCEventStateUpdateStream : NSObject <IPStateUpdateStream> {
    NSString *_streamName;
    IPXPCEventStateUpdateStreamSource *_source;
    IPXPCEventStateUpdateStreamSink *_sink;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
