@class _UIFieldEditorSystemInputHostView, UISystemInputViewController, UIVisualEffectView;

@interface _UIFieldEditorSystemInputHost : _UIFieldEditorHost {
    _UIFieldEditorSystemInputHostView *_containerView;
    UIVisualEffectView *_backgroundEffectView;
}

@property (readonly, nonatomic) UISystemInputViewController *_systemInputViewController;

- (void)layoutIfNeeded;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)addFieldEditor:(id)a0;
- (BOOL)_isTV;
- (void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(BOOL)a0;
- (id)_viewForHostingFieldEditor;
- (void)addPlaceholderLabel:(id)a0;
- (void)removeFieldEditor;

@end
