@class NSString, TUIPressAndHoldView;

@interface UIPressAndHoldPopoverController : UIKeyboardPopoverController <TUIPressAndHoldViewDelegate> {
    TUIPressAndHoldView *_pressAndHoldView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPresentPressAndHoldPopoverForEvent:(id)a0;
+ (BOOL)canPresentPressAndHoldPopoverForKeyString:(id)a0;

- (void).cxx_destruct;
- (BOOL)handleHardwareKeyboardEvent:(id)a0;
- (BOOL)handleKeyInputForAccentSelector:(id)a0;
- (BOOL)handleKeyInputForPressAndHoldSelector:(id)a0;
- (BOOL)handleSelectionEvent:(id)a0;
- (BOOL)hasAccentVariantInForwardDirection:(BOOL)a0;
- (id)initWithKeyString:(id)a0;
- (void)insertSelectedAccentVariant:(id)a0 shouldDismissPopover:(BOOL)a1;
- (BOOL)isSamePressAndHoldPopoverForKeyString:(id)a0;
- (void)pressAndHoldViewDidAcceptAccentVariant:(id)a0 atIndexPath:(id)a1;
- (void)showAccentVariantInForwardDirection:(BOOL)a0;

@end
