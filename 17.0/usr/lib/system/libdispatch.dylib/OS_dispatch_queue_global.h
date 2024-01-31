@class NSString;

@interface OS_dispatch_queue_global : OS_dispatch_queue <OS_dispatch_queue_global>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
