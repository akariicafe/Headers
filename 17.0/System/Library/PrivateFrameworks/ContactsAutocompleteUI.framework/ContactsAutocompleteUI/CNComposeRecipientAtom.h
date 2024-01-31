@class CNComposeRecipient, UITextInputTraits;
@protocol CNComposeRecipientAtomDelegate;

@interface CNComposeRecipientAtom : CNAtomView {
    UITextInputTraits *_traits;
    unsigned char _wasSelectedWhenTouchesBegan : 1;
    unsigned char _touchesWereCancelled : 1;
    unsigned char _touchBeganWithShiftDown : 1;
}

@property (retain, nonatomic) CNComposeRecipient *recipient;
@property (weak, nonatomic) id<CNComposeRecipientAtomDelegate> delegate;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)keyCommands;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)handleTouchAndHold;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 recipient:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 recipient:(id)a1 presentationOptions:(unsigned long long)a2;
- (void)handleFirstTap;
- (id)menuConfigurationForChevronButton;

@end
