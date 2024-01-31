@class NSArray;

@interface TISupplementalLexicon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long searchPrefixes;
@property (readonly, nonatomic) unsigned short searchPrefixCharacter;
@property (nonatomic) unsigned long long identifier;

- (unsigned long long)hash;
- (id)initWithItems:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItems:(id)a0 searchPrefixes:(unsigned long long)a1;
- (BOOL)isEqualToSupplementalLexicon:(id)a0;

@end
