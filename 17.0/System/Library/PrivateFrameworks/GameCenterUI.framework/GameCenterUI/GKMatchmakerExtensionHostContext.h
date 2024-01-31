@class NSString;

@interface GKMatchmakerExtensionHostContext : GKExtensionHostContext <GKMatchmakerHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)shareMatchWithRequest:(id)a0 handler:(id /* block */)a1;

@end
