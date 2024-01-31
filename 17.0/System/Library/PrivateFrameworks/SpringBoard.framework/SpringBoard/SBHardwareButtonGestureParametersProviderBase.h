@class SBHardwareButtonGestureParameters, NSMapTable, NSString;

@interface SBHardwareButtonGestureParametersProviderBase : NSObject <SBHardwareButtonGestureParametersProvider, BSDescriptionProviding>

@property (retain, nonatomic) NSMapTable *observers;
@property (readonly, nonatomic) SBHardwareButtonGestureParameters *hardwareButtonGestureParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)addHardwareButtonGestureParametersObserver:(id)a0;
- (void)publishUpdatedParameters:(id)a0;
- (void)removeHardwareButtonGestureParametersObserver:(id)a0;

@end
