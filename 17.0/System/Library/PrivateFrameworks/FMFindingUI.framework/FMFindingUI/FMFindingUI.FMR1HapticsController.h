@class NSString;

@interface FMFindingUI.FMR1HapticsController : NSObject {
    void /* unknown type, empty encoding */ hapticCapability;
    void /* unknown type, empty encoding */ hapticEngine;
    void /* unknown type, empty encoding */ hapticDisplayLink;
    void /* unknown type, empty encoding */ lastRenderTime;
    void /* unknown type, empty encoding */ tapHapticLastPlayTimestamp;
    void /* unknown type, empty encoding */ tapHapticNextPlayDelay;
    void /* unknown type, empty encoding */ tapHapticPlaybackPeriod;
    void /* unknown type, empty encoding */ tapHapticContext;
    void /* unknown type, empty encoding */ singleTapSelectedHapticPattern;
    void /* unknown type, empty encoding */ singleTapSelectedHapticPatternIntensity;
    void /* unknown type, empty encoding */ singleTap1HapticPattern;
    void /* unknown type, empty encoding */ singleTap2HapticPattern;
    void /* unknown type, empty encoding */ singleTap3HapticPattern;
    void /* unknown type, empty encoding */ singleTap4HapticPattern;
    void /* unknown type, empty encoding */ singleTap5HapticPattern;
    void /* unknown type, empty encoding */ connectedHapticPattern;
    void /* unknown type, empty encoding */ buildHapticPattern;
    void /* unknown type, empty encoding */ scatterHapticPattern;
    void /* unknown type, empty encoding */ aheadHapticPattern;
    void /* unknown type, empty encoding */ aheadOffHapticPattern;
    void /* unknown type, empty encoding */ armsReachHapticPattern;
    void /* unknown type, empty encoding */ armsReachOffHapticPattern;
    void /* unknown type, empty encoding */ preNearbyHapticPattern;
    void /* unknown type, empty encoding */ nearbyHapticPattern;
    void /* unknown type, empty encoding */ levelIncreaseHapticPattern;
    void /* unknown type, empty encoding */ levelDecreaseHapticPattern;
    void /* unknown type, empty encoding */ farNearHapticPattern;
    void /* unknown type, empty encoding */ farHapticPattern;
    void /* unknown type, empty encoding */ pulseViewPattern;
    void /* unknown type, empty encoding */ nearbyHapticLastPlayTimestamp;
    void /* unknown type, empty encoding */ continuousHapticPattern;
    void /* unknown type, empty encoding */ continuousHapticPlayer;
    void /* unknown type, empty encoding */ continuousHapticFactor;
    void /* unknown type, empty encoding */ continuousHapticRampingFactorSpring;
    void /* unknown type, empty encoding */ playBuildHapticWorkItem;
    void /* unknown type, empty encoding */ playScatterHapticWorkItem;
    void /* unknown type, empty encoding */ setup;
    void /* unknown type, empty encoding */ hapticsMayBePlaying;
    void /* unknown type, empty encoding */ startContinuousHapticWorkItem;
    void /* unknown type, empty encoding */ restartContinuousHapticWorkItem;
    void /* unknown type, empty encoding */ enablePlayingAheadHaptic;
    void /* unknown type, empty encoding */ isPlayingContinuousHapticPattern;
    void /* unknown type, empty encoding */ playArmsReachHapticWorkItem;
    void /* unknown type, empty encoding */ playNearbyHapticWorkItem;
    void /* unknown type, empty encoding */ hasPlayedArmsReachHaptic;
    void /* unknown type, empty encoding */ continuousHapticFactorLogCounter;
    void /* unknown type, empty encoding */ lastLoggedContinuousHapticFactor;
    void /* unknown type, empty encoding */ playedHapticPatternHandler;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)hapticDisplayLinkUpdateWithDisplaylink:(id)a0;

@end
