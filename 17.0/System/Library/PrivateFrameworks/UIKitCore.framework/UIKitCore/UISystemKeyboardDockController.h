@class NSString, UIKeyboardDockItem, NSDate, UIKeyboardDockView, UIButton;

@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate> {
    BOOL _dictationHasUsedServerManualEndpointing;
    BOOL _dictationUsingServerManualEndpointing;
    BOOL _isSuppressingDockItemTouch;
    UIKeyboardDockItem *_globeDockItem;
    UIKeyboardDockItem *_dictationDockItem;
    UIKeyboardDockItem *_dictationRunningDockItem;
    UIKeyboardDockItem *_keyboardDockItem;
    UIButton *_stopDictationButton;
    NSDate *_dictationItemButtonTouchDownTime;
    struct CGPoint { double x; double y; } _dictationItemButtonTouchDownLocationInView;
    NSDate *_globeItemButtonTouchDownTime;
    struct CGPoint { double x; double y; } _globeItemButtonTouchDownLocationInView;
}

@property (retain, nonatomic) UIKeyboardDockView *dockView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dictationItemButtonWasPressed:(id)a0 withEvent:(id)a1 isRunningButton:(BOOL)a2;
- (void)dealloc;
- (void)globeItemButtonWasPressed:(id)a0 withEvent:(id)a1;
- (void)setKeyboardDockItem;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)keyboardItemButtonWasTapped:(id)a0 withEvent:(id)a1;
- (void)loadView;
- (void)keyboardDockView:(id)a0 didPressDockItem:(id)a1 withEvent:(id)a2;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_dictationDidBeginNotification:(id)a0;
- (void)updateDockItemsVisibility;

@end
