@class NSSet, NSString, NSOrderedSet;

@interface MXMSampleTag : NSObject <NSSecureCoding, NSCopying> {
    NSOrderedSet *_taxonomy;
}

@property (class, readonly, copy, nonatomic) NSSet *ancestery;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domainNameString;
@property (readonly, copy, nonatomic) MXMSampleTag *parent;

- (BOOL)isEqualToTag:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithComponents:(id)a0;
- (BOOL)containsTag:(id)a0;
- (id)initWithDNString:(id)a0;
- (id)initWithTaxonomy:(id)a0;

@end
