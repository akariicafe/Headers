@class NSString, MUPlaceVerticalCardConfiguration, UIView, UILongPressGestureRecognizer;
@protocol MUPlaceVerticalCardContainerViewDelegate;

@interface MUPlaceVerticalCardContainerView : MUStackView <UIGestureRecognizerDelegate> {
    unsigned long long _trackingSelectForRow;
    UIView *_selectedRow;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MUPlaceVerticalCardConfiguration *_configuration;
}

@property (readonly, nonatomic) BOOL shouldInvokeCopyOnLongPress;
@property (weak, nonatomic) id<MUPlaceVerticalCardContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_handleLongPress:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)removeArrangedSubview:(id)a0;
- (void)setRowViews:(id)a0;
- (id)_rowAt:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleSelectedRowView:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)_indexOfRowAt:(struct CGPoint { double x0; double x1; })a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_resolvedBottomSeparatorInsetsForView:(id)a0;
- (void)_updateForPlatterAvailability;
- (id)initWithShowsSeparators:(BOOL)a0;

@end
