@class CKBalloonView, UIContextMenuInteraction, IMBalloonPluginDataSource, NSString, IMBalloonPlugin, UIViewController;
@protocol CKPluginEntryViewControllerDelegate, CKTranscriptBalloonPluginController;

@interface CKDefaultPluginEntryViewController : UIViewController <UIContextMenuInteractionDelegate, CKPluginEntryViewController>

@property (retain, nonatomic) IMBalloonPluginDataSource *datasource;
@property (retain, nonatomic) UIViewController<CKTranscriptBalloonPluginController> *pluginBubbleViewController;
@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKPluginEntryViewControllerDelegate> entryViewDelegate;
@property (readonly) BOOL wantsClearButton;
@property (readonly) BOOL wantsEdgeToEdgeLayout;
@property (readonly) BOOL loadedContentView;

- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)payloadWillSend;
- (id)_copyActionForImageBalloonView;
- (id)_imageBalloon;
- (void)_loadBalloonView;
- (id)_saveActionForImageBalloonView;
- (id)_transcriptPluginBalloon;
- (void)didFinishAnimatedBoundsChange;
- (id)initWithDataSource:(id)a0 entryViewDelegate:(id)a1;
- (id)initWithDataSource:(id)a0 entryViewDelegate:(id)a1 andPlugin:(id)a2;
- (void)payloadWillClear;
- (void)performHostAppResume;
- (void)performHostAppSuspend;
- (void)updateConversationIDAndRecipientsForViewController:(id)a0;

@end
