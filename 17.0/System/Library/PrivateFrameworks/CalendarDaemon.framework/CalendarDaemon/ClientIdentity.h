@class NSString;

@interface ClientIdentity : NSObject <NSSecureCoding> {
    NSString *_bundleIdentifierShared;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *untrustedBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *codeSigningIdentity;
@property (readonly, nonatomic) int pid;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
