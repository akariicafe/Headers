@class NSString, SBRingerHUDViewController, SBControlCenterController, SBBannerManager, SBSoundController, SBSystemActionCompoundPreviewAssertion, SBRingerAlertElement, NSObject, SBAVSystemControllerCache;
@protocol OS_dispatch_queue;

@interface SBRingerControl : NSObject <SBAVSystemControllerCacheObserver, SBControlCenterObserver, SBRingerHUDViewControllerDelegate, SBRingerAlertElementDelegate> {
    SBAVSystemControllerCache *_avCache;
    NSObject<OS_dispatch_queue> *_avscOperationsQueue;
    BOOL _ringerMuted;
    float _volume;
    SBBannerManager *_bannerManager;
    SBSoundController *_soundController;
    SBRingerHUDViewController *_ringerHUDViewController;
    SBSystemActionCompoundPreviewAssertion *_compoundPreviewAssertion;
    SBRingerAlertElement *_ringerAlertElement;
}

@property (weak, nonatomic) SBControlCenterController *controlCenterController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)completeSetupWithRingerMuted:(BOOL)a0;
- (void)controlCenterWillPresent;
- (BOOL)_accessibilityIsRingerMuted;
- (id)observeRingerMutedWithBlock:(id /* block */)a0;
- (void)ringerAlertElementWantsToBeDismissed:(id)a0 forReason:(id)a1;
- (void)setRingerMuted:(BOOL)a0 withFeedback:(BOOL)a1 reason:(id)a2 clientType:(unsigned int)a3;
- (void)ringerAlertElementWantsToBePresented:(id)a0;
- (void)ringerAlertElementWantsToResetAutomaticInvalidationTimer:(id)a0;
- (void)ringerHUDViewControllerWantsToBeDismissed:(id)a0;
- (void).cxx_destruct;
- (void)controlCenterDidDismiss;
- (id)previewRingerStateForReason:(id)a0;
- (id)soundForRingerMuted:(BOOL)a0;
- (void)ringerHUDViewControllerWantsToBePresented:(id)a0;
- (void)cache:(id)a0 didUpdateRingerMuted:(BOOL)a1;

@end
