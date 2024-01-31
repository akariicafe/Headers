@interface ECSMTPAccount : ECAccount

+ (id)standardSSLPorts;
+ (id)standardPorts;

- (id)_hostnameFromParentAccount:(id)a0;
- (id)usesSSLObject;
- (id)portNumberObject;
- (long long)defaultPortNumber;

@end
