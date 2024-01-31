@class NSString, NSObject;
@protocol OS_dispatch_queue, NRNSXPCListenerDelegate;

@interface NRMockNSXPCListener : NSObject <NRNSXPCListenerProtocol> {
    BOOL _suspended;
    BOOL _invalidated;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) id<NRNSXPCListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;

@end
