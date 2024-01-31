@class NSString, BSSecTask;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding> {
    NSString *_bundleID;
    BSSecTask *_secTask;
    BOOL _resolvedBundleID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) int asid;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) unsigned int egid;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) struct { unsigned int val[8]; } realToken;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)tokenFromNSXPCConnection:(id)a0;
+ (id)tokenFromXPCMessage:(id)a0;
+ (id)invalidToken;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)tokenFromAuditTokenRef:(struct { unsigned int x0[8]; } *)a0;
+ (id)tokenForCurrentProcess;
+ (id)tokenFromXPCConnection:(id)a0;
+ (id)tokenFromMachMessage:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; } *)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)hasSameProcessAsAuditToken:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
