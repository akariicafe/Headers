@interface GCVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long major;
@property (readonly) unsigned long long minor;
@property (readonly) unsigned long long patch;

+ (id)currentSourceVersion;

- (id)init;
- (unsigned long long)hash;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)isGreaterThanOrEqualTo:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualTo:(id)a0;
- (BOOL)isGreaterThan:(id)a0;
- (BOOL)isLessThan:(id)a0;
- (BOOL)isLessThanOrEqualTo:(id)a0;
- (id)initWithMajor:(unsigned long long)a0 minor:(unsigned long long)a1 patch:(unsigned long long)a2;
- (BOOL)isEqualToSourceVersion:(id)a0;
- (BOOL)isGreaterThanOrEqualToSourceVersion:(id)a0;
- (BOOL)isGreaterThanSourceVersion:(id)a0;
- (BOOL)isLessThanOrEqualToSourceVersion:(id)a0;
- (BOOL)isLessThanSourceVersion:(id)a0;

@end
