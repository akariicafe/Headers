@interface SBSwitcherChamoisSnapPaddingSettings : PTSettings

@property (nonatomic) double multiAppCenterPadding;
@property (nonatomic) double singleAppCenterPadding;
@property (nonatomic) double edgePadding;

+ (id)settingsControllerModule;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaultValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
