@class UIUndoGestureInteraction, _UIActionWhenIdle;
@protocol UIInteraction;

@interface UIEditingOverlayViewController : UIViewController

@property (retain, nonatomic) UIUndoGestureInteraction *undoInteraction;
@property (retain, nonatomic) _UIActionWhenIdle *addPencilTextInputInteractionAction;
@property (retain, nonatomic) id<UIInteraction> pencilTextInputInteraction;

- (void)updateEditingOverlayContainer;
- (void)viewDidLoad;
- (void)_addInteractions;
- (void)_addPencilTextInputInteraction;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_removeInteractions;

@end
