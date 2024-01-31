@interface AVTAvatarActionsViewControllerTransitionPadStartingLayout : AVTAvatarActionsViewControllerPadLayout {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _avatarContainerViewFrame;
}

- (double)actionButtonsViewAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarContainerViewFrame;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 buttonCount:(long long)a2 avtViewLayoutInfo:(id)a3 startingAvatarViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

@end
