@class NSString;

@interface OS_xpc_session : OS_xpc_object <OS_xpc_session>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_xref_dispose;
- (oneway void)release;

@end
