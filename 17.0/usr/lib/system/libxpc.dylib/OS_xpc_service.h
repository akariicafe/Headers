@class NSString;

@interface OS_xpc_service : OS_xpc_object <OS_xpc_service>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_xref_dispose;
- (oneway void)release;

@end
