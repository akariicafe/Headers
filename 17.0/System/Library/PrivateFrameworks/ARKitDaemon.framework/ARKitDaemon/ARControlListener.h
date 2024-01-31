@class NSXPCListener, NSString, NSXPCListenerEndpoint, NSObject;
@protocol OS_dispatch_queue, ARControlListenerDelegate;

@interface ARControlListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSObject<OS_dispatch_queue> *_concurrentConnectionTargetQueue;
}

@property (weak, nonatomic) id<ARControlListenerDelegate> delegate;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
