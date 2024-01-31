@class NSString;

@interface GEOComposedStringArgument_String : GEOComposedStringArgument {
    NSString *_defaultValue;
}

@property (copy, nonatomic) NSString *overrideValue;
@property (readonly, nonatomic) int stringSubstituteType;
@property (readonly, nonatomic) int privacyFilterType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)stringFormat;

@end
