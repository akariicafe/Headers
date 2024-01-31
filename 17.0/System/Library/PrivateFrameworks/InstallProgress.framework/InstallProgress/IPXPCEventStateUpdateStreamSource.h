@class NSString, NSObject;
@protocol OS_dispatch_queue, IPStateUpdateStreamSourceDelegate;

@interface IPXPCEventStateUpdateStreamSource : NSObject <IPStateUpdateStreamSource> {
    NSString *_streamName;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _resumed;
}

@property (weak) id<IPStateUpdateStreamSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
