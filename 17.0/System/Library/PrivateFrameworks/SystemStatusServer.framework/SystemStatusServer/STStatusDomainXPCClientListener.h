@class NSString, NSXPCListener;
@protocol STStatusDomainServerHandle;

@interface STStatusDomainXPCClientListener : NSObject <NSXPCListenerDelegate> {
    id<STStatusDomainServerHandle> _serverHandle;
    NSXPCListener *_xpcListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
