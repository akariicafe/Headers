@class OADColorMap, OADColorScheme;
@protocol OADColorPalette;

@interface OADColorContext : NSObject

@property (readonly, nonatomic) OADColorScheme *scheme;
@property (readonly, nonatomic) OADColorMap *map;
@property (retain, nonatomic) id<OADColorPalette> palette;

+ (id)colorContextWithScheme:(id)a0 map:(id)a1 palette:(id)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)applyThemeOverrides:(id)a0 colorMapOverride:(id)a1;
- (id)initWithScheme:(id)a0 map:(id)a1 palette:(id)a2;

@end
