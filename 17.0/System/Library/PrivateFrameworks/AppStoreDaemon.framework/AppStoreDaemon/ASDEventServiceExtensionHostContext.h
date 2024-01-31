@class NSString;

@interface ASDEventServiceExtensionHostContext : ASDEventServiceExtensionContext <ASDEventServiceExtensionHostXPCInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
