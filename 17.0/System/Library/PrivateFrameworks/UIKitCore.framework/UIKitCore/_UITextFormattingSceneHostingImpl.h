@class NSString, _UISceneHostingController, UITextFormattingViewController;
@protocol _UIRemoteSheet;

@interface _UITextFormattingSceneHostingImpl : NSObject <_UISceneHostingControllerDelegate, _UITextFormattingRemoteViewControllerHost, _UITextFormattingViewHostingImpl> {
    _UISceneHostingController *_hostingController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UITextFormattingViewController *delegateTextFormattingViewController;
@property (readonly, nonatomic) id<_UIRemoteSheet> _remoteSheet;

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
- (void)clientIsReady;
- (void)setRemoteConfiguration:(id)a0;
- (void)setRemoteTextAttributes:(id)a0;
- (void)setupRemoteHosting;
- (void)setupSceneHosting;

@end
