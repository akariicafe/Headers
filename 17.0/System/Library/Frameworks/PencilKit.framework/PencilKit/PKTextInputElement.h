@class PKTextInputWritingSession, NSNumber, UIView;
@protocol PKScribbleInteractionWrapper, UITextInput, UICoordinateSpace, NSCopying, NSObject;

@interface PKTextInputElement : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKnownFrame;
    id<UICoordinateSpace> _coordinateSpace;
    BOOL __requestingPlaceholderSuppression;
    BOOL __waitingForMatchingDidFinishWriting;
    BOOL _legacyHasBeenFocusedWithinContainer;
    long long __elementType;
    UIView *_elementTextInputView;
    id<PKScribbleInteractionWrapper> __viewScribbleInteraction;
    id<PKScribbleInteractionWrapper> __containerInteraction;
    long long __orderInContainer;
    PKTextInputWritingSession *__writingSession;
    id<UITextInput> _textInput;
    NSNumber *_recognitionIdentifier;
    id<NSObject, NSCopying> _containerElementIdentifier;
}

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } activeAffectedRange;

- (BOOL)showSelectionCommands;
- (id)selectionHighlightColor;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_beginSuppressingFieldPlaceholder;
- (void)_finishSuppressingFieldPlaceholderIfNeeded;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })activePreviewRange;
- (void)beginSuppressingPlaceholderIfNecessary;
- (BOOL)clearActivePreview;
- (void)didEndWriting;
- (void)didInsertText;
- (void)didMoveToWritingSession:(id)a0;
- (void)endSuppressingPlaceholderIfNecessary;
- (void)notifyTextInputTextDidChange;
- (void)notifyTextInputTextWillChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionClipRectInCoordinateSpace:(id)a0;
- (void)swapWritingStateWithElement:(id)a0;
- (void)willBeginWriting;

@end
