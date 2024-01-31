@interface CSForgotDevicePasscodeUnblockViewModel : CSDeviceUnblockViewModel

- (id)titleText;
- (id)iconName;
- (id)cancelButtonText;
- (void)cancelButtonAction;
- (void)primaryButtonAction;
- (void)secondaryButtonAction;
- (id)bodySubtitleText;
- (id)bodyTextForTimeout:(id)a0;
- (id)primaryButtonText;
- (id)secondaryButtonText;

@end
