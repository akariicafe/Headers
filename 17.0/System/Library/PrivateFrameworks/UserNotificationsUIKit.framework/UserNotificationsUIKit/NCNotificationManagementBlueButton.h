@class NSString, UIColor;

@interface NCNotificationManagementBlueButton : UIButton <UIPointerInteractionDelegate> {
    UIColor *_backgroundColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithTitle:(id)a0;

- (void)setBackgroundColor:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
