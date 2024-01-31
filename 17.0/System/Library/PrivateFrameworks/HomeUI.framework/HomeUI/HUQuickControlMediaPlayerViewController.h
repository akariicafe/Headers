@class MRUNowPlayingViewController, NSArray, MRPlatterViewController, NSString, NSLayoutConstraint;

@interface HUQuickControlMediaPlayerViewController : HUQuickControlViewController <MRUNowPlayingViewControllerDelegate, MRPlatterViewControllerDelegate>

@property (retain, nonatomic) MRPlatterViewController *mediaControlViewController;
@property (retain, nonatomic) MRUNowPlayingViewController *mediaControlsNowPlayingViewController;
@property (retain, nonatomic) NSArray *mediaControlViewControllerConstraints;
@property (retain, nonatomic) NSLayoutConstraint *viewHeightConstraint;
@property (retain, nonatomic) NSString *mediaRoutingIdentifier;
@property (readonly, nonatomic) long long mediaAccessoryItemType;
@property (nonatomic, getter=isSiriEndPointAccessory) BOOL siriEndPointAccessory;
@property (nonatomic, getter=isSpeakerAccessory) BOOL speakerAccessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_updateConstraints;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)nowPlayingViewController:(id)a0 didChangeSizeWithAnimations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)title;
- (void)platterViewController:(id)a0 didReceiveInteractionEvent:(id)a1;
- (void)_addMediaControlView;
- (void)_updateMediaControlAppearanceForTraitCollection:(id)a0;
- (BOOL)hasSingleControlView;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (void)nowPlayingViewControllerDidChangeLayout:(id)a0;
- (void)platterViewController:(id)a0 didUpdateEndpointWithReason:(id)a1;
- (void)setPreferredFrameLayoutGuide:(id)a0;

@end
