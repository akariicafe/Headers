@class NSURL, NSString;

@interface LSMacApplicationIdentityBookmark : NSObject <NSCopying, NSSecureCoding> {
    NSURL *_URL;
    NSString *_bundleIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
