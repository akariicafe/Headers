@class UIStackView, NSArray, PKPaletteButton, NSHashTable, NSString, PKPaletteButtonGroupView, PKPaletteKeyboardButton;

@interface PKDrawingPaletteInputAssistantView : UIView <PKPaletteButtonIntrinsicContentSizeObserver, PKPaletteEdgeLocating, PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) PKPaletteButtonGroupView *topOrTrailingGroupView;
@property (retain, nonatomic) PKPaletteButtonGroupView *bottomOrLeadingGroupView;
@property (retain, nonatomic) PKPaletteKeyboardButton *keyboardButton;
@property (retain, nonatomic) PKPaletteButton *returnKeyButton;
@property (retain, nonatomic) NSHashTable *viewStateObservers;
@property (copy, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) BOOL hasInputAssistantItems;
@property (nonatomic) BOOL useCompactLayout;
@property (nonatomic) BOOL shouldShowKeyboardButton;
@property (nonatomic) BOOL shouldShowReturnKeyButton;
@property (nonatomic) BOOL enableKeyboardButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateUI;
- (long long)_contentStackViewAlignment;
- (double)_contentStackViewSpacing;
- (void)_notifyViewStateDidChange;
- (id)_topOrTrailingGroupViewButtons;
- (void)_updateContentOrientation;
- (void)_updateContentScalingFactor;
- (void)_updateContentViewSpacing;
- (void)_updateGroupViewContents;
- (BOOL)_useThreeButtonLayout;
- (void)addViewStateObserver:(id)a0;
- (void)buttonDidChangeIntrinsicContentSize:(id)a0;
- (void)removeViewStateObserver:(id)a0;

@end
