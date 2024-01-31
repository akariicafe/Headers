@class NSString, CAMediaTimingFunction;

@interface _UISceneSettingsMediaTimingAnimationFactory : NSObject <_UIBasicAnimationFactory>

@property (retain, nonatomic, getter=_timingFunctionForAnimation) CAMediaTimingFunction *_timingFunctionForAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldAnimateAdditivelyForView:(id)a0 withKeyPath:(id)a1;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void).cxx_destruct;

@end
