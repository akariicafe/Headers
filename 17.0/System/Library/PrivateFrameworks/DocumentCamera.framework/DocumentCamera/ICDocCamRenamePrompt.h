@class NSString, UIAlertAction;

@interface ICDocCamRenamePrompt : NSObject <UITextFieldDelegate>

@property (copy, nonatomic) NSString *existingTitle;
@property (retain, nonatomic) UIAlertAction *saveAction;
@property (retain, nonatomic) ICDocCamRenamePrompt *strongSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)isTitleValid:(id)a0 error:(out id *)a1;
- (void)textFieldChanged:(id)a0;
- (id)initWithExistingTitle:(id)a0;
- (void)showFromViewController:(id)a0 completion:(id /* block */)a1;
- (void)enableAction:(id)a0 withString:(id)a1;
- (void)showSingleButtonAlertFromViewController:(id)a0 withTitle:(id)a1 message:(id)a2;
- (id)stringByScrubbingStringForCollectionName:(id)a0;

@end
