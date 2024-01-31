@class UIBezierPath, UITextRange, UITextPosition;

@interface _UITextDragCaretUpdate : NSObject {
    UITextPosition *position;
    UITextRange *range;
    UIBezierPath *maskPath;
    id /* block */ alongsideAnimations;
    id /* block */ completion;
    BOOL isAnimated;
}

- (void).cxx_destruct;

@end
