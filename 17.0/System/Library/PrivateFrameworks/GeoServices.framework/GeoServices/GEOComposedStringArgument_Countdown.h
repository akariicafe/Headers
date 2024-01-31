@class NSTimeZone, NSArray, NSDictionary, NSString, NSDate;

@interface GEOComposedStringArgument_Countdown : GEOComposedStringArgument {
    NSArray *_timestampValues;
    NSDictionary *_countdownFormatStrings;
    NSString *_separator;
    NSTimeZone *_defaultTimeZone;
}

@property (retain, nonatomic) NSDate *overrideReferenceDate;
@property (nonatomic) BOOL rightToLeft;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)countdownFormat;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;

@end
