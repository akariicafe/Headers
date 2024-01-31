@class NSString;

@interface OS_dispatch_queue_runloop : OS_dispatch_queue_serial <OS_dispatch_queue_runloop>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_xref_dispose;
- (oneway void)release;

@end
