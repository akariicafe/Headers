@class NSObject;
@protocol OS_nw_proxy_config;

@interface NERelayNetworkAgent : NENetworkAgent

@property (retain) NSObject<OS_nw_proxy_config> *proxyConfig;

+ (id)agentType;
+ (id)agentFromData:(id)a0;
+ (id)agentDomain;

- (id)copyAgentData;
- (void).cxx_destruct;
- (id)agentDescription;

@end
