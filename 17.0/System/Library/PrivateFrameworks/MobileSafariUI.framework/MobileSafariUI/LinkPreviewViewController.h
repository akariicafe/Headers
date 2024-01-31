@class TabDocument, _SFLinkPreviewHeader, NSString, _SFBrowserView, SFScreenTimeOverlayViewController;

@interface LinkPreviewViewController : UIViewController <WBSFluidProgressControllerWindowDelegate, SFScreenTimeOverlayHostingViewController, _SFBrowserViewProviding>

@property (readonly, weak, nonatomic) TabDocument *previewTabDocument;
@property (readonly, nonatomic) _SFLinkPreviewHeader *previewHeader;
@property (readonly, nonatomic) _SFBrowserView *browserView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SFScreenTimeOverlayViewController *screenTimeOverlayViewController;

- (void)fluidProgressRocketAnimationDidComplete;
- (id)currentFluidProgressStateSource;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)displayHostedScreenTimeView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithTabDocument:(id)a0;
- (void)updatePreviewLoadingUIWithURLString:(id)a0;
- (void)willCommitPreviewedWebView;

@end
