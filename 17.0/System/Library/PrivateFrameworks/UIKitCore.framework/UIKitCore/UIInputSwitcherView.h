@class NSArray, NSMutableArray, UIInputSwitcherGestureState;

@interface UIInputSwitcherView : UIKeyboardMenuView <_UIInputSwitcherSplitMenu> {
    NSArray *m_inputSwitcherItems;
    BOOL m_isForDictation;
    UIInputSwitcherGestureState *m_gestureState;
}

@property (readonly, nonatomic) NSMutableArray *inputModes;
@property (nonatomic) BOOL messagesWriteboardFromSwitcher;
@property (nonatomic) BOOL fileReportFromSwitcher;
@property (nonatomic) BOOL showsSwitches;
@property (copy, nonatomic) id /* block */ finishSplitTransitionBlock;

+ (id)sharedInstance;
+ (id)activeInstance;
+ (BOOL)canShowKeyboardSettings;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)setInputMode:(id)a0;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (void)didShow;
- (BOOL)_canAddLaunchItem;
- (long long)_indexOfFastSwitchToggleModeForIdentifier:(id)a0;
- (long long)_indexOfInputSwitcherItemWithIdentifier:(id)a0;
- (BOOL)_isHandBiasSwitchVisible;
- (id)_itemWithIdentifier:(id)a0;
- (void)_reloadInputSwitcherItems;
- (void)_segmentControlValueDidChange:(id)a0;
- (id)buttonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 isForDictation:(BOOL)a3 tapAction:(id /* block */)a4;
- (id)buttonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 isLocationInsideViewHitArea:(BOOL)a3 isForDictation:(BOOL)a4 tapAction:(id /* block */)a5;
- (void)customizeCell:(id)a0 forItemAtIndex:(unsigned long long)a1;
- (id)defaultInputMode;
- (unsigned long long)defaultSelectedIndex;
- (void)didFinishSplitTransition;
- (BOOL)didHitDockItemWithinTypingWindow;
- (void)didSelectItemAtIndex:(unsigned long long)a0;
- (void)fadeWithDelay:(double)a0;
- (id)fontForItemAtIndex:(unsigned long long)a0;
- (id)localizedTitleForItemAtIndex:(unsigned long long)a0;
- (id)nextInputMode;
- (struct CGSize { double x0; double x1; })preferredSize;
- (id)previousInputMode;
- (void)reloadInputModes;
- (void)returnToKeyboardIfNeeded;
- (void)selectInputMode:(id)a0;
- (void)selectNextInputMode;
- (void)selectPreviousInputMode;
- (void)selectRowForInputMode:(id)a0;
- (id)selectedInputMode;
- (BOOL)shouldSelectItemAtIndex:(unsigned long long)a0;
- (BOOL)shouldShow;
- (BOOL)shouldShowSelectionExtraViewForIndexPath:(id)a0;
- (void)showAsPopupForKey:(id)a0 inLayout:(id)a1;
- (id)subtitleFontForItemAtIndex:(unsigned long long)a0;
- (id)subtitleForItemAtIndex:(unsigned long long)a0;
- (void)switchAction;
- (id)titleForItemAtIndex:(unsigned long long)a0;
- (void)toggleKeyboardFloatingPreference;
- (BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)a0;
- (void)willFade;
- (void)willFadeForSelectionAtIndex:(unsigned long long)a0;

@end
