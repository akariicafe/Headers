@class NSString;

@interface LSSystemBundleIdentity : LSBundleIdentity {
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentityString:(id)a0 parsedIdentityStringDictionary:(id)a1 error:(id *)a2;

@end
