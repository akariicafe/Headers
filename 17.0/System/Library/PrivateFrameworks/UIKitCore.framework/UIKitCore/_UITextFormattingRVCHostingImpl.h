@class _UITextFormattingRemoteViewController, NSString, UITextFormattingViewController, NSExtension;
@protocol _UIRemoteSheet, NSCopying;

@interface _UITextFormattingRVCHostingImpl : NSObject <_UITextFormattingTerminatingRemoteViewControllerHost, _UITextFormattingViewHostingImpl>

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (retain, nonatomic) _UITextFormattingRemoteViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UITextFormattingViewController *delegateTextFormattingViewController;
@property (readonly, nonatomic) id<_UIRemoteSheet> _remoteSheet;

- (void)dealloc;
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
- (void)_textFormattingViewServiceDidTerminateWithError:(id)a0;
- (void)_toggleItalics;
- (void)_toggleUnderline;
- (void)_updateTextAttributes:(id)a0;
- (void)setRemoteConfiguration:(id)a0;
- (void)setRemoteTextAttributes:(id)a0;
- (void)setupRemoteHosting;
- (void)setupRemoteViewController;

@end
