@class NSString, IKViewElement;

@interface VSOnscreenCodeAuthenticationAppDocumentController : VSAppDocumentController <VSOnscreenCodeViewModelDelegate>

@property (retain, nonatomic) IKViewElement *buttonLockupViewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_newViewModel;
- (id)_onscreenCodeViewModelWithViewModel:(id)a0;
- (BOOL)_updateOnscreenCodeViewModel:(id)a0 error:(id *)a1;
- (BOOL)_updateOnscreenCodeViewModel:(id)a0 withTemplate:(id)a1;
- (BOOL)_updateViewModel:(id)a0 error:(id *)a1;
- (void)onscreenCodeViewModelButtonLockupPressed;

@end
