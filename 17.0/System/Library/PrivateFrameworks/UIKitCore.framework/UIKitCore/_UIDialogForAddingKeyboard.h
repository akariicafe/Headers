@class UINavigationController, UIWindow;

@interface _UIDialogForAddingKeyboard : NSObject {
    UIWindow *_presenterWindow;
    UINavigationController *_privacySheetController;
}

+ (void)presentDialogForAddingKeyboard;

- (void)dismiss;
- (void).cxx_destruct;
- (void)presentDialogForAddingKeyboard;
- (void)presentPrivacySheet;

@end
