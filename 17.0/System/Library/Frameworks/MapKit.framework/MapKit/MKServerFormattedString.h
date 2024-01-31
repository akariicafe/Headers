@class GEOComposedString, MKServerFormattedStringParameters;
@protocol GEOServerFormattedString;

@interface MKServerFormattedString : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GEOServerFormattedString> geoServerString;
@property (readonly, copy, nonatomic) MKServerFormattedStringParameters *parameters;
@property (readonly, nonatomic) GEOComposedString *composedString;

+ (id)attributesForServerFormatStyle:(long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToServerFormattedString:(id)a0;
- (id)_attributesByTokenForFormatStyles:(id)a0;
- (id)_multiPartAttributedStringForComposedStringWithAttributes:(id)a0;
- (id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)a0 geoServerString:(id)a1;
- (id)_textAttachmentForGeoArtwork:(id)a0 attributes:(id)a1 accessibilityText:(id)a2;
- (id)_textAttachmentForManeuver:(int)a0 junctionInfo:(id)a1 defaultAttributes:(id)a2;
- (id)initWithComposedString:(id)a0;
- (id)initWithGeoServerString:(id)a0 parameters:(id)a1;
- (id)multiPartAttributedStringWithAttributes:(id)a0;

@end
