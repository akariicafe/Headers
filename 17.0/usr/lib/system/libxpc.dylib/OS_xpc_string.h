@class NSString;

@interface OS_xpc_string : OS_xpc_object <OS_xpc_string>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
