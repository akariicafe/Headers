@class _UIPopoverView;

@interface _UIKeyboardPopover : UIView <UITextEffectsOrdering> {
    _UIPopoverView *_popoverView;
}

- (void)_setRenderConfig:(id)a0;
- (int)textEffectsVisibilityLevel;
- (void).cxx_destruct;
- (id)initWithPopoverView:(id)a0;
- (int)textEffectsVisibilityLevelInKeyboardWindow;

@end
