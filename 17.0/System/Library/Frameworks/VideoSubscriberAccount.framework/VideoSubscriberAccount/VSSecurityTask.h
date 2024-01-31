@class NSString;

@interface VSSecurityTask : NSObject {
    unsigned long long _kind;
    struct { unsigned int val[8]; } _auditToken;
    void /* function */ *_createWithAuditToken;
    void /* function */ *_createFromSelf;
    void /* function */ *_copyValueForEntitlement;
    void /* function */ *_copySigningIdentifier;
    struct __SecTask { } *_taskRef;
}

@property (class, retain, nonatomic) VSSecurityTask *securityTaskForCurrentConnection;

@property (readonly, copy, nonatomic) NSString *signingIdentifier;

+ (id)securityTaskWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)currentSecurityTask;

- (id)init;
- (void)dealloc;
- (void /* function */ *)_copySigningIdentifier;
- (BOOL)shouldAllowAccessForBooleanEntitlement:(id)a0;
- (BOOL)shouldAllowAccessToSubscriberIdentifierHashModifier:(id)a0;
- (BOOL)getValue:(id *)a0 forEntitlement:(id)a1 error:(id *)a2;
- (id)initWithCreateFromSelfProc:(void /* function */ *)a0 copyValueForEntitlementProc:(void /* function */ *)a1;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 createWithAuditTokenProc:(void /* function */ *)a1 copyValueForEntitlementProc:(void /* function */ *)a2;
- (struct __SecTask { } *)_taskRef;

@end
