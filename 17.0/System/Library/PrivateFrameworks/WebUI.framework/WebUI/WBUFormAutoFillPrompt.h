@class UIAlertController;

@interface WBUFormAutoFillPrompt : NSObject {
    UIAlertController *_alertController;
}

+ (void)showAutoFillPromptInWebView:(id)a0 title:(id)a1 message:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4 cancelWhenAppEntersBackground:(BOOL)a5 makeFirstButtonSuggestedAction:(BOOL)a6 headerViewController:(id)a7 completionHandler:(id /* block */)a8;
+ (void)showAutoFillPromptInWebView:(id)a0 title:(id)a1 message:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4 makeFirstButtonSuggestedAction:(BOOL)a5 completionHandler:(id /* block */)a6;

- (void).cxx_destruct;
- (void)_alertTextFieldDidChange:(id)a0;
- (void)showAutoFillPromptForUsernameInWebView:(id)a0 title:(id)a1 message:(id)a2 suggestedUsername:(id)a3 password:(id)a4 isGeneratedPassword:(BOOL)a5 completionHandler:(id /* block */)a6;

@end
