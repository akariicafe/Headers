@class NSString, SKUIViewElementLayoutContext, SKUIEditorTemplateViewElement, SKUIButtonViewElement, SKUIEditorTemplateView;

@interface SKUIEditorDocumentViewController : SKUIViewController <SKUIEditorTemplateViewDelegate, SKUIDocumentViewController> {
    SKUIButtonViewElement *_doneButtonElement;
    SKUIEditorTemplateView *_editorView;
    BOOL _isTextChanged;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIButtonViewElement *_resetButtonElement;
    SKUIEditorTemplateViewElement *_templateElement;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toolbarFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillChangeFrame:(id)a0;
- (id)_backgroundColor;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)_keyboardWillShow:(id)a0;
- (void)loadView;
- (void)_keyboardWillHide:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_layoutContext;
- (void)_cancelButtonAction;
- (void)_doneButtonAction;
- (void)_authenticateOnCompletion:(id /* block */)a0;
- (void)_layoutEditorView;
- (void)_layoutNavigation;
- (id)_locateFirstButtonWithType:(long long)a0 inChildrenOfElement:(id)a1;
- (void)_resetButtonAction;
- (void)_resetTextView;
- (void)_sendCancelEventAndDismiss;
- (void)_sendDoneEventAndDismissWithText:(id)a0;
- (void)_updateBiographyWithText:(id)a0 onCompletion:(id /* block */)a1;
- (void)_updateEditorViewInset;
- (void)didChangeTextInEditorTemplateView:(id)a0;
- (void)documentDidUpdate:(id)a0;
- (id)initWithTemplateElement:(id)a0;

@end
