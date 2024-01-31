@class CKComposition;

@interface ChatKit.ClarityUIChatController : CKChatController {
    void /* unknown type, empty encoding */ clarityUIDelegate;
    void /* unknown type, empty encoding */ synthesizer;
    void /* unknown type, empty encoding */ lastLaidOutSize;
    void /* unknown type, empty encoding */ sendCompositionPublisher;
    void /* unknown type, empty encoding */ navigationBarTopInset;
    void /* unknown type, empty encoding */ sendCompositionPublisherSubscriber;
}

@property (nonatomic, readonly) BOOL shouldDisplayTextEntry;
@property (nonatomic) BOOL shouldShowDoneButton;
@property (nonatomic, retain) CKComposition *composition;

+ (Class)transcriptControllerClass;

- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_clickyOrbEnabled;
- (id)initWithConversation:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsetsWithoutPalette;
- (void)sendCompositionWithNotification:(id)a0;
- (void)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 doubleTappedItemAtIndexPath:(id)a2;
- (void)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 tappedForChatItem:(id)a2;
- (void)transcriptCollectionViewController:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;

@end
