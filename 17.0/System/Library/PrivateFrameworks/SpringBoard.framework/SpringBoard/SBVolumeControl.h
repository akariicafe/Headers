@class NSString, SBElasticHUDSettings, SBHUDController, NSSet, SBConferenceManager, SBRingerControl, NSMutableSet, NSObject, SBAVSystemControllerCache, SBTelephonyManager;
@protocol OS_dispatch_queue;

@interface SBVolumeControl : NSObject <SBElasticHUDViewControllerDelegate, SBElasticVolumeDataSource, SBFZStackParticipantObserver, PTSettingsKeyObserver> {
    SBHUDController *_hudController;
    SBElasticHUDSettings *_elasticHUDSettings;
    SBRingerControl *_ringerControl;
    SBTelephonyManager *_telephonyManager;
    SBConferenceManager *_conferenceManager;
    BOOL _debounce;
    unsigned long long _mode;
    NSSet *_audioCategoriesDisablingVolumeHUD;
    NSMutableSet *_alwaysHiddenCategories;
    NSString *_lastEventCategory;
    BOOL _volumeDownButtonIsDown;
    BOOL _volumeUpButtonIsDown;
    BOOL _controlCenterIsPresented;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _effectiveVolumeLock;
    float _effectiveVolume;
    NSObject<OS_dispatch_queue> *_avscOperationsQueue;
    SBAVSystemControllerCache *_avCache;
}

@property (readonly, nonatomic) NSString *lastDisplayedCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isVolumeChangeAllowedForState:(id)a0 error:(out id *)a1;
+ (BOOL)_isVolumeManagedForCategory:(id)a0;

- (void)cancelVolumeEvent;
- (void)decreaseVolume;
- (void)toggleMute;
- (void)increaseVolume;
- (float)_buttonRepeatDelay;
- (void)addAlwaysHiddenCategory:(id)a0;
- (void)handleVolumeButtonWithType:(long long)a0 down:(BOOL)a1;
- (float)elasticValueViewControllerCurrentValue:(id)a0;
- (BOOL)_isHUDDisplayableForCategory:(id)a0 outReason:(id *)a1;
- (id)presentedVolumeHUDViewController;
- (float)volumeStepUp;
- (BOOL)elasticHUDViewControllerCanBePresented:(id)a0 withReason:(out id *)a1;
- (BOOL)managesVolumeForCategory:(id)a0;
- (float)volumeStepDown;
- (float)_getMediaVolumeForIAP;
- (void)_dispatchAVSystemControllerAsync:(id /* block */)a0;
- (float)_effectiveVolume;
- (void)_resetMediaServerConnection;
- (id)elasticVolumeViewControllerActiveAudioCategory:(id)a0;
- (void)setVolume:(float)a0 forCategory:(id)a1;
- (void)_someSceneWillConnect:(id)a0;
- (void)_effectiveVolumeChanged:(id)a0;
- (void)zStackParticipantWithIdentifier:(long long)a0 settingsDidChange:(id)a1;
- (void)changeVolumeByDelta:(float)a0;
- (void)_presentVolumeHUDWithVolume:(float)a0;
- (void)hideVolumeHUDIfVisible;
- (void)_controlCenterWillPresent:(id)a0;
- (void)_updateEffectiveVolume:(float)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)_isHUDDisplayableWithReason:(out id *)a0;
- (void)clearAlwaysHiddenCategories;
- (void)_processZStackParticipantSettings:(id)a0;
- (id)existingVolumeHUDViewController;
- (id)initWithHUDController:(id)a0 ringerControl:(id)a1 telephonyManager:(id)a2 conferenceManager:(id)a3;
- (BOOL)_isVolumeHUDVisible;
- (void).cxx_destruct;
- (void)zStackParticipantWithIdentifier:(long long)a0 wasAcquiredWithSettings:(id)a1;
- (void)_controlCenterWillDismiss:(id)a0;
- (BOOL)_isHUDDisplayableForLastEventCategoryWithReason:(id *)a0;
- (void)elasticHUDViewControllerRequestsDismissal:(id)a0;
- (BOOL)elasticValueViewController:(id)a0 updateCurrentValue:(float)a1;
- (void)_serverConnectionDied:(id)a0;
- (void)setActiveCategoryVolume:(float)a0;
- (void)removeAlwaysHiddenCategory:(id)a0;
- (id)_avscOperationsQueue;
- (void)_setMediaVolumeForIAP:(float)a0;
- (void)_dispatchAVSystemControllerSync:(id /* block */)a0;
- (BOOL)_isCategoryAlwaysHidden:(id)a0;
- (id)acquireVolumeHUDHiddenAssertionForReason:(id)a0;

@end
