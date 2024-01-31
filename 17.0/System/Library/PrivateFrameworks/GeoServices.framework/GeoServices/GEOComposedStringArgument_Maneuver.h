@class NSString, GEOJunctionInfo;

@interface GEOComposedStringArgument_Maneuver : GEOComposedStringArgument {
    int _maneuverType;
    GEOJunctionInfo *_junctionInfo;
    NSString *_fallbackStringValue;
}

@property (copy, nonatomic) id /* block */ attributedStringHandler;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_attributedStringReplacementWithOptions:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)maneuverFormat;

@end
