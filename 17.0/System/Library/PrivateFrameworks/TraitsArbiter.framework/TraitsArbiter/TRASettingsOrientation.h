@class TRAArbitrationDeviceOrientationInputs, NSString;
@protocol BSInterfaceOrientationMapResolving, BSXPCSecureCoding;

@interface TRASettingsOrientation : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (nonatomic) long long orientation;
@property (retain, nonatomic) id<BSInterfaceOrientationMapResolving, BSXPCSecureCoding> orientationMapResolver;
@property (retain, nonatomic) TRAArbitrationDeviceOrientationInputs *validatedOrientationInputs;
@property (retain, nonatomic) TRAArbitrationDeviceOrientationInputs *rawOrientationInputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithOrientation:(long long)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOrientation:(long long)a0 orientationMapResolver:(id)a1 validatedOrientationInputs:(id)a2 rawOrientationInputs:(id)a3;
- (id)initWithOrientationSettings:(id)a0;
- (BOOL)isEqualToOrientationSettings:(id)a0;

@end
