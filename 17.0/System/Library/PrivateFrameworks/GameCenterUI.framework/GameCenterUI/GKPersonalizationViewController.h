@interface GKPersonalizationViewController : UIViewController <GKAvatarContainerViewDelegate, CNPhotoPickerViewControllerDelegate, GKNicknameControllerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_editAvatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nicknameController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_personalizationView;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)keyboardWillShow:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)photoPicker:(id)a0 didUpdatePhotoForContact:(id)a1 withContactImage:(id)a2;
- (void)photoPickerDidCancel:(id)a0;
- (void)nicknameDidBecomeFirstResponder;
- (void)nicknameDidResignFirstResponder;
- (void)avatarView:(id)a0 didSelectImageWithEditingEnabled:(BOOL)a1;
- (BOOL)nicknameShouldBeginEditing;
- (void)nicknameTextDidChangeWithMessage:(id)a0;
- (void)nicknameUpdateAvatarImage:(id)a0;
- (void)nicknameUpdateRequestCompletedWithStatus:(id)a0 error:(id)a1;

@end
