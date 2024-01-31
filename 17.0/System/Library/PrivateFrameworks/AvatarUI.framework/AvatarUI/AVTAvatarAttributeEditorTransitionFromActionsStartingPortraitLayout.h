@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout : AVTAvatarAttributeEditorLayout {
    BOOL _showSideGroupPicker;
    double _avatarContainerAlpha;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _avatarContainerFrame;
}

@property (readonly, nonatomic) double attributesContentViewExtraHeight;

- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attributesContentViewFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })attributesContentViewInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })attributesContentViewScrollIndicatorInsets;
- (double)avatarContainerAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })groupDialContainerFrame;
- (double)headerMaskingViewAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })headerMaskingViewFrame;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 userInfoViewHeight:(double)a2 screenScale:(double)a3 RTL:(BOOL)a4 avatarViewContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 attributesContentViewFrameExtraHeight:(double)a6 avatarViewAlpha:(double)a7 showSideGroupPicker:(BOOL)a8;
- (BOOL)showSideGroupPicker;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sideGroupContainerFrame;
- (unsigned long long)supportedLayoutOrientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })userInfoFrame;
- (double)verticalRuleAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })verticalRuleFrame;

@end
