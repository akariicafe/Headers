@class SBWindowScene, SBTransientOverlayViewController, SBSRemoteAlertPresentationTarget;

@interface SBRemoteTransientOverlayPresentationRequest : NSObject <NSCopying>

@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (nonatomic) BOOL isScreenshotMarkup;
@property (nonatomic) BOOL shouldDismissSiri;
@property (nonatomic) BOOL shouldDismissPresentedBanners;
@property (nonatomic) BOOL shouldStashPictureInPictureIfNeeded;
@property (nonatomic) BOOL shouldPresentEmbeddedInTargetScene;
@property (nonatomic) BOOL isSceneBacked;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
