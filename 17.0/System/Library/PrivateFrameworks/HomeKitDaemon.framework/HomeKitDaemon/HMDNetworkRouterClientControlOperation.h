@class NSString, HMDNetworkRouterControlOperation, HMDNetworkRouterClientConfiguration;

@interface HMDNetworkRouterClientControlOperation : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HMDNetworkRouterControlOperation *operation;
@property (retain, nonatomic) HMDNetworkRouterClientConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithOperation:(id)a0 configuration:(id)a1;

@end
