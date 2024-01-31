@class NSString, NSArray, MRUCoverSheetViewController;

@interface CSMediaControlsViewController : CSCoverSheetViewControllerBase <MRUCoverSheetViewControllerDelegate, CSAdjunctItemHosting> {
    MRUCoverSheetViewController *_mediaRemoteViewController;
    long long _mediaRemoteLayout;
    struct CGSize { double width; double height; } _containerSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double containerCornerRadius;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (Class)viewClass;

- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (long long)presentationPriority;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (long long)presentationType;
- (void)viewWillLayoutSubviews;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)viewDidLoad;
- (void)coverSheetViewController:(id)a0 didReceiveInteractionEvent:(id)a1;
- (void)coverSheetViewController:(id)a0 willChangeToLayout:(long long)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_layoutMediaControls;
- (double)_preferredMediaRemoteHeight;
- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_suggestedFrameForMediaControls;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (void)_updatePersistentUpdatesEnabled:(BOOL)a0;

@end
