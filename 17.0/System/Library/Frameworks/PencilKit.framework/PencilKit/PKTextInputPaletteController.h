@class PKTextInputWindowFirstResponderController, UIWindowScene, PKPaletteController, PKPaletteFloatingKeyboardController, PKTextInputSettings, NSString;
@protocol PKTextInputPaletteControllerDelegate;

@interface PKTextInputPaletteController : NSObject <PKTextInputWindowFirstResponderControllerDelegate, PKPaletteControllerDelegate, PKPaletteTapToRadarCommandDelegate, PKPaletteFloatingKeyboardControllerDelegate, UIEditingOverlayInteractionWithView>

@property (retain, nonatomic) PKPaletteFloatingKeyboardController *_floatingKeyboardController;
@property (retain, nonatomic) PKTextInputSettings *_textInputSettings;
@property (retain, nonatomic) PKTextInputWindowFirstResponderController *_windowFirstResponderController;
@property (retain, nonatomic) PKPaletteController *_paletteController;
@property (weak, nonatomic) id<PKTextInputPaletteControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isPaletteVisible) BOOL paletteVisible;
@property (nonatomic, getter=_isWritingStateActive, setter=_setWritingStateActive:) BOOL _writingStateActive;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editingOverlayContainerSceneBounds;
@property (readonly, nonatomic) UIWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_paletteControllerContainerView;
- (BOOL)_canShowPaletteUI;
- (BOOL)_isFirstResponderEditableTextInputWithPencilTextInputSource;
- (BOOL)_isFirstResponderInputAssistantEnabled;
- (BOOL)_isFirstResponderVisible;
- (void)_peformPaletteVisibilityUpdate;
- (void)_recognitionLocaleIdentifierDidChange:(id)a0;
- (void)_setupPaletteControllerIfNeededWithView:(id)a0 wantsPaletteVisible:(BOOL)a1;
- (BOOL)_shouldPaletteBeVisible;
- (void)_updatePaletteVisibility;
- (void)floatingKeyboardControllerWillHide:(id)a0;
- (void)floatingKeyboardControllerWillShow:(id)a0;
- (id)initWithTextInputSettings:(id)a0;
- (BOOL)paletteController:(id)a0 shouldOverridePaletteViewTraitCollectionTo:(id)a1;
- (void)paletteControllerFloatingKeyboardWillHide:(id)a0;
- (void)paletteControllerFloatingKeyboardWillShow:(id)a0;
- (id)paletteTapToRadarCommandConfiguration:(id)a0;
- (id)responderForFloatingKeyboardController:(id)a0;
- (void)updateFirstResponderVisibility;
- (void)windowFirstResponderController:(id)a0 didChangeFirstResponder:(id)a1;

@end
