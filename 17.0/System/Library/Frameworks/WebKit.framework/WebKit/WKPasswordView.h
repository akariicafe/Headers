@class NSString;

@interface WKPasswordView : UIView <UIDocumentPasswordViewDelegate> {
    struct RetainPtr<NSString> { void *m_ptr; } _documentName;
    struct RetainPtr<UIScrollView> { void *m_ptr; } _scrollView;
    struct RetainPtr<UIDocumentPasswordView> { void *m_ptr; } _passwordView;
    double _savedMinimumZoomScale;
    double _savedMaximumZoomScale;
    double _savedZoomScale;
    struct CGSize { double width; double height; } _savedContentSize;
    struct RetainPtr<UIColor> { void *m_ptr; } _savedBackgroundColor;
}

@property (readonly, nonatomic) NSString *documentName;
@property (copy, nonatomic) id /* block */ userDidEnterPassword;

- (void)dealloc;
- (void)_keyboardDidShow:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hide;
- (void)didBeginEditingPassword:(id)a0 inView:(id)a1;
- (void)didEndEditingPassword:(id)a0 inView:(id)a1;
- (void)userDidEnterPassword:(id)a0 forPasswordView:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 documentName:(id)a1;
- (void)showInScrollView:(id)a0;
- (void)showPasswordFailureAlert;

@end
