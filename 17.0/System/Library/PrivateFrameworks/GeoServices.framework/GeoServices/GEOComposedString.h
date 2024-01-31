@class NSArray, GEOComposedStringCondition;

@interface GEOComposedString : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_formatStrings;
    NSArray *_arguments;
    NSArray *_separators;
    NSArray *_formatStyles;
    GEOComposedString *_alternativeString;
    GEOComposedStringCondition *_alternativeStringCondition;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isPrivate;

+ (BOOL)hasLocalizationProvider;
+ (id)localizationProvider;
+ (void)setLocalizationProvider:(id)a0;

- (id)defaultOptions;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringForStrings:(id)a0 joinedBySeparators:(id)a1;
- (id)_stringResultWithOptions:(id)a0 isFinalString:(BOOL)a1;
- (void)_updateForFormatStylesInString:(id)a0 options:(id)a1;
- (BOOL)_updateString:(id)a0 withArgument:(id)a1 options:(id)a2 results:(id)a3 isFinalString:(BOOL)a4;
- (id)composedStringWithOptions:(id)a0;
- (id)initWithGeoFormattedString:(id)a0;
- (id)optionsWithArgumentHandler:(id /* block */)a0;
- (id)stringResultWithOptions:(id)a0;
- (id)stringWithDefaultOptions;
- (id)stringWithOptions:(id)a0;

@end
