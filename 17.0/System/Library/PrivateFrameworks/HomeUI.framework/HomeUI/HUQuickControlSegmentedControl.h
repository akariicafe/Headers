@class UIStackView, NSArray, NSString, NSNumber, UILongPressGestureRecognizer;

@interface HUQuickControlSegmentedControl : UIView <HUQuickControlAuxiliaryView>

@property (retain, nonatomic) UIStackView *segmentStackView;
@property (retain, nonatomic) NSArray *segmentViews;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) NSNumber *trackingSegmentIndex;
@property (copy, nonatomic) id /* block */ selectionChangeHandler;
@property (retain, nonatomic) NSNumber *selectedSegmentIndex;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) BOOL hasCenteredContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_handleGesture:(id)a0;
- (void)_updateSegmentSelectionStateAnimated:(BOOL)a0;
- (void)_updateSegmentViewsForUILayoutDirection;
- (void)ensureCorrectHeaderViewOrientation;
- (id)initWithSegments:(id)a0;
- (BOOL)preferVerticalLayout;

@end
