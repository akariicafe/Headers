@class NSArray, HFColorPaletteColor, NSString;

@interface HFColorPalette : NSObject <NAEquatable, NSCopying, NSMutableCopying>

@property (class, readonly, nonatomic) HFColorPaletteColor *warmWhiteColor;

@property (copy, nonatomic) NSArray *rawColors;
@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) unsigned long long paletteType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultColorsOfType:(unsigned long long)a0;
+ (id)_defaultRGBColors;
+ (id)_defaultTemperatureColors;
+ (id)defaultColorPaletteOfType:(unsigned long long)a0;

- (id)serializedRepresentation;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)colorPaletteByAdjustingForColorProfile:(id)a0;
- (BOOL)_isNaturalLightPalette;
- (id)initWithColors:(id)a0 type:(unsigned long long)a1;
- (id)initWithSerializedRepresentation:(id)a0 type:(unsigned long long)a1;

@end
