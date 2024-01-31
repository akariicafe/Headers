@interface _NCContentUnavailableView : _UIContentUnavailableView

- (id)_titleFont;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateVisualStyling;
- (void)didMoveToWindow;
- (double)_labelAlpha;
- (id)_visualStylingProvider;

@end
