@protocol AXUIAlertStyleProvider;

@interface AXStyleProviderUIAlert : AXUIAlert {
    double _dismissalGestureYOffset;
    struct CGPoint { double x; double y; } _backgroundViewDismissalOrigin;
}

@property (nonatomic) unsigned long long alertType;
@property (retain, nonatomic) id<AXUIAlertStyleProvider> styleProvider;

- (void)_handleTapGestureRecognizer:(id)a0;
- (void)_handlePanGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)_updateDismissalWithPanGesture:(id)a0;
- (void)_cancelDismissalWithPanGesture:(id)a0;
- (void)_appendParagraphWithText:(id)a0 withTextColor:(id)a1 font:(id)a2 textAlignment:(long long)a3 lineSpacing:(double)a4 paragraphSpacingBefore:(double)a5 toAttributedString:(id)a6;
- (void)_endDismissalWithPanGesture:(id)a0;
- (void)_updateViewForDismissalPercentage:(double)a0;
- (void)addToContainerView:(id)a0;
- (id)initWithType:(unsigned long long)a0 text:(id)a1 subtitleText:(id)a2 iconImage:(id)a3 styleProvider:(id)a4 userInfo:(id)a5;

@end
