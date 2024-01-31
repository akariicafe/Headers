@interface _UIColorPickerActionClientToHost : _UISceneHostingActionClientToHost

+ (id)_actionForActionType:(long long)a0;
+ (id)actionForColorPickerDidDismissEyedropper;
+ (id)actionForColorPickerDidFinish;
+ (id)actionForColorPickerDidFloatEyedropper;
+ (id)actionForColorPickerDidSelectColor:(id)a0 colorSpace:(id)a1 isVolatile:(BOOL)a2;
+ (id)actionForColorPickerDidShowEyedropper;

- (void)performActionForSceneController:(id)a0;

@end
