@class SCKPMediaControlCardSectionView, NSString, SFMediaRemoteControlCardSection, AFSecurityConnection, UIViewController;
@protocol CRKCardSectionViewControllingDelegate;

@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling> {
    AFSecurityConnection *_assistantSecurityConnection;
    UIViewController *_mediaPlatterViewController;
}

@property (readonly) SFMediaRemoteControlCardSection *cardSection;
@property (readonly) SCKPMediaControlCardSectionView *view;
@property (weak, nonatomic) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)traitCollectionDidChange:(id)a0;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_nowPlayingViewControllerWithRouteUID:(id)a0;
- (id)_nowPlayingVisualStylingProvider;
- (void)_updateActiveSystemEndpointForRouteUID:(id)a0;
- (void)_updatePlatterForHashedRouteUID:(id)a0;
- (void)_updatePlatterForRouteUID:(id)a0;
- (id)initWithMediaRemoteControlCardSection:(id)a0;

@end
