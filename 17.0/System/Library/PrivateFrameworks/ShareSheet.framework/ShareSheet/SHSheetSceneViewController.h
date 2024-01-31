@class LPLinkMetadata, SHSheetScrollingTest, NSString, UIView, SHSheetScene;
@protocol SHSheetSession, SHSheetContentPresenter;

@interface SHSheetSceneViewController : UIViewController <SHSheetSceneDelegate, SHSheetSceneSettingsDiffActionDelegate, SHSheetContentView>

@property (readonly, nonatomic) SHSheetScene *scene;
@property (readonly, nonatomic) UIView *sceneView;
@property (retain, nonatomic) LPLinkMetadata *remoteHeaderMetadata;
@property (retain, nonatomic) SHSheetScrollingTest *currentTest;
@property (readonly, nonatomic) id<SHSheetSession> session;
@property (weak, nonatomic) id<SHSheetContentPresenter> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) LPLinkMetadata *headerMetadata;

+ (BOOL)_wantsContentOverlayInsetsUpdatesWhileDismissing;

- (id)initWithSession:(id)a0;
- (void)viewSafeAreaInsetsDidChange;
- (void)sceneDidBecomeActive:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_sceneWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)_willEnterForeground:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsetsPortrait;
- (void)reloadContent;
- (void)reloadMetadata:(id)a0;
- (void)reloadActivity:(id)a0;
- (void)scene:(id)a0 didReceiveDraggingAction:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_framePortrait;
- (long long)_hostProcessType;
- (id)_hostSheetPresentationController;
- (void)_installSceneView;
- (void)didUpdateAirDropTransferWithChange:(id)a0;
- (void)runScrollingTestWithName:(id)a0 type:(long long)a1 completionHandler:(id /* block */)a2;
- (void)scene:(id)a0 didReceiveAction:(id)a1;
- (void)scene:(id)a0 didReceiveContentUpdateNotification:(id)a1;
- (void)scene:(id)a0 didReceiveSuggestionAction:(id)a1;
- (void)sceneSettingsDidChange:(id)a0;
- (void)startPulsingActivity:(id)a0 localizedTitle:(id)a1;
- (void)stopPulsingActivity:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
