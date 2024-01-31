@class TRAArbitrationDeviceOrientationInputs, TRAArbitrationUserInterfaceStyleInputs, NSString, TRAArbitrationAmbientPresentationInputs, TRAArbitrationInterfaceIdiomInputs, TRAArbitrationKeyboardInputs;

@interface TRAArbitrationInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) TRAArbitrationInterfaceIdiomInputs *interfaceIdiomInputs;
@property (readonly, copy, nonatomic) TRAArbitrationUserInterfaceStyleInputs *userInterfaceStyleInputs;
@property (readonly, copy, nonatomic) TRAArbitrationDeviceOrientationInputs *deviceOrientationInputs;
@property (readonly, copy, nonatomic) TRAArbitrationKeyboardInputs *keyboardInputs;
@property (readonly, copy, nonatomic) TRAArbitrationAmbientPresentationInputs *ambientPresentationInputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInterfaceIdiomInputs:(id)a0 userInterfaceStyleInputs:(id)a1 deviceOrientationInputs:(id)a2 keyboardInputs:(id)a3 ambientPresentationInputs:(id)a4;
- (id)initWithInterfaceIdiomInputs:(id)a0 deviceOrientationInputs:(id)a1 keyboardInputs:(id)a2 ambientPresentationInputs:(id)a3;

@end
