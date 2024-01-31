@class TRAArbitrationDeviceOrientationInputs;
@protocol BSInterfaceOrientationMapResolving, BSXPCSecureCoding;

@interface TRAMutableSettingsOrientation : TRASettingsOrientation

@property (nonatomic) long long orientation;
@property (retain, nonatomic) id<BSInterfaceOrientationMapResolving, BSXPCSecureCoding> orientationMapResolver;
@property (retain, nonatomic) TRAArbitrationDeviceOrientationInputs *validatedOrientationInputs;
@property (retain, nonatomic) TRAArbitrationDeviceOrientationInputs *rawOrientationInputs;

- (void)setOrientation:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOrientationMapResolver:(id)a0;
- (void)setRawOrientationInputs:(id)a0;
- (void)setValidatedOrientationInputs:(id)a0;

@end
