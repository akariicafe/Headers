@class GEOComposedStringArgument_Countdown, GEOComposedStringArgument_Power, GEOComposedStringArgument_String, GEOComposedStringArgument_Substitution, GEOComposedStringArgument_Maneuver, NSDictionary, GEOComposedStringArgument_Percentage, GEOComposedStringArgument_URL, GEOComposedStringArgument_Duration, NSString, GEOComposedStringArgument_Artwork, GEOComposedStringArgument_Frequency, GEOComposedStringArgument_Timestamp, GEOComposedStringArgument_Distance, GEOComposedStringArgument_TimestampList, GEOComposedStringArgument_Price;

@interface GEOComposedStringArgument : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasDefaultValue;
@property (nonatomic) BOOL hasOverrideValue;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) GEOComposedStringArgument_Artwork *artworkFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Countdown *countdownFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Distance *distanceFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Duration *durationFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Frequency *frequencyFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Maneuver *maneuverFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Percentage *percentageFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Power *powerFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Price *priceFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_String *stringFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Substitution *substitutionFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Timestamp *timestampFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_TimestampList *timestampListFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_URL *urlFormat;
@property (copy, nonatomic) NSDictionary *stringAttributes;

+ (id)argumentForGeoFormatArgument:(id)a0;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_attributedStringReplacementWithOptions:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)replaceTokenWithOptions:(id)a0;

@end
