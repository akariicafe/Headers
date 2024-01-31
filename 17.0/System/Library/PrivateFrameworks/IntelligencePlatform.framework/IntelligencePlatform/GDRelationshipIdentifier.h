@class NSString;

@interface GDRelationshipIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long intValue;
@property (readonly, nonatomic) long long entityClass;
@property (readonly, nonatomic) NSString *stringValue;

+ (long long)entityClassOffset;
+ (id)prefixedIdentifierStringForIdentifierString:(id)a0;
+ (id)prefixedIdentifierStringForIdentifierValue:(unsigned long long)a0;
+ (id)unprefixedIdentifierStringForIdentifierString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
