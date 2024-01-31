@class NSTimer, UIView, NSArray, NSString, MRUExpandableButtonSelectionView, MediaControlsHapticPlayer, MediaControlsExpandableButtonOption, MTVisualStylingProvider, NSMutableArray, UILabel, MRUVisualStylingProvider;

@interface MediaControlsExpandableButton : UIControl <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) MediaControlsHapticPlayer *hapticPlayer;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MRUExpandableButtonSelectionView *selectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSTimer *messageTimer;
@property (nonatomic) BOOL toggleEnabled;
@property (nonatomic) BOOL displayMessage;
@property (nonatomic) BOOL isControlCenter;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (retain, nonatomic) NSArray *options;
@property (readonly, nonatomic) MediaControlsExpandableButtonOption *selectedOption;
@property (nonatomic) long long selectedOptionIndex;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *disabledSubtitle;
@property (nonatomic) long long axis;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) struct CGSize { double width; double height; } maximumExpandedSize;
@property (nonatomic) struct CGSize { double width; double height; } buttonImageSize;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)collapsedHeightWithImageHeight:(double)a0 maximumHeight:(double)a1;
+ (id)optionsForListeningModes:(id)a0;

- (void)_resetSelectionView;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)didTapButton:(id)a0;
- (void)updateSubtitle;
- (void)setAvailableListeningModes:(id)a0;
- (void)updateGlyphSelectionState;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)updateContentSizeCategory;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)playValueChangedEventHaptic;
- (void)showMessage:(id)a0;
- (long long)_buttonLayoutAxis;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setSelectedOptionIndex:(long long)a0 animated:(BOOL)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)updateVisualStyling;
- (void)setSelectedListeningMode:(id)a0 animated:(BOOL)a1;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)setContentVerticalAlignment:(long long)a0;
- (id)initForControlCenter;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)playFailedValueChangedEventHaptic;
- (void)_layoutSelectionView;
- (void).cxx_destruct;
- (void)_layoutLabels;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_updateButtonsVisiblity;
- (void)playFailedValueChangedEventHapticWithMessage:(id)a0;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
