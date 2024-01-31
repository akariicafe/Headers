@class RTIDocumentState, UIContextMenuInteraction, RTIDocumentTraits, NSString, NSObject, UIMenu;
@protocol AFUIModalUIDelegate, AFUIAutoFillContentController;

@interface AFUIAutoFillPopoverController : UIViewController <UIContextMenuInteractionDelegate>

@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (retain, nonatomic) RTIDocumentState *documentState;
@property (copy, nonatomic) id /* block */ performTextOperations;
@property (retain) UIContextMenuInteraction *contextMenuInteraction;
@property (retain) UIMenu *menu;
@property (retain) NSObject<AFUIAutoFillContentController> *contentController;
@property (weak, nonatomic) id<AFUIModalUIDelegate> modalUIDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presentAsPopoverFromWindow:(id)a0 documentTraits:(id)a1 documentState:(id)a2 modalUIDelegate:(id)a3 textOperationsHandler:(id /* block */)a4;

- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)viewDidLoad;
- (BOOL)hasSuggestions;
- (void)documentStateChanged:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)dismissMenu;
- (void)presentContacts;
- (void)presentPassword;
- (void)_displayMenuForContentController:(id)a0;
- (void)_presentViewControllerForAutoFillMode:(unsigned long long)a0;
- (void)_removeFromSuperview;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 keyboardOutputHandler:(id /* block */)a2;
- (id)initWithDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)presentCreditCards;

@end
