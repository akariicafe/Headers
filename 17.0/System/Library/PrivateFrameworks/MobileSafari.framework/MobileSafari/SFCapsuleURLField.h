@class UIView, NSString, _SFDimmingButton, NSArray, UITextField, NSLayoutConstraint, _SFBarTheme, NSNumber;
@protocol SFCapsuleContentViewSizeUpdating;

@interface SFCapsuleURLField : UIView <SFCapsuleContentView> {
    NSLayoutConstraint *_textFieldTrailingConstraint;
    double _lastPlaceholderWidth;
    _SFDimmingButton *_clearTextButton;
    NSLayoutConstraint *_voiceSearchToClearButtonConstraint;
    NSLayoutConstraint *_voiceSearchToCapsuleConstraint;
    _SFDimmingButton *_voiceSearchButton;
    NSArray *_voiceSearchButtonConstraints;
}

@property (readonly, nonatomic) UITextField *textField;
@property (nonatomic) BOOL showsVoiceSearchButton;
@property (copy, nonatomic) id /* block */ voiceSearchTappedAction;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeOfKeyText;
@property (weak, nonatomic) id<SFCapsuleContentViewSizeUpdating> sizeUpdater;
@property (nonatomic, setter=setSelected:) BOOL isSelected;
@property (nonatomic, setter=setMinimized:) BOOL isMinimized;
@property (nonatomic, setter=setHighlighted:) BOOL isHighlighted;
@property (copy, nonatomic) id /* block */ highlightObserver;
@property (retain, nonatomic) _SFBarTheme *theme;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) double minimizationPercent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyContentRect;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } keyContentTransform;
@property (nonatomic) double nonKeyContentAlpha;
@property (readonly, nonatomic) double keyContentBaselineBottomInset;
@property (readonly, nonatomic) double keyContentCapHeightTopInset;
@property (readonly, nonatomic) NSNumber *microphoneContentOriginX;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } microphoneContentTransform;
@property (copy, nonatomic) id /* block */ buttonPointerStyleProvider;
@property (weak, nonatomic) UIView *unclippedContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_voiceSearchAvailabilityDidChange:(id)a0;
- (void)dealloc;
- (void)_tap:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updatePlaceholderText;
- (id)initWithTextField:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)_clearTextButtonTapped:(id)a0;
- (id)_newDimmingButtonWithSystemImageNamed:(id)a0 action:(SEL)a1 accessibilityIdentifier:(id)a2;
- (void)_updateClearButtonVisibility;
- (void)_voiceSearchButtonTapped:(id)a0;

@end
