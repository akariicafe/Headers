@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (id)angelJobLabel;
- (id)consistentLaunchdJobLabel;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)daemonJobLabel;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)_matchesIdentity:(id)a0;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (void)setOsServiceType:(unsigned char)a0;
- (BOOL)hasConsistentLaunchdJob;
- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;
- (id)_initAngelWithJobLabel:(id)a0;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;
- (unsigned char)osServiceType;
- (BOOL)isDaemon;
- (id)copyWithAuid:(unsigned int)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (BOOL)isAngel;

@end
