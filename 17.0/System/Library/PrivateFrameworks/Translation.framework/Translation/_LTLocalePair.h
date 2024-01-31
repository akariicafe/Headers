@class NSLocale;

@interface _LTLocalePair : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSLocale *sourceLocale;
@property (readonly, nonatomic) NSLocale *targetLocale;

+ (id)pairWithIdentifiers:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isPassthrough;
- (id)canonicalIdentifier;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (BOOL)isVariantPair;
- (id)canonicalLocalePair;
- (id)combinedLocaleIdentifier;
- (BOOL)isBidirectionalEqual:(id)a0;
- (id)oppositeToLocale:(id)a0;
- (id)reversedPair;

@end
