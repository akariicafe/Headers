@class NSString, CRKCardSectionViewController, _CRKDebugOverlayView, UIView, UIViewController;
@protocol CRKCardSectionView, CRKCardSectionViewControlling, CRKFeedbackDelegateProxying, CRCardSection;

@interface CRKCardSectionViewConfiguration : NSObject

@property (copy, nonatomic, getter=_providerIdentifier, setter=_setProviderIdentifier:) NSString *providerIdentifier;
@property (retain, nonatomic, getter=_debugOverlayView, setter=_setDebugOverlayView:) _CRKDebugOverlayView *debugOverlayView;
@property (nonatomic, getter=_debugModeEnabled, setter=_setDebugModeEnabled:) BOOL debugModeEnabled;
@property (retain, nonatomic, getter=_cardKitCardSectionViewController, setter=_setCardKitCardSectionViewController:) CRKCardSectionViewController *cardKitCardSectionViewController;
@property (retain, nonatomic) id<CRCardSection> cardSection;
@property (retain, nonatomic) UIView<CRKCardSectionView> *cardSectionView;
@property (retain, nonatomic) id<CRKFeedbackDelegateProxying> feedbackDelegateProxy;
@property (retain, nonatomic) UIViewController<CRKCardSectionViewControlling> *cardSectionViewController;

- (void).cxx_destruct;
- (void)_updateDebugOverlayViewText:(id)a0;

@end
