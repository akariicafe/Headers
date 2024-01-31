@class NSArray;

@interface NewsArticles.PDFReplicaViewController : UIViewController <UIGestureRecognizerDelegate, PDFViewDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ contentBackgroundColor;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ pdfView;
    void /* unknown type, empty encoding */ focusableView;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ keyCommandManager;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ loadingIndicatorProvider;
    void /* unknown type, empty encoding */ pinchRecognizer;
    void /* unknown type, empty encoding */ loadingStateMachine;
    void /* unknown type, empty encoding */ paywallPreparationEventManager;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handleKeyCommandWithKeyCommand:(id)a0;
- (void)PDFViewWillClickOnLink:(id)a0 withURL:(id)a1;
- (void)handlePinchGesture;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
