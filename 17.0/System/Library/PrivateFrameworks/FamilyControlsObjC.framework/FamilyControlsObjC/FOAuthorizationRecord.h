@class NSString, NSUUID;

@interface FOAuthorizationRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *teamIdentifier;
@property (readonly, copy) NSUUID *recordIdentifier;
@property (readonly) long long status;
@property (readonly) long long type;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1 recordIdentifier:(id)a2 status:(long long)a3 type:(long long)a4;

@end
