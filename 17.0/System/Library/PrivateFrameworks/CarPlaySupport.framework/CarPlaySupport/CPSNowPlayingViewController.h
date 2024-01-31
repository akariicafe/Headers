@class NAFuture, CPTemplate, NSString, CPSAudioPlaybackManager;
@protocol CPTemplateDelegate, CPSTemplateViewControllerDelegate;

@interface CPSNowPlayingViewController : CPUINowPlayingViewController <CPSButtonDelegate, UIGestureRecognizerDelegate, CPNowPlayingTemplateProviding, CPBaseTemplateProviding, CPSBaseTemplateViewController>

@property (nonatomic) BOOL isPopping;
@property (nonatomic) BOOL didDisappear;
@property (readonly, nonatomic) CPSAudioPlaybackManager *audioPlaybackManager;
@property (retain, nonatomic) CPTemplate *associatedTemplate;
@property (retain, nonatomic) id<CPTemplateDelegate> templateDelegate;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (weak, nonatomic) id<CPSTemplateViewControllerDelegate> viewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)invalidate;
- (void)removeFromParentViewController;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didSelectButton:(id)a0;
- (void)setControl:(id)a0 enabled:(BOOL)a1;
- (void)setControl:(id)a0 selected:(BOOL)a1;
- (void)updateNowPlayingTemplate:(id)a0 withProxyDelegate:(id)a1;
- (void)_cps_viewControllerWasPopped;
- (id)initWithNowPlayingTemplate:(id)a0 templateDelegate:(id)a1 environment:(id)a2;
- (id)nowPlayingTemplate;

@end
