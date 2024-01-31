@class NSString, NSArray, _UIDatePickerStyle, NSDictionary, _UIDatePickerLinkedLabel, UIView, _UIDatePickerOverlayPresentation;
@protocol _UIDatePickerCompactDateLabelDelegate;

@interface _UIDatePickerCompactDateLabel : UIView <_UIControlEventsGestureRecognizerDelegate, UIPointerInteractionDelegate>

@property (retain, nonatomic) _UIDatePickerStyle *visualStyle;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) _UIDatePickerLinkedLabel *textLabel;
@property (nonatomic) BOOL highlightedForTouch;
@property (nonatomic) BOOL tapInteractionControlledExternally;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) NSDictionary *overrideAttributes;
@property (weak, nonatomic) id<_UIDatePickerCompactDateLabelDelegate> delegate;
@property (weak, nonatomic) _UIDatePickerOverlayPresentation *overlayPresentation;
@property (nonatomic) long long textAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlEventsGestureRecognizer:(id)a0 recognizedControlEvent:(unsigned long long)a1 withEvent:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_didTapTextLabel;
- (void)activateLabel;

@end
