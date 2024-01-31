@class TRAArbitrationUserInterfaceStyleInputs;

@interface TRAMutableSettingsUserInterfaceStyle : TRASettingsUserInterfaceStyle

@property (retain, nonatomic) TRAArbitrationUserInterfaceStyleInputs *userInterfaceStyleInputs;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUserInterfaceStyleInputs:(id)a0;

@end
