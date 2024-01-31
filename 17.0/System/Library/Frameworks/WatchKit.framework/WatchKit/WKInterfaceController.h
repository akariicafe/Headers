@class NSArray, NSString, NSMutableDictionary, NSMutableArray, WKCrownSequencer;

@interface WKInterfaceController : NSObject

@property (retain, nonatomic) NSArray *topLevelObjects;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (retain, nonatomic) NSString *viewControllerID;
@property (retain, nonatomic) NSMutableDictionary *gestureRecognizers;
@property (retain, nonatomic) NSMutableArray *uninstalledGestureIDs;
@property (retain, nonatomic) NSMutableArray *pendingGestureInstallationFinishedBlocks;
@property (readonly, nonatomic) WKCrownSequencer *crownSequencer;

+ (double)screenScale;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBounds;
+ (void)_insertPageControllersAtIndexes:(id)a0 withNames:(id)a1 contexts:(id)a2;
+ (void)_movePageControllerAtIndex:(long long)a0 toIndex:(long long)a1;
+ (void)_removePageControllersAtIndexes:(id)a0;
+ (BOOL)openParentApplication:(id)a0 reply:(id /* block */)a1;
+ (void)reloadRootControllersWithNames:(id)a0 contexts:(id)a1;

- (id)init;
- (id)initWithContext:(id)a0;
- (void)willDisappear;
- (void)handleUserActivity:(id)a0;
- (void)didAppear;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)animateWithDuration:(double)a0 animations:(id /* block */)a1;
- (void)dismissController;
- (void)willActivate;
- (id)contextsForSegueWithIdentifier:(id)a0;
- (void)pickerDidFocus:(id)a0;
- (void)pushControllerWithName:(id)a0 context:(id)a1;
- (void)_handleActionWithIdentifier:(id)a0 forNotification:(id)a1 remoteNotification:(id)a2 localNotification:(id)a3;
- (void)addMenuItemWithImage:(id)a0 title:(id)a1 action:(SEL)a2;
- (void)addMenuItemWithImageNamed:(id)a0 title:(id)a1 action:(SEL)a2;
- (void)addMenuItemWithItemIcon:(long long)a0 title:(id)a1 action:(SEL)a2;
- (void)awakeWithContext:(id)a0;
- (void)becomeCurrentPage;
- (void)beginGlanceUpdates;
- (void)clearAllMenuItems;
- (id)contextForSegueWithIdentifier:(id)a0;
- (id)contextForSegueWithIdentifier:(id)a0 inTable:(id)a1 rowIndex:(long long)a2;
- (id)contextsForSegueWithIdentifier:(id)a0 inTable:(id)a1 rowIndex:(long long)a2;
- (void)didDeactivate;
- (void)didRegisterWithRemoteInterface;
- (void)dismissAddPassesController;
- (void)dismissTextInputController;
- (void)endGlanceUpdates;
- (void)handleActionWithIdentifier:(id)a0 forLocalNotification:(id)a1;
- (void)handleActionWithIdentifier:(id)a0 forNotification:(id)a1;
- (void)handleActionWithIdentifier:(id)a0 forRemoteNotification:(id)a1;
- (void)interfaceDidScrollToTop;
- (void)interfaceOffsetDidScrollToBottom;
- (void)interfaceOffsetDidScrollToTop;
- (void)invalidateUserActivity;
- (void)pickerDidResignFocus:(id)a0;
- (void)pickerDidSettle:(id)a0;
- (void)popController;
- (void)popToRootController;
- (void)presentAddPassesControllerWithPasses:(id)a0 completion:(id /* block */)a1;
- (void)presentControllerWithName:(id)a0 context:(id)a1;
- (void)presentControllerWithNames:(id)a0 contexts:(id)a1;
- (void)presentTextInputControllerWithSuggestions:(id)a0 allowedInputMode:(long long)a1 completion:(id /* block */)a2;
- (void)presentTextInputControllerWithSuggestionsForLanguage:(id /* block */)a0 allowedInputMode:(long long)a1 completion:(id /* block */)a2;
- (void)table:(id)a0 didSelectRowAtIndex:(long long)a1;
- (void)updateUserActivity:(id)a0 userInfo:(id)a1;
- (void)updateUserActivity:(id)a0 userInfo:(id)a1 webpageURL:(id)a2;

@end
