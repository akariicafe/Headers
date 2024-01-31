@class _UITextInputControllerLayoutManagerConnection, UITextRange, NSTextContainer;

@interface _UITextLayoutControllerBase : NSObject {
    _UITextInputControllerLayoutManagerConnection *_textInputControllerConnection;
    Class _classicCanvasViewClass;
}

@property (retain, nonatomic) UITextRange *unobscuredRange;
@property (nonatomic, getter=isDocumentObscured) BOOL documentObscured;
@property (readonly, nonatomic) NSTextContainer *firstTextContainer;

- (void)detachFromTextInputController;
- (void).cxx_destruct;
- (void)adoptTextInputController:(id)a0;

@end
