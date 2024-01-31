@class UILabel;

@interface _UIFocusDebugWindowLabelModule : UIView <_UIFocusDebugWindowModule> {
    UILabel *_content;
}

- (void)update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)title;
- (id)updatedAttributedLabelContent;
- (id)updatedLabelContent;

@end
