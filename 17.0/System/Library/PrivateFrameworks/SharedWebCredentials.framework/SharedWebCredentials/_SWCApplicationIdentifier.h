@class NSString;

@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly, getter=isCaseSensitive) BOOL caseSensitive;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *rawValue;
@property (readonly) NSString *prefix;
@property (readonly) NSString *bundleIdentifier;
@property (readonly, getter=isValid) BOOL valid;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (id)redactedDescription;
- (id)UUIDRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initForBundleRecord:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
