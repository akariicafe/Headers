@class NSArray, LNStaticDeferredLocalizedString;

@interface LNTypeDisplayRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *name;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *numericFormat;
@property (readonly, copy, nonatomic) NSArray *synonyms;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 numericFormat:(id)a1;
- (id)initWithName:(id)a0 numericFormat:(id)a1 synonyms:(id)a2;

@end
