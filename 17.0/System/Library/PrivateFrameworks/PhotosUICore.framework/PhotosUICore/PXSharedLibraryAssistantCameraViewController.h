@class NSString, UITextView;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantCameraViewController : OBWelcomeController <PXAssistantViewController> {
    UITextView *_textView;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updateTextView;
- (void)_completeWithAutoSharedEnabled:(BOOL)a0;
- (void)primaryButtonTapped:(id)a0;
- (void)secondaryButtonTapped:(id)a0;

@end
