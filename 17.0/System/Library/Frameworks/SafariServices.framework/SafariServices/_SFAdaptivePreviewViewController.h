@class NSArray, NSString, _WKActivatedElementInfo, NSURL, _SFURLTextPreviewViewController, UIViewController;
@protocol _SFAdaptivePreviewViewControllerDelegate, _SFBrowserViewProviding;

@interface _SFAdaptivePreviewViewController : UIViewController <_SFLinkPreviewHeaderDelegate> {
    _SFURLTextPreviewViewController *_textPreviewViewController;
    UIViewController<_SFBrowserViewProviding> *_linkPreviewViewController;
}

@property (weak, nonatomic) id<_SFAdaptivePreviewViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *linkActions;
@property (retain, nonatomic) _WKActivatedElementInfo *activatedElementInfo;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) BOOL showingLinkPreview;
@property (nonatomic) struct CGSize { double width; double height; } preferredDocumentContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (BOOL)_allowsUserInteractionWhenPreviewedInContextMenu;
- (void)_removeViewController:(id)a0;
- (void)_addViewFromViewController:(id)a0;
- (void)_setUpLinkPreviewViewControllerIfNeeded;
- (void)_setUpTextPreviewViewControllerIfNeeded;
- (void)linkPreviewHeader:(id)a0 didEnableLinkPreview:(BOOL)a1;
- (void)linkPreviewHeaderBoundsDidChange:(id)a0;
- (void)setLinkPreviewEnabled:(BOOL)a0;

@end
