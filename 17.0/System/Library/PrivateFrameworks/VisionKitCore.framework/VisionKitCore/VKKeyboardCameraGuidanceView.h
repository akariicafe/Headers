@class UILabel, UIVisualEffectView, NSString;

@interface VKKeyboardCameraGuidanceView : UIView {
    BOOL _didAddConstraints;
    UIVisualEffectView *_blurView;
    UILabel *_label;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentEdgeInsets;
    double _visibleStartTime;
    double _lastVisibleTime;
    unsigned long long _state;
    NSString *_text;
}

@property (nonatomic) double preferredMaxLayoutWidth;

- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)_reallyHideGuidance;
- (void)_reallyShowGuidance;
- (void)hideGuidance;
- (void)showGuidanceWithText:(id)a0;

@end
