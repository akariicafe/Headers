@class NSString, NSUnitConverter;

@interface NSDimension : NSUnit <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsRegionalPreference;
@property (class, readonly) NSString *icuType;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long specifier;
@property (readonly) NSString *icuSubtype;
@property (readonly, copy) NSUnitConverter *converter;

+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)dimension;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDimension:(id)a0;
- (id)initWithSpecifier:(unsigned long long)a0 symbol:(id)a1 converter:(id)a2;
- (id)initWithSymbol:(id)a0 converter:(id)a1;

@end
