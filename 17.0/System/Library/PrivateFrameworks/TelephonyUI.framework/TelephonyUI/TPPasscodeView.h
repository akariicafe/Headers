@class NSString, NSMutableString;

@interface TPPasscodeView : UIView

@property (retain) NSMutableString *passcodeMutableString;
@property (readonly) NSString *passcodeString;

- (void)clear;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)deleteLastCharacter;
- (void)appendCharacter:(id)a0;
- (id)passcodeString;

@end
