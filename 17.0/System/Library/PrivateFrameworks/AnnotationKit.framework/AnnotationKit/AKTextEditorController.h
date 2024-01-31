@class AKController, UIView, NSString, AKAnnotation, UITextView, CALayer, NSTextStorage, AKPageController, NSUndoManager;
@protocol AKTextAnnotationProtocol;

@interface AKTextEditorController : NSObject <AKTextViewKeyCommandDelegate, NSTextStorageDelegate, UITextViewDelegate> {
    BOOL _wantsTextViewBecomeFirstResponder;
}

@property (weak) AKController *controller;
@property (weak) AKPageController *pageController;
@property (weak) AKAnnotation<AKTextAnnotationProtocol> *annotation;
@property (retain) UITextView *textView;
@property (retain) CALayer *textViewMaskLayer;
@property (retain) UIView *textViewContainer;
@property (retain) NSTextStorage *textStorage;
@property double renderingTextStorageScaleFactor;
@property double modelToEditorScaleFactor;
@property double handleCompensatingScaleFactor;
@property (retain) NSUndoManager *textViewUndoManager;
@property BOOL isInEndEditing;
@property BOOL isInAdjustAnnotationFrameToFitText;
@property (readonly, nonatomic) BOOL isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textContentTypeFromCRFormContentType:(unsigned long long)a0;

- (void)dealloc;
- (void)endEditing;
- (id)initWithController:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)_endEditing;
- (void)_performBlockOnMainThread:(id /* block */)a0;
- (void)_firstResponderDidChange:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)updateForTextAttributeChange;
- (void)_adjustAnnotationFrameToFitText;
- (void)_adjustEditorToFitAnnotation:(id)a0 withText:(id)a1;
- (void)_beginEditingAnnotation:(id)a0 withPageController:(id)a1 selectAllText:(BOOL)a2 withPencil:(BOOL)a3;
- (void)_commitToModelWithoutEndingEditing;
- (BOOL)_doHandleBackTab;
- (BOOL)_doHandleTab;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_editorFrameForTextBoundsInModel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_newScaledPaths:(id)a0 withScaleFactor:(double)a1 aboutCenter:(struct CGPoint { double x0; double x1; })a2;
- (void)_registerForFirstResponderNotifications;
- (void)_unregisterForFirstResponderNotifications;
- (void)_updateTextView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andOrientation:(long long)a2 additionalRotation:(double)a3;
- (void)beginEditingAnnotation:(id)a0 withPageController:(id)a1 selectAllText:(BOOL)a2;
- (void)beginEditingAnnotation:(id)a0 withPageController:(id)a1 selectAllText:(BOOL)a2 withPencil:(BOOL)a3;
- (void)commitToModelWithoutEndingEditing;
- (void)handleBackTabCommand;
- (void)handleTabCommand;

@end
