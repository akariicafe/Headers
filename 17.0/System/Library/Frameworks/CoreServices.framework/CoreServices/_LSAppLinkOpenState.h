@class NSString, NSXPCConnection, NSURL, NSDictionary, _LSOpenConfiguration;

@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding> {
    struct optional<audit_token_t> { union { char __null_state_; struct { unsigned int val[8]; } __val_; } ; BOOL __engaged_; } _auditToken;
    NSXPCConnection *_XPCConnection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSURL *URL;
@property (copy) NSString *bundleIdentifier;
@property (retain) _LSOpenConfiguration *openConfiguration;
@property (nonatomic) const struct { unsigned int x0[8]; } *auditToken;
@property (retain, nonatomic) NSXPCConnection *XPCConnection;
@property (copy) NSDictionary *browserState;
@property BOOL includeLinksForCallingApplication;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
