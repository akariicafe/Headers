@interface LiveFSFPMountClient : LiveFSMountClient

+ (id)locallyBuiltDomainStorageSuffix;
+ (id)locallyBuildFPDomain:(id)a0 displayName:(id)a1 provider:(id)a2 how:(int)a3;
+ (id)locallyDestroyFPDomain:(id)a0 provider:(id)a1;
+ (id)newClientForProvider:(id)a0;

- (id)fixupConnectionFor:(id)a0;

@end
