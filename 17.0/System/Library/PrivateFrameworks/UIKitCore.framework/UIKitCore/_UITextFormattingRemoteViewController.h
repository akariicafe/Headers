@class NSString;
@protocol _UITextFormattingTerminatingRemoteViewControllerHost;

@interface _UITextFormattingRemoteViewController : _UIRemoteViewController <_UITextFormattingRemoteViewControllerHost>

@property (weak, nonatomic) id<_UITextFormattingTerminatingRemoteViewControllerHost> _host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)_alignJustified;
- (void)_toggleBoldface;
- (void)_alignCenter;
- (void)_alignLeft;
- (void)_alignRight;
- (void)_decreaseSize;
- (void)_increaseSize;
- (void)_presentColorPicker:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectedColor:(id)a1;
- (void)_presentFontPickerWithConfiguration:(id)a0 selectedFonts:(id)a1;
- (void)_startSuppressingKeyboardForTextFormatting;
- (void)_stopSuppressingKeyboardForTextFormatting;
- (void)_textFormattingDidFinish;
- (void)_textFormattingRequestsFirstResponderResignation;
- (void)_textFormattingRequestsFirstResponderRestoration;
- (void)_toggleItalics;
- (void)_toggleUnderline;
- (void)_updateTextAttributes:(id)a0;

@end
