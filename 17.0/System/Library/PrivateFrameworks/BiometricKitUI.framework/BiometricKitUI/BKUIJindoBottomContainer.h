@class NSString;

@interface BKUIJindoBottomContainer : BKUIPearlEnrollViewBottomContainer <BKUIButtonTrayActionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldShowBottomLinkButton;
- (void)_updateButtonVisibilityForScrollView:(id)a0 state:(int)a1 subState:(int)a2;
- (void)buttonSelectedWithButtonTrayPosition:(long long)a0;
- (id)escapeHatchButtonForState:(int)a0;
- (void)setupInitialUI;
- (BOOL)showStartOverForState:(int)a0;

@end
