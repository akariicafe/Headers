@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithDomain:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (id)allDomains;
- (id)initWithDomainsFromSet:(id)a0;
- (unsigned long long)count;
- (id)globPatterns;
- (id)description;
- (BOOL)containsDomain:(id)a0;
- (id)initWithDomainsFromArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;

@end
