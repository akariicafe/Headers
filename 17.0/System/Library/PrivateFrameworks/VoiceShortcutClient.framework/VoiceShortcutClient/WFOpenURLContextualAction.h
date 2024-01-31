@class NSURL, NSString;

@interface WFOpenURLContextualAction : WFContextualAction

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 actionTitle:(id)a2;

@end
