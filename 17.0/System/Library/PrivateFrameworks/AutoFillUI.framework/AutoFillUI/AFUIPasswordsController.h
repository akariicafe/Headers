@class NSString, RTIDocumentTraits;
@protocol AFUIPasswordPickerDelegate;

@interface AFUIPasswordsController : NSObject <_SFAppAutoFillPasswordViewControllerDelegate> {
    RTIDocumentTraits *_documentTraits;
}

@property (weak, nonatomic) id<AFUIPasswordPickerDelegate> passwordPickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPasswordPickerViewControllerAuthenticating:(id)a0;

- (void).cxx_destruct;
- (void)passwordViewController:(id)a0 fillPassword:(id)a1;
- (void)passwordViewController:(id)a0 fillUsername:(id)a1;
- (void)passwordViewController:(id)a0 fillVerificationCode:(id)a1;
- (void)passwordViewController:(id)a0 selectedCredential:(id)a1;
- (BOOL)_shouldPresentAllPasswordsViewInPopover;
- (id)initWithDocumentTraits:(id)a0;
- (id)makePasswordPickerViewController;
- (void)presentPasswordPickerFromViewController:(id)a0;

@end
