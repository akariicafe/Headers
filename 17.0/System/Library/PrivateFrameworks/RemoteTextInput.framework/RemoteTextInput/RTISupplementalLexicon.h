@class NSDictionary, TISupplementalLexicon;

@interface RTISupplementalLexicon : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *iconForIdentifier;
@property (readonly, nonatomic) TISupplementalLexicon *lexicon;
@property (readonly, nonatomic) unsigned long long identifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateSupplementalItems:(id /* block */)a0;
- (id)initWithTISupplementalLexicon:(id)a0 iconProvider:(id /* block */)a1;
- (id)iconForIdentifier:(unsigned long long)a0;
- (id)initWithTISupplementalLexicon:(id)a0 iconForIdentifier:(id)a1;

@end
