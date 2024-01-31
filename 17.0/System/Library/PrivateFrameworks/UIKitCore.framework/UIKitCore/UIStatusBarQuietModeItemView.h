@class NSString;

@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView <CAAnimationDelegate> {
    BOOL _hideForAction;
    BOOL _registeredForNotifications;
    BOOL _inactive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityHUDRepresentation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)setVisible:(BOOL)a0;
- (void)_triggerAction:(id)a0;
- (double)_visibleAlpha;
- (void)setVisible:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
