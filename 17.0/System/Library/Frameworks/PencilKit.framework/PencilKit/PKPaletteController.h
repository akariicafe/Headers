@class PKTextInputWindowFirstResponder, PKUCBPaletteView, NSArray, PKPaletteKeyboardButton, PKPaletteInputAssistantButtonProvider, NSString, PKPaletteFloatingKeyboardController, NSLayoutConstraint, PKPaletteTapToRadarCommand, PKPaletteHostView, PKPaletteButton;
@protocol PKPaletteControllerDelegate;

@interface PKPaletteController : NSObject <PKPaletteHostingWindowScene, PKPaletteFloatingKeyboardControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteMoreOptionsViewControllerDelegate>

@property (retain, nonatomic) PKPaletteHostView *_hostView;
@property (retain, nonatomic) PKUCBPaletteView *_paletteView;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewHeightConstraint;
@property (retain, nonatomic) PKPaletteButton *undoButton;
@property (retain, nonatomic) PKPaletteButton *redoButton;
@property (retain, nonatomic) PKPaletteButton *returnKeyButton;
@property (retain, nonatomic) PKPaletteKeyboardButton *keyboardButton;
@property (readonly, copy, nonatomic) NSArray *trailingButtonsWithReturnKey;
@property (readonly, copy, nonatomic) NSArray *trailingButtonsWithoutReturnKey;
@property (retain, nonatomic) PKPaletteFloatingKeyboardController *floatingKeyboardController;
@property (retain, nonatomic) PKPaletteInputAssistantButtonProvider *inputAssistantButtonProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adjustedWindowSceneBounds;
@property (weak, nonatomic) id<PKPaletteControllerDelegate> delegate;
@property (readonly, nonatomic) long long palettePosition;
@property (readonly, nonatomic, getter=isPaletteVisible) BOOL paletteVisible;
@property (retain, nonatomic) PKTextInputWindowFirstResponder *firstResponder;
@property (retain, nonatomic) PKPaletteTapToRadarCommand *tapToRadarCommand;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paletteHostingWindowSceneBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)tearDown;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)_handleReturn;
- (long long)_adjustedUserInterfaceSizeClass;
- (void)_handleKeyboard;
- (id)_adjustedHorizontalSizeClassTraitCollection;
- (void)_handleMoreButton:(id)a0;
- (void)_handleRedo;
- (void)_handleTextInputResponderCapabilitiesChanged:(id)a0;
- (void)_handleTextInputReturnKeyStateChanged:(id)a0;
- (void)_handleUndo;
- (void)_openPencilSettings;
- (void)_presentMoreOptionsPopoverFromButton:(id)a0;
- (void)_recognitionLocaleIdentifierDidChange:(id)a0;
- (BOOL)_shouldOverridePaletteViewTraitCollectionTo:(id)a0;
- (BOOL)_shouldPaletteUseCompactHorizontalSizeClass;
- (void)_updatePaletteUI;
- (void)_updatePaletteViewTraitCollection;
- (void)_updatePaletteWithApplicationSpecificItems;
- (void)_updatePaletteWithDefaultItems;
- (void)_updateReturnKey;
- (void)_updateTrailingBarButtons;
- (void)_updateUndoRedoEnabledState;
- (void)floatingKeyboardController:(id)a0 didChangeKeyboardType:(long long)a1;
- (void)floatingKeyboardControllerWillHide:(id)a0;
- (void)floatingKeyboardControllerWillShow:(id)a0;
- (void)installInView:(id)a0;
- (void)moreOptionsViewControllerDidSelectOpenPencilSettings:(id)a0;
- (void)moreOptionsViewControllerDidSelectTapToRadar:(id)a0;
- (void)moreOptionsViewControllerDidToggleAutoHide:(id)a0;
- (void)moreOptionsViewControllerDidToggleFingerDraws:(id)a0;
- (id)responderForFloatingKeyboardController:(id)a0;
- (void)setPaletteVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
