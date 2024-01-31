@class NSXPCListenerEndpoint, NSString, CPSSystemAuthenticationRequest, CPSStoreAuthenticationRequest, CPSRestrictedAccessRequest;

@interface CPSWatchAlertPresentationContext : NSObject <BSXPCCoding>

@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) CPSSystemAuthenticationRequest *systemAuthenticationRequest;
@property (retain, nonatomic) CPSRestrictedAccessRequest *restrictedAccessRequest;
@property (retain, nonatomic) CPSStoreAuthenticationRequest *storeAuthenticationRequest;
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
