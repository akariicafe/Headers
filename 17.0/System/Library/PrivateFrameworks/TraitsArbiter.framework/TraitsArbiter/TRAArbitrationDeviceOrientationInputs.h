@class NSString;

@interface TRAArbitrationDeviceOrientationInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) long long currentDeviceOrientation;
@property (readonly, nonatomic) long long nonFlatDeviceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCurrentDeviceOrientation:(long long)a0 nonFlatDeviceOrientation:(long long)a1;
- (BOOL)isEqualToDeviceOrientationInputs:(id)a0;

@end
