@protocol HMDIDSService;

@interface _HMDIDSProxyLinkPreferenceAssertion : HMFObject

@property (readonly, nonatomic) id<HMDIDSService> proxyService;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIDSProxyService:(id)a0;

@end
