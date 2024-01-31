@interface LSPrecondition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)emptyPrecondition;
+ (id)registrationStatePreconditionForBundleWithIdentifier:(id)a0 placeholderInstalled:(id)a1 fullApplicationInstalled:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isMet;

@end
