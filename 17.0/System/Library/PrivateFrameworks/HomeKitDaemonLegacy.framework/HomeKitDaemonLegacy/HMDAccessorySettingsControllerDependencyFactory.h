@interface HMDAccessorySettingsControllerDependencyFactory : HMFObject <HMDAccessorySettingsControllerDependencyFactory>

- (void)assertWithCondition:(BOOL)a0 message:(id)a1;
- (id)createMessageHandlerWithQueue:(id)a0 delegate:(id)a1;
- (id)settingModelForUpdateWithIdentifier:(id)a0 parent:(id)a1 value:(id)a2 configNumber:(id)a3;
- (id)timerWithReason:(long long)a0 interval:(double)a1;

@end
