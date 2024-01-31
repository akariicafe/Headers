@class NEDNSSettings;

@interface NEDNSSettingsNetworkAgent : NENetworkAgent

@property (retain) NEDNSSettings *settings;

+ (id)agentType;
+ (id)agentFromData:(id)a0;
+ (id)agentDomain;

- (id)copyAgentData;
- (void).cxx_destruct;
- (id)agentDescription;

@end
