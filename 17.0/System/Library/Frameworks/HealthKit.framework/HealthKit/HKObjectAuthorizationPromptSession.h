@class NSUUID, NSString;

@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForBundleIdentifier:(id)a0 sessionIdentifier:(id)a1;

@end
