@interface SBHVisualStylingView : UIView

+ (id)visualStyleSetNameForUserInterfaceStyle:(long long)a0;

- (void)_updateVisualStyling;
- (void)traitCollectionDidChange:(id)a0;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;

@end
