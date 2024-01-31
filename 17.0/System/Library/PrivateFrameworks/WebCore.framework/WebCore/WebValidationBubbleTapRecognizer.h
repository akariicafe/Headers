@interface WebValidationBubbleTapRecognizer : NSObject {
    struct RetainPtr<UIViewController> { void *m_ptr; } _popoverController;
    struct RetainPtr<UITapGestureRecognizer> { void *m_ptr; } _tapGestureRecognizer;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dismissPopover;
- (id)initWithPopoverController:(id)a0;

@end
