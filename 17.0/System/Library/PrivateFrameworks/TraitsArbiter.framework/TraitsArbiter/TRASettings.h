@class TRASettingsOrientation, TRASettingsZOrderLevel, TRASettingsUserInterfaceStyle, NSString, TRASettingsAmbientPresentation;

@interface TRASettings : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (retain, nonatomic) TRASettingsZOrderLevel *zOrderLevelSettings;
@property (retain, nonatomic) TRASettingsOrientation *orientationSettings;
@property (retain, nonatomic) TRASettingsAmbientPresentation *ambientPresentationSettings;
@property (readonly, nonatomic) TRASettingsUserInterfaceStyle *userInterfaceStyleSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithSettings:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithZOrderLevelSettings:(id)a0 orientationSettings:(id)a1 ambientPresentationSettings:(id)a2 userInterfaceStyleSettings:(id)a3;

@end
