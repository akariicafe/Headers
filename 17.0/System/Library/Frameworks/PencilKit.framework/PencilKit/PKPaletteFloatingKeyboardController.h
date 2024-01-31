@class UIKeyboardInputMode, UIMenu;
@protocol PKPaletteFloatingKeyboardControllerDelegate;

@interface PKPaletteFloatingKeyboardController : NSObject {
    UIMenu *_cachedKeyboardMenu;
    BOOL _presentingKeyboard;
    BOOL _updatingCurrentInputMode;
    BOOL _processingReloadInputViews;
    id<PKPaletteFloatingKeyboardControllerDelegate> _delegate;
    UIKeyboardInputMode *_emojiInputMode;
    double _latestUserInitiatedInputModeChangeTimestamp;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didChangeInputMode;

@end
