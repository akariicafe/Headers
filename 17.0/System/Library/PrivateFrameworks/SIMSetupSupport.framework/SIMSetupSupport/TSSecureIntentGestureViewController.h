@class PRXAction, NSString, NSData, PKGlyphView, LAUIPhysicalButtonView;
@protocol TSSIMSetupFlowDelegate;

@interface TSSecureIntentGestureViewController : PRXCardContentViewController <LAUIDelegate, TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (retain, nonatomic) NSData *externalizedContext;
@property (retain, nonatomic) PRXAction *confirmTextView;
@property (retain, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
@property (retain, nonatomic) PKGlyphView *glyphView;
@property (nonatomic) BOOL isExternalizedContextSent;
@property BOOL isSecureIntentFailed;
@property BOOL isLocalConvertFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (id)_createPKGlyphView;
- (void)_doubleClickGesture;
- (void)_handleUserCancelNotification:(id)a0;
- (void)_maybeSendExternalizedContext:(id)a0;
- (void)_updateAuthenticationStatus:(BOOL)a0;
- (void)_updateLayoutConstraint;
- (id)initWithExternalizedContext:(id)a0 isLocalConvertFlow:(BOOL)a1;

@end
