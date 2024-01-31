@class NSString, NSDictionary, SBProductivityGestureEducationPillViewController, BSAbsoluteMachTimer;
@protocol BNPosting;

@interface SBProductivityGestureEducationController : NSObject <SBProductivityGestureEducationPillViewControllerDelegate> {
    id<BNPosting> _bannerPoster;
    NSDictionary *_educationItemMap;
    BSAbsoluteMachTimer *_bannerDismissTimer;
    SBProductivityGestureEducationPillViewController *_educationPillViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_dismissBanner:(id)a0;
- (void)_itemMapUpdated;
- (void)_dismissBannerTimerWithInterval:(double)a0 reason:(id)a1;
- (void)_invalidateBannerTimer;
- (long long)_itemTypeForType:(long long)a0;
- (void)_loadItemMap;
- (void)_presentBannerWithEducationItem:(id)a0;
- (void)_resetPillViewController:(id)a0;
- (void)gestureActivatedForType:(long long)a0;
- (void)gestureEducationPillViewControllerDidDisappear:(id)a0;
- (void)gestureEducationPillViewControllerDidReceiveUserTap:(id)a0;
- (void)gestureEducationPillViewControllerFailsToAppear:(id)a0;
- (void)gestureEducationPillViewControllerMarqueeStarted:(id)a0 duration:(double)a1;
- (void)gestureEducationPillViewControllerWillAppear:(id)a0;
- (id)initWithBannerPoster:(id)a0;

@end
