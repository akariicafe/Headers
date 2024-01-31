@class NSString, NSArray, NWAddressEndpoint, NEIKEv2AddressList, NSObject;
@protocol OS_dispatch_source;

@interface NEIKEv2Server : NSObject <NSObject> {
    BOOL _hasCompanionProxyInPath;
    unsigned int _redirects;
    NSString *_serverAddress;
    NEIKEv2AddressList *_resolvedAddressList;
    NSString *_redirectedFromAddress;
    NSArray *_additionalIPv4ServerAddresses;
    NSArray *_additionalIPv6ServerAddresses;
    NWAddressEndpoint *_pathProxyEndpoint;
    NSString *_pathProxyConnectedRemoteEndpointString;
    NSObject<OS_dispatch_source> *_redirectTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
