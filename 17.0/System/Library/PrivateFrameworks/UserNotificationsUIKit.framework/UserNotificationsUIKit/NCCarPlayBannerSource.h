@class NSString, NSTimer, BNBannerSource, NSPointerArray;
@protocol BNBannerSourceDelegate;

@interface NCCarPlayBannerSource : NSObject <BNBannerSourceDelegate, BNPresentableObserving, BNBannerSourceProvidingPrivate> {
    BNBannerSource *_bannerSource;
    NSPointerArray *_postedPresentables;
}

@property (retain, nonatomic, getter=_dismissTimer, setter=_setDismissTimer:) NSTimer *dismissTimer;
@property (retain, nonatomic, getter=_replaceTimer, setter=_setReplaceTimer:) NSTimer *replaceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long destination;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (weak, nonatomic) id<BNBannerSourceDelegate> delegate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (void)initialize;

- (BOOL)setSuspended:(BOOL)a0 forReason:(id)a1 revokingCurrent:(BOOL)a2 error:(out id *)a3;
- (id)revokeAllPresentablesWithReason:(id)a0 userInfo:(id)a1 error:(out id *)a2;
- (void)_cancelReplaceTimer;
- (void)invalidate;
- (void)_startDismissTimer;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (id)keyWindowForScreen:(id)a0;
- (void).cxx_destruct;
- (id)layoutDescriptionWithError:(out id *)a0;
- (void)_cancelDismissTimer;
- (id)revokePresentableWithIdentification:(id)a0 reason:(id)a1 animated:(BOOL)a2 userInfo:(id)a3 error:(out id *)a4;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)_startReplaceTimer;
- (BOOL)postPresentable:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2 error:(out id *)a3;
- (id)revokePresentableWithRequestIdentifier:(id)a0 reason:(id)a1 animated:(BOOL)a2 userInfo:(id)a3 error:(out id *)a4;
- (void)bannerSourceDidInvalidate:(id)a0;
- (void)_allPresentablesDidDisappear;
- (id)_bannerSource;
- (void)_enqueuePostedPresentable:(id)a0;
- (unsigned long long)_indexOfPostedPresentable:(id)a0;
- (BOOL)_isPresentableSticky:(id)a0;
- (id)_peekPostedPresentable;
- (unsigned long long)_postedPresentableCount;
- (id)_postedPresentablesWithIdentification:(id)a0;
- (void)_presentableDidDisappear:(id)a0;
- (void)_presentableWithIdentificationDidDisappear:(id)a0;
- (id)_pullPostedPresentableAtIndex:(unsigned long long)a0;
- (void)_revokePreviouslyPostedPresentableIfPossible;
- (BOOL)_setSuspended:(BOOL)a0 forReason:(id)a1 revokingCurrent:(BOOL)a2;
- (void)_startAnnounceDismissalTimer;
- (void)_startDismissTimerWithTimeInterval:(double)a0;
- (void)didBeginAnnounceForNotificationRequest:(id)a0;
- (void)didFinishAnnounceForNotificationRequest:(id)a0;

@end
