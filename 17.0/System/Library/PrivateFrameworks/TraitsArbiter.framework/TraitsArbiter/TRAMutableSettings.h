@class TRASettingsOrientation, TRASettingsZOrderLevel, TRASettingsUserInterfaceStyle, TRASettingsAmbientPresentation;

@interface TRAMutableSettings : TRASettings

@property (retain, nonatomic) TRASettingsZOrderLevel *zOrderLevelSettings;
@property (retain, nonatomic) TRASettingsOrientation *orientationSettings;
@property (retain, nonatomic) TRASettingsAmbientPresentation *ambientPresentationSettings;
@property (retain, nonatomic) TRASettingsUserInterfaceStyle *userInterfaceStyleSettings;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOrientationSettings:(id)a0;
- (void)setAmbientPresentationSettings:(id)a0;
- (void)setUserInterfaceStyleSettings:(id)a0;
- (void)setZOrderLevelSettings:(id)a0;

@end
