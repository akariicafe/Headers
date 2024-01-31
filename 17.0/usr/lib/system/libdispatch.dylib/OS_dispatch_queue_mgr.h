@class NSString;

@interface OS_dispatch_queue_mgr : OS_dispatch_queue_serial <OS_dispatch_queue_mgr>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
